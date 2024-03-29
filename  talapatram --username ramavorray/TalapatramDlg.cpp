// TalapatramDlg.cpp : implementation file

#include "stdafx.h"
#include "Talapatram.h"
#include "TalapatramDlg.h"
#include ".\talapatramdlg.h"
#include "textfile.h"
#include ".\keyboard.h"

using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()



/**
* CTalapatramDlg dialog constructor
*/
CTalapatramDlg::CTalapatramDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTalapatramDlg::IDD, pParent)
{
	m_initHlpFilePath=false;
	m_keyboard_flg=false;
   m_dispBox=NULL;
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
   
   m_curLang=12;
	m_fontBengali.CreatePointFont(180, _T("Vrinda"));
	m_fontEnglish.CreatePointFont(180, _T("Arial Unicode MS"));
	m_fontFarsi.CreatePointFont(180, _T("Times New Roman"));
	m_fontFarsi2.CreatePointFont(120, _T("Times New Roman"));
	m_fontGujarati.CreatePointFont(150, _T("Shruti"));
	m_fontGujarati2.CreatePointFont(115, _T("Shruti"));
	m_fontHindi.CreatePointFont(150, _T("Mangal"));
	m_fontKannada.CreatePointFont(150, _T("Tunga"));
	m_fontKannada2.CreatePointFont(120, _T("Tunga"));
	m_fontMalayalam.CreatePointFont(180, _T("Kartika"));
	m_fontMalayalam2.CreatePointFont(150, _T("Kartika"));
	m_fontMarathi.CreatePointFont(150, _T("Mangal"));
	m_fontPunjabi.CreatePointFont(180, _T("Raavi"));
	m_fontPunjabi2.CreatePointFont(120, _T("Raavi"));
	m_fontTamil.CreatePointFont(130, _T("Latha"));
	m_fontTamil2.CreatePointFont(80, _T("Latha"));
	m_fontTelugu.CreatePointFont(150, _T("Gautami"));
	m_fontTelugu2.CreatePointFont(120, _T("Gautami"));
	m_fontTelugu3.CreatePointFont(100, _T("Gautami"));
	m_fontUrdu.CreatePointFont(180, _T("Times New Roman"));
	m_supFont.CreatePointFont(80, _T("Arial Bold"));

	m_langIDs[0]=_T("00000445");	//bengali
	m_langIDs[1]=_T("00000809");	//english
	m_langIDs[2]=_T("00000429");	//farsi
	m_langIDs[3]=_T("00000447");	//gujarati
	m_langIDs[4]=_T("00010439");	//hindi
	m_langIDs[5]=_T("0000044b");	//kannada
	m_langIDs[6]=_T("0000044c");	//malayalam
	m_langIDs[7]=_T("0000044e");	//marathi
	m_langIDs[8]=_T("00000446");	//punjabi
	m_langIDs[9]=_T("00000449");	//tamil
	m_langIDs[10]=_T("0000044a");	//telugu
	m_langIDs[11]=_T("00000420");	//urdu

	m_langsInTheirLang[0]=_T("অ আ ই ঈ");
	m_langsInTheirLang[1]=_T("A B C D");
	m_langsInTheirLang[2]=_T("ی ث ب ق");
	m_langsInTheirLang[3]=_T("અ આ ઇ ઈ");
	m_langsInTheirLang[4]=_T("अ आ इ ई");
	m_langsInTheirLang[5]=_T("ಅ ಆ ಇ ಈ");
	m_langsInTheirLang[6]=_T("അ ആ ഇ ഈ");
	m_langsInTheirLang[7]=_T("अ आ इ ई");
	m_langsInTheirLang[8]=_T("ਅ ਆ ਇ ਈ");
	m_langsInTheirLang[9]=_T("அ ஆ இ ஈ");
	m_langsInTheirLang[10]=_T("అ ఆ ఇ ఈ");
	m_langsInTheirLang[11]=_T("ڑ ذ ں ڈ");

	m_iconMenuAsterisk = AfxGetApp()->LoadIcon(IDI_ASTERISK_CUR);
    m_iconMenuSemiColon = AfxGetApp()->LoadIcon(IDI_SEMICOLON);
	m_iconMenuExclaim = AfxGetApp()->LoadIcon(IDI_EXCLAIM);
	m_iconMenuQMark = AfxGetApp()->LoadIcon(IDI_QMARK);
	m_iconMenuColon = AfxGetApp()->LoadIcon(IDI_COLON);
	m_iconMenuSApos = AfxGetApp()->LoadIcon(IDI_SAPOS);
	m_iconMenuDApos = AfxGetApp()->LoadIcon(IDI_DAPOS);
}

CTalapatramDlg::~CTalapatramDlg()
{
	if(m_keyboard_flg)
		delete m_keyboard;
}

void CTalapatramDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_LANGLIST2, m_langList);

	if(m_curLang==4)	//hindi
	{
		SetButtonsFonts(&m_fontHindi);
		SetSupButtonsFonts();
		
		if(m_keyboard_flg)
			m_keyboard->SetHindiText();
	}
	else if(m_curLang==10)	//telugu
	{
		SetButtonsFonts(&m_fontTelugu);

		if(m_keyboard_flg)
		{
			m_keyboard->m_a1.SetFont(&m_fontTelugu3);
			m_keyboard->m_s2.SetFont(&m_fontTelugu2);
			m_keyboard->m_f1.SetFont(&m_fontTelugu2);
			m_keyboard->m_r1.SetFont(&m_fontTelugu3);
		}
		SetSupButtonsFonts();
		if(m_keyboard_flg)
			m_keyboard->SetTeluguText();
	}
	else if(m_curLang==0)	//bengali
	{
		SetButtonsFonts(&m_fontBengali);
		SetSupButtonsFonts();
		if(m_keyboard_flg)
			m_keyboard->SetBengaliText();
	}
	else if(m_curLang==1)	//english
	{
		SetButtonsFonts(&m_fontEnglish);
		SetSupButtonsFonts();
		if(m_keyboard_flg)
			m_keyboard->SetEnglishText();
	}
	else if(m_curLang==11)	//urdu
	{
		SetButtonsFonts(&m_fontUrdu);
		SetSupButtonsFonts();
		if(m_keyboard_flg)
			m_keyboard->SetUrduText();
	}
	else if(m_curLang==9)	//tamil
	{
		SetButtonsFonts(&m_fontTamil);
		if(m_keyboard_flg)
		{
			m_keyboard->m_q1.SetFont(&m_fontTamil2);
			m_keyboard->m_bar1.SetFont(&m_fontTamil2);
			m_keyboard->m_82.SetFont(&m_fontTamil2);
			m_keyboard->m_w1.SetFont(&m_fontTamil2);
			m_keyboard->m_q2.SetFont(&m_fontTamil2);
			m_keyboard->m_u1.SetFont(&m_fontTamil2);
			m_keyboard->m_a1.SetFont(&m_fontTamil2);
		}
		SetSupButtonsFonts();
		if(m_keyboard_flg)
			m_keyboard->SetTamilText();
	}
	else if(m_curLang==8)	//punjabi
	{
		SetButtonsFonts(&m_fontPunjabi);
		if(m_keyboard_flg)
		{
			m_keyboard->m_r1.SetFont(&m_fontPunjabi2);
			m_keyboard->m_r2.SetFont(&m_fontPunjabi2);
			m_keyboard->m_t2.SetFont(&m_fontPunjabi2);
			m_keyboard->m_a1.SetFont(&m_fontPunjabi2);
			m_keyboard->m_a2.SetFont(&m_fontPunjabi2);
			m_keyboard->m_s1.SetFont(&m_fontPunjabi2);
			m_keyboard->m_s2.SetFont(&m_fontPunjabi2);
			m_keyboard->m_f1.SetFont(&m_fontPunjabi2);
			m_keyboard->m_f2.SetFont(&m_fontPunjabi2);
			m_keyboard->m_g2.SetFont(&m_fontPunjabi2);
			m_keyboard->m_x1.SetFont(&m_fontPunjabi2);
			m_keyboard->m_x2.SetFont(&m_fontPunjabi2);
			m_keyboard->m_x4.SetFont(&m_fontPunjabi2);
			m_keyboard->m_b3.SetFont(&m_fontPunjabi2);
			m_keyboard->m_63.SetFont(&m_fontPunjabi2);
			m_keyboard->m_93.SetFont(&m_fontPunjabi2);
		}
		SetSupButtonsFonts();
		if(m_keyboard_flg)
			m_keyboard->SetPunjabiText();
	}
	if(m_curLang==7)	//marathi
	{
		SetButtonsFonts(&m_fontMarathi);
		SetSupButtonsFonts();
		if(m_keyboard_flg)
			m_keyboard->SetMarathiText();
	}
	else if(m_curLang==6)	//malayalam
	{
		SetButtonsFonts(&m_fontMalayalam);

		if(m_keyboard_flg)
		{
			m_keyboard->m_q1.SetFont(&m_fontMalayalam2);
			m_keyboard->m_w1.SetFont(&m_fontMalayalam2);
			m_keyboard->m_w2.SetFont(&m_fontMalayalam2);
			m_keyboard->m_bar1.SetFont(&m_fontMalayalam2);
			m_keyboard->m_r2.SetFont(&m_fontMalayalam2);
			m_keyboard->m_a1.SetFont(&m_fontMalayalam2);
		}
		SetSupButtonsFonts();
		if(m_keyboard_flg)
			m_keyboard->SetMalayalamText();
	}
	else if(m_curLang==5)	//kannada
	{
		SetButtonsFonts(&m_fontKannada);
		if(m_keyboard_flg)
		{
			m_keyboard->m_bar1.SetFont(&m_fontKannada2);
			m_keyboard->m_32.SetFont(&m_fontKannada2);
			m_keyboard->m_a1.SetFont(&m_fontKannada2);
		}
		SetSupButtonsFonts();
		if(m_keyboard_flg)
			m_keyboard->SetKannadaText();
	}
	else if(m_curLang==3)	//gujarati
	{
		SetButtonsFonts(&m_fontGujarati);
		if(m_keyboard_flg)
		{
			m_keyboard->m_12.SetFont(&m_fontGujarati2);
			m_keyboard->m_22.SetFont(&m_fontGujarati2);
			m_keyboard->m_q1.SetFont(&m_fontGujarati2);
			m_keyboard->m_q2.SetFont(&m_fontGujarati2);
			m_keyboard->m_w1.SetFont(&m_fontGujarati2);
			m_keyboard->m_w2.SetFont(&m_fontGujarati2);
			m_keyboard->m_r1.SetFont(&m_fontGujarati2);
			m_keyboard->m_a1.SetFont(&m_fontGujarati2);
			m_keyboard->m_a2.SetFont(&m_fontGujarati2);
			m_keyboard->m_s1.SetFont(&m_fontGujarati2);
			m_keyboard->m_s2.SetFont(&m_fontGujarati2);
			m_keyboard->m_f1.SetFont(&m_fontGujarati2);
			m_keyboard->m_hash1.SetFont(&m_fontGujarati2);
			m_keyboard->m_hash2.SetFont(&m_fontGujarati2);
			m_keyboard->m_x1.SetFont(&m_fontGujarati2);
         m_keyboard->m_x2.SetFont(&m_fontGujarati2);
         m_keyboard->m_x4.SetFont(&m_fontGujarati2);
		}
		SetSupButtonsFonts();
		if(m_keyboard_flg)
			m_keyboard->SetGujaratiText();
	}
	else if(m_curLang==2)	//farsi
	{
		SetButtonsFonts(&m_fontFarsi);
		if(m_keyboard_flg)
			m_keyboard->m_r2.SetFont(&m_fontFarsi2);
		SetSupButtonsFonts();
		if(m_keyboard_flg)
			m_keyboard->SetFarsiText();
	}

	DDX_Control(pDX, IDC_ASTERISK, m_menuAsterisk);
	DDX_Control(pDX, IDC_SEMICOLON, m_menuSemiColon);
	DDX_Control(pDX, IDC_EXCLAIM, m_menuExclaim);
	DDX_Control(pDX, IDC_QMARK, m_menuQMark);
	DDX_Control(pDX, IDC_COLON, m_menuColon);
	DDX_Control(pDX, IDC_SAPOS, m_menuSApos);
	DDX_Control(pDX, IDC_DAPOS, m_menuDApos);

	m_menuAsterisk.SetIcon(m_iconMenuAsterisk);
	m_menuSemiColon.SetIcon(m_iconMenuSemiColon);
	m_menuExclaim.SetIcon(m_iconMenuExclaim);
	m_menuQMark.SetIcon(m_iconMenuQMark);
	m_menuColon.SetIcon(m_iconMenuColon);
	m_menuSApos.SetIcon(m_iconMenuSApos);
	m_menuDApos.SetIcon(m_iconMenuDApos);
}

BEGIN_MESSAGE_MAP(CTalapatramDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_LBN_SELCHANGE(IDC_LANGLIST2, OnLbnSelchangeLanglist)
	ON_BN_CLICKED(IDC_FONTHELPER, OnBnClickedFonthelper)
	ON_BN_CLICKED(IDC_SAVE_CONTENTS, OnBnClickedSaveContents)
	ON_BN_CLICKED(IDC_DISP_KEYBOARD, OnBnClickedDispKeyboard)
   ON_WM_SETFOCUS()
   ON_WM_SIZE()
   ON_BN_CLICKED(IDC_ASTERISK, OnBnClickedAsterisk)
   ON_BN_CLICKED(IDC_SEMICOLON, OnBnClickedSemicolon)
   ON_BN_CLICKED(IDC_EXCLAIM, OnBnClickedExclaim)
   ON_BN_CLICKED(IDC_QMARK, OnBnClickedQmark)
   ON_BN_CLICKED(IDC_COLON, OnBnClickedColon)
   ON_BN_CLICKED(IDC_SAPOS, OnBnClickedSapos)
   ON_BN_CLICKED(IDC_DAPOS, OnBnClickedDapos)
   ON_BN_CLICKED(IDC_ABOUT, OnBnClickedAbout)
	ON_WM_DESTROY()
	ON_WM_CREATE()
END_MESSAGE_MAP()


// CTalapatramDlg message handlers

BOOL CTalapatramDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	//m_dispBox=new DISP_BOX();
	//if (!m_dispBox->Create(NULL, NULL, ES_AUTOVSCROLL | ES_WANTRETURN | ES_MULTILINE | WS_BORDER | WS_TABSTOP | WS_VSCROLL /*| WS_SIZEBOX*//*CEditView::dwStyleDefault*/,
		//CRect(20, 50, 1068, 355), this, 1))
	//{
		//TRACE0("Failed to create view window\n");
		//return -1;
	//}
	//m_dispBox->ShowWindow(SW_SHOW);

	//set text limit to 5MB
	//m_dispBox->GetEditCtrl().SetLimitText(5 * 1024 * 1024);

	/**Set the icon for this dialog.  The framework does this automatically
	* when the application's main window is not a dialog
   **/
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	m_langs[0]=_T("Bengali");
	m_langs[1]=_T("English (UK)");
	m_langs[2]=_T("Farsi");
	m_langs[3]=_T("Gujarati");
	m_langs[4]=_T("Hindi");
	m_langs[5]=_T("Kannada");
	m_langs[6]=_T("Malayalam");
	m_langs[7]=_T("Marathi");
	m_langs[8]=_T("Punjabi");
	m_langs[9]=_T("Tamil");
	m_langs[10]=_T("Telugu");
	m_langs[11]=_T("Urdu");
	m_langs[12]=_T("Default Language");
	for(int i=0; i<NUMLANGS+1; i++)
		m_langList.InsertString(i, m_langs[i]);
	m_langList.SetCurSel(m_curLang);

	if(!SystemParametersInfo(SPI_GETDEFAULTINPUTLANG, 0, &m_systemDefaultLang, 0))
	{
		MessageBox(_T("Cannot retrieve default Keyboard Layout. Click on 'Fonts?' button for help"), _T("Error"), MB_OK);
	}
	//if(LoadKeyboardLayout(m_langIDs[m_curLang], KLF_ACTIVATE)==NULL)
      //MessageBox(_T("Cannot load Hindi Keyboard Layout. Click on 'Fonts?' button for help"), _T("Error"), MB_OK);

	//SetButtonsFonts(&m_fontHindi);
	//m_dispBox->SetFont(&m_fontHindi);

	CString title; title+=m_langs[m_curLang];// title+=" - ";
	//title+=m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

   //get path for help file 'index.html' and store it for later use
   if(!m_initHlpFilePath)
   {
      CString path;
      wchar_t *buffer=new wchar_t[_MAX_PATH];
      if(_wgetcwd(buffer, _MAX_PATH)==NULL)
      {
         if(!path.GetEnvironmentVariable(_T("PROGRAMFILES")))
            path=_T("index.html");
         else
            path+=_T("\\Talapatram\\index.html");
      }
      else
      {
         wstring tmp=_T("\\index.html");
         path.Format(_T("%s%s"), buffer, tmp.c_str());
      }
      m_hlpFilePath=path;
      m_initHlpFilePath=true;
	  delete [] buffer;
   }

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CTalapatramDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

//If you add a minimize button to your dialog, you will need the code below
//to draw the icon.  For MFC applications using the document/view model,
//this is automatically done for you by the framework.

void CTalapatramDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//The system calls this function to obtain the cursor to display while the user drags
//the minimized window.
HCURSOR CTalapatramDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CTalapatramDlg::OnLbnSelchangeLanglist()
{
	m_curLang=m_langList.GetCurSel();

	if(m_curLang == 12)
	{
		SystemParametersInfo(SPI_SETDEFAULTINPUTLANG, 0, &m_systemDefaultLang, SPIF_SENDCHANGE);
		::PostMessage(HWND_BROADCAST, WM_INPUTLANGCHANGEREQUEST, INPUTLANGCHANGE_SYSCHARSET, (LPARAM)m_systemDefaultLang);
		return;
	}

	HKL hklVal=LoadKeyboardLayout(m_langIDs[m_curLang], KLF_SETFORPROCESS);
	LoadKeyboardLayout(m_langIDs[m_curLang], KLF_ACTIVATE);
   if(GetLastError()!=ERROR_SUCCESS)
      MessageBox(_T("I am not able to load Keyboard Layout for selected Language. Click on 'Fonts?' button for help"), _T("Sorry, I did not do your request"), MB_OK);
	
   //m_dispBox->SetFocus();
	CString title; title+=m_langs[m_curLang]; title+=" - ";
	title+=m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);
	if(m_keyboard_flg)
		m_keyboard->m_curLang=m_curLang;

	if(!SystemParametersInfo(SPI_SETDEFAULTINPUTLANG, 0, &hklVal, SPIF_SENDCHANGE))
	{
		MessageBox(_T("Unable to load keyboard layout for the selected language. Click on 'Fonts?' button for help."), _T("Usability Error"), MB_OK);
		return;
	}
	::PostMessage(HWND_BROADCAST, WM_INPUTLANGCHANGEREQUEST, INPUTLANGCHANGE_SYSCHARSET, (LPARAM)hklVal);

	UpdateData(1);
}

void CTalapatramDlg::OnBnClickedFonthelper()
{
   if((int)ShellExecute(AfxGetMainWnd()->m_hWnd, _T("Open"), m_hlpFilePath, 0, 0, SW_SHOWNORMAL)<=32)
   {
      if(::MessageBox(AfxGetMainWnd()->m_hWnd, _T("Help file 'index.html' is missing from my working folder. Shall I go online and open it?"), _T("Local File Missing"), MB_YESNO)==IDYES)
      {
         ShellExecute(AfxGetMainWnd()->m_hWnd, _T("Open"), _T("http://www.funnotes.net/talapatram/langsup.html"), 0, 0, SW_SHOWNORMAL);
      }
      else
         ::MessageBox(AfxGetMainWnd()->m_hWnd, _T("Contact me at www.funnotes.net/talapatram/contact.html to get this file."), _T("Contact Author"), MB_OK);
   }
}

void CTalapatramDlg::OnBnClickedSaveContents()
{
 //  LoadKeyboardLayout(m_langIDs[1], KLF_ACTIVATE); //english
 //  CFileDialog fileSave(false, _T(".txt"), 0, OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT, _T("Unicode UTF-8 Encoded Files (*.txt)|*.txt||"), this);
	//fileSave.m_pOFN->lpstrTitle=_T("Save Contents as Unicode (UTF8) Files");
	//INT_PTR retVal = fileSave.DoModal();
	//if(retVal==IDOK)
	//{
 //     CTextFileWrite myfile(fileSave.GetPathName(), CTextFileWrite::UTF_8);
 //     ASSERT(myfile.IsOpen());
 //     CString contents;
 //     m_dispBox->GetWindowText(contents);
 //     myfile<<contents;
 //     myfile.Close();
	//}
}

void CTalapatramDlg::OnBnClickedDispKeyboard()
{
	if(!m_keyboard_flg)
	{
		m_keyboard = new Keyboard(this);
		m_keyboard_flg=true;
	}
	else
	{
		delete m_keyboard;
		m_keyboard_flg=false;
	}
}

void CTalapatramDlg::OnSetFocus(CWnd* pOldWnd)
{
   CDialog::OnSetFocus(pOldWnd);

   LoadKeyboardLayout(m_langIDs[m_curLang], KLF_ACTIVATE);
}

void CTalapatramDlg::SetButtonsFonts(CFont *font)
{
	if(m_keyboard_flg)
		m_keyboard->SetButtonsFonts(font);
	//if(m_dispBox!=NULL)
		//m_dispBox->SetFont(font);
}

void CTalapatramDlg::SetSupButtonsFonts()
{
	if(m_keyboard_flg)
		m_keyboard->SetSupButtonsFonts(&m_supFont);
}
void CTalapatramDlg::OnSize(UINT nType, int cx, int cy)
{
	CDialog::OnSize(nType, cx, cy);

	RECT rect;
	GetWindowRect((LPRECT)&rect);
	SetWindowPos(&wndTopMost, rect.left, rect.top, cx, cy, SWP_NOSIZE);
	//if(m_dispBox)
		//m_dispBox->SetWindowPos(NULL, 20, 50, cx-40, cy-80, 0);
}

void CTalapatramDlg::OnBnClickedAsterisk()
{
	CString string;
	//CPoint caretPos=m_dispBox->GetEditCtrl().GetCaretPos();
	//m_dispBox->GetEditCtrl().GetWindowText(string);
	string="*";
	//m_dispBox->GetEditCtrl().SetWindowText((LPCTSTR)string);
	//m_dispBox->SetFocus();
	//caretPos.x++;
	//m_dispBox->GetEditCtrl().SetCaretPos(caretPos);
	//m_dispBox->GetEditCtrl().ShowCaret();
}

void CTalapatramDlg::OnBnClickedSemicolon()
{
	CString string;
	//CPoint caretPos=m_dispBox->GetEditCtrl().GetCaretPos();
	//m_dispBox->GetEditCtrl().GetWindowText(string);
	string=";";
	//m_dispBox->GetEditCtrl().SetWindowText((LPCTSTR)string);
	//m_dispBox->SetFocus();
	/*caretPos.x++;
	m_dispBox->GetEditCtrl().SetCaretPos(caretPos);*/
}

void CTalapatramDlg::OnBnClickedExclaim()
{
	CString string;
	//CPoint caretPos=m_dispBox->GetEditCtrl().GetCaretPos();
	//m_dispBox->GetEditCtrl().GetWindowText(string);
	string="!";
	//m_dispBox->GetEditCtrl().SetWindowText((LPCTSTR)string);
	//m_dispBox->SetFocus();
	/*caretPos.x++;
	m_dispBox->GetEditCtrl().SetCaretPos(caretPos);*/
}

void CTalapatramDlg::OnBnClickedQmark()
{
	CString string;
	//CPoint caretPos=m_dispBox->GetEditCtrl().GetCaretPos();
	//m_dispBox->GetEditCtrl().GetWindowText(string);
	string="?";
	//m_dispBox->GetEditCtrl().SetWindowText((LPCTSTR)string);
	//m_dispBox->SetFocus();
	/*caretPos.x++;
	m_dispBox->GetEditCtrl().SetCaretPos(caretPos);*/
}

void CTalapatramDlg::OnBnClickedColon()
{
	CString string;
	//CPoint caretPos=m_dispBox->GetEditCtrl().GetCaretPos();
	//m_dispBox->GetEditCtrl().GetWindowText(string);
	string=":";
	//m_dispBox->GetEditCtrl().SetWindowText((LPCTSTR)string);
   //m_dispBox->SetFocus();
	/*caretPos.x++;
	m_dispBox->GetEditCtrl().SetCaretPos(caretPos);*/
}

void CTalapatramDlg::OnBnClickedSapos()
{
	CString string;
	//CPoint caretPos=m_dispBox->GetEditCtrl().GetCaretPos();
	//m_dispBox->GetEditCtrl().GetWindowText(string);
	string="'";
	//m_dispBox->GetEditCtrl().SetWindowText((LPCTSTR)string);
	//m_dispBox->SetFocus();
	/*caretPos.x++;
	m_dispBox->GetEditCtrl().SetCaretPos(caretPos);*/
}

void CTalapatramDlg::OnBnClickedDapos()
{
	CString string;
	//CPoint caretPos=m_dispBox->GetEditCtrl().GetCaretPos();
	//m_dispBox->GetEditCtrl().GetWindowText(string);
	string="\"";
	//m_dispBox->GetEditCtrl().SetWindowText((LPCTSTR)string);
	//m_dispBox->SetFocus();
	/*caretPos.x++;
	m_dispBox->GetEditCtrl().SetCaretPos(caretPos);*/
}

void CTalapatramDlg::OnBnClickedAbout()
{
	CAboutDlg dlgAbout;
	dlgAbout.DoModal();
}

void CTalapatramDlg::OnDestroy()
{
	CDialog::OnDestroy();

	TrayMessage(NIM_DELETE);

	SystemParametersInfo(SPI_SETDEFAULTINPUTLANG, 0, &m_systemDefaultLang, SPIF_SENDCHANGE);
	::PostMessage(HWND_BROADCAST, WM_INPUTLANGCHANGEREQUEST, INPUTLANGCHANGE_SYSCHARSET, (LPARAM)m_systemDefaultLang);
}

BOOL CTalapatramDlg::TrayMessage(DWORD dwMessage)
{
	CString sTip;
	GetWindowText(sTip);
	NOTIFYICONDATA tnd;
	tnd.cbSize = sizeof(NOTIFYICONDATA);
	tnd.hWnd = m_hWnd;
	tnd.uID = IDR_MAINFRAME;
	tnd.uFlags = NIF_MESSAGE|NIF_ICON;
	tnd.uCallbackMessage = MYWM_NOTIFYICON;
	tnd.uFlags = NIF_MESSAGE|NIF_ICON|NIF_TIP; 
	VERIFY(tnd.hIcon = LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE (IDR_MAINFRAME)));
	lstrcpyn(tnd.szTip, (LPCTSTR)sTip, sizeof(tnd.szTip));

	return Shell_NotifyIcon(dwMessage, &tnd);
}

int CTalapatramDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	TrayMessage(NIM_ADD);

	m_curWindow=NULL;

	return 0;
}

LRESULT CTalapatramDlg::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	if(message == MYWM_NOTIFYICON){ 
        switch (lParam)
		{
		case WM_LBUTTONDOWN: 
			switch (wParam)
			{
			case IDR_MAINFRAME:
				if(ShowWindow(SW_NORMAL))
					ShowWindow(SW_HIDE);
				else
				{
					SetForegroundWindow();
					SetFocus();
				}
				return TRUE; 
				break; 
			} 
			break; 
		} 
	}

	return CDialog::WindowProc(message, wParam, lParam);
}

void CTalapatramDlg::PutTextInCurrentWindow(CString text)
{
	if(OpenClipboard())
	{
		HGLOBAL clipbuffer;
		EmptyClipboard();
		clipbuffer = GlobalAlloc(GMEM_MOVEABLE, (text.GetLength()+1)*sizeof(wchar_t));
		wchar_t *buffer = (wchar_t *)GlobalLock(clipbuffer);
		wcscpy(buffer, text.GetBuffer());
		SetClipboardData(CF_UNICODETEXT, clipbuffer);
		GlobalUnlock(clipbuffer);
		GlobalFree(clipbuffer);
		CloseClipboard();       

		INPUT   input[4];

		::SetForegroundWindow(m_curWindow);
		::SetActiveWindow(m_curWindow);
		::SetFocus(m_curWindow);

		memset(input, 0, sizeof(input));

		input[0].type           = INPUT_KEYBOARD;
		input[0].ki.wVk         = VK_CONTROL;
		input[1].type           = INPUT_KEYBOARD;
		input[1].ki.wVk         = 'V';
		input[2].type           = INPUT_KEYBOARD;
		input[2].ki.wVk         = 'V';
		input[2].ki.dwFlags     = KEYEVENTF_KEYUP;
		input[3].type           = INPUT_KEYBOARD;
		input[3].ki.wVk         = VK_CONTROL;
		input[3].ki.dwFlags     = KEYEVENTF_KEYUP;

		::SendInput(4, input, sizeof(INPUT));
	}
}

void CTalapatramDlg::SetCurWindow(HWND curWindow)
{
	m_curWindow = curWindow;
}
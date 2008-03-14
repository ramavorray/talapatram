/*-----------------------------------
Class: Keyboard

This class is an interface class for displaying keyboard layouts. It takes font information and control variables from
CTalapatramDlg class and displays as an UI. This class holds text data of all languages in Unicode format. Encoding
used to save these files is 'Unicode-Codepage 1200'.

Added in v2.0

Written by: Rama Aravind Vorray, Oct, 2007.
-----------------------------------*/

#pragma once
#include "afxwin.h"

class Keyboard;
class DISP_BOX;

// CTalapatramDlg dialog
class CTalapatramDlg : public CDialog
{
// Construction
public:
	CTalapatramDlg(CWnd* pParent = NULL);	// standard constructor
	virtual ~CTalapatramDlg();

// Dialog Data
	enum { IDD = IDD_TALAPATRAM_DIALOG };
	int m_curLang;
	CFont m_fontBengali,
		m_fontEnglish,
		m_fontFarsi,
		m_fontFarsi2,
		m_fontGujarati,
		m_fontGujarati2,
		m_fontHindi,
		m_fontKannada,
		m_fontKannada2,
		m_fontMalayalam,
		m_fontMalayalam2,
		m_fontMarathi,
		m_fontPunjabi,
		m_fontPunjabi2,
		m_fontTamil,
		m_fontTamil2,
		m_fontTelugu,
		m_fontTelugu2,
		m_fontTelugu3,
		m_fontUrdu,
		m_supFont;

	bool m_keyboard_flg;

	void SetButtonsFonts(CFont *font);
	void SetSupButtonsFonts();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
   bool m_initHlpFilePath;
   CString m_hlpFilePath;
	enum consts{NUMLANGS=12};
	
	DISP_BOX *m_dispBox;
	Keyboard *m_keyboard;

	CString m_langIDs[NUMLANGS];
 //  string m_langFonts[NUMLANGS];
	
	
	//CListBox m_langList;
	CComboBox m_langList;

public:
	CString m_langs[NUMLANGS];
	CString m_langsInTheirLang[NUMLANGS];

	afx_msg void OnLbnSelchangeLanglist();
	afx_msg void OnEnChangeEditor();
	afx_msg void OnEnUpdateEditor();
	afx_msg void OnEnSetfocusEditor();
	afx_msg void OnBnClickedFonthelper();
	afx_msg void OnBnClickedSaveContents();
	afx_msg void OnBnClickedDispKeyboard();
   afx_msg void OnSetFocus(CWnd* pOldWnd);
   afx_msg void OnSize(UINT nType, int cx, int cy);
   afx_msg void OnBnClickedAsterisk();
   afx_msg void OnBnClickedSemicolon();
   afx_msg void OnBnClickedExclaim();
   afx_msg void OnBnClickedQmark();
   afx_msg void OnBnClickedColon();
   afx_msg void OnBnClickedSapos();
   afx_msg void OnBnClickedDapos();
   afx_msg void OnBnClickedAbout();

   CButton m_menuAsterisk;
   CButton m_menuSemiColon;
   CButton m_menuExclaim;
   CButton m_menuQMark;
   CButton m_menuColon;
   CButton m_menuSApos;
   CButton m_menuDApos;

   HICON m_iconMenuAsterisk, m_iconMenuSemiColon, m_iconMenuExclaim, m_iconMenuQMark, m_iconMenuColon, m_iconMenuSApos, m_iconMenuDApos;
//   virtual BOOL PreTranslateMessage(MSG* pMsg);
};

// Keyboard dialog

class Keyboard : public CDialog
{
	DECLARE_DYNAMIC(Keyboard)

public:
	Keyboard(CTalapatramDlg *mainDlg, CWnd *pParent = NULL);   // standard constructor
	virtual ~Keyboard();

	int m_curLang;

private:
	enum { IDD = IDD_TALAPATRAM_DIALOG1 };
	CTalapatramDlg *m_parent;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	HICON m_hIcon;
   

// Implementation
protected:
	// Generated message map functions
	/*virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();*/
	DECLARE_MESSAGE_MAP()

public:
	void SetButtonsFonts(CFont *font);
	void SetSupButtonsFonts(CFont *font);

	void SetHindiText();
	void SetTeluguText();
	void SetEnglishText();
	void SetBengaliText();
	void SetFarsiText();
	void SetGujaratiText();
	void SetKannadaText();
	void SetMalayalamText();
	void SetTamilText();
	void SetPunjabiText();
	void SetUrduText();
	void SetMarathiText();

public:
	//string m_langFonts[NUMLANGS];
	
	CButton m_bkSpc;
	CButton m_tab;
	CButton m_enter;
	CButton m_caps;
	CButton m_shift1;
	CButton m_shift2;
	CButton m_ctrl1;
	CButton m_reserved;
	CButton m_winSpec1;
	CButton m_alt;
	CButton m_spcBar;
	CButton m_altGr;
	CButton m_winSpec2;
	CButton m_ctrl2;
	//CListBox m_langList;
	//CComboBox m_langList;

	CButton m_bar4;
	CButton m_bar1;
	CButton m_bar2;
	CButton m_bar3;
	CButton m_11;
	CButton m_12;
	CButton m_13;
	CButton m_14;
	CButton m_21;
	CButton m_22;
	CButton m_23;
	CButton m_24;
	CButton m_31;
	CButton m_32;
	CButton m_33;
	CButton m_34;
	CButton m_41;
	CButton m_42;
	CButton m_43;
	CButton m_44;
	CButton m_51;
	CButton m_52;
	CButton m_53;
	CButton m_54;
	CButton m_61;
	CButton m_62;
	CButton m_63;
	CButton m_64;
	CButton m_71;
	CButton m_72;
	CButton m_73;
	CButton m_74;
	CButton m_81;
	CButton m_82;
	CButton m_83;
	CButton m_84;
	CButton m_91;
	CButton m_92;
	CButton m_93;
	CButton m_94;
	CButton m_01;
	CButton m_02;
	CButton m_03;
	CButton m_04;
	CButton m_undscr1;
	CButton m_undscr2;
	CButton m_undscr3;
	CButton m_undscr4;
	CButton m_eq1;
	CButton m_eq2;
	CButton m_eq3;
	CButton m_eq4;
	CButton m_q1;
	CButton m_q2;
	CButton m_q3;
	CButton m_q4;
	CButton m_w1;
	CButton m_w2;
	CButton m_w3;
	CButton m_w4;
	CButton m_e1;
	CButton m_e2;
	CButton m_e3;
	CButton m_e4;
	CButton m_r1;
	CButton m_r2;
	CButton m_r3;
	CButton m_r4;
	CButton m_t1;
	CButton m_t2;
	CButton m_t3;
	CButton m_t4;
	CButton m_y1;
	CButton m_y2;
	CButton m_y3;
	CButton m_y4;
	CButton m_u1;
	CButton m_u2;
	CButton m_u3;
	CButton m_u4;
	CButton m_i1;
	CButton m_i2;
	CButton m_i3;
	CButton m_i4;
	CButton m_o1;
	CButton m_o2;
	CButton m_o3;
	CButton m_o4;
	CButton m_p3;
	CButton m_p1;
	CButton m_p2;
	CButton m_p4;
	CButton m_lsqbrkt1;
	CButton m_lsqbrkt2;
	CButton m_lsqbrkt3;
	CButton m_lsqbrkt4;
	CButton m_rsqbrkt1;
	CButton m_rsqbrkt2;
	CButton m_rsqbrkt3;
	CButton m_rsqbrkt4;
	CButton m_a1;
	CButton m_a2;
	CButton m_a3;
	CButton m_a4;
	CButton m_s1;
	CButton m_s2;
	CButton m_s3;
	CButton m_s4;
	CButton m_d1;
	CButton m_d2;
	CButton m_d3;
	CButton m_d4;
	CButton m_f1;
	CButton m_f2;
	CButton m_f3;
	CButton m_f4;
	CButton m_g1;
	CButton m_g2;
	CButton m_g3;
	CButton m_g4;
	CButton m_h1;
	CButton m_h2;
	CButton m_h3;
	CButton m_h4;
	CButton m_j1;
	CButton m_j2;
	CButton m_j3;
	CButton m_j4;
	CButton m_k1;
	CButton m_k2;
	CButton m_k3;
	CButton m_k4;
	CButton m_l1;
	CButton m_l2;
	CButton m_l3;
	CButton m_l4;
	CButton m_semicolon1;
	CButton m_semicolon2;
	CButton m_semicolon3;
	CButton m_semicolon4;
	CButton m_apos1;
	CButton m_apos2;
	CButton m_apos3;
	CButton m_apos4;
	CButton m_hash1;
	CButton m_hash2;
	CButton m_hash3;
	CButton m_hash4;
	CButton m_bslash1;
	CButton m_bslash2;
	CButton m_bslash3;
	CButton m_bslash4;
	CButton m_z1;
	CButton m_z2;
	CButton m_z3;
	CButton m_z4;
	CButton m_x1;
	CButton m_x2;
	CButton m_x3;
	CButton m_x4;
	CButton m_c1;
	CButton m_c2;
	CButton m_c3;
	CButton m_c4;
	CButton m_v1;
	CButton m_v2;
	CButton m_v3;
	CButton m_v4;
	CButton m_b1;
	CButton m_b2;
	CButton m_b3;
	CButton m_b4;
	CButton m_n1;
	CButton m_n2;
	CButton m_n3;
	CButton m_n4;
	CButton m_m1;
	CButton m_m2;
	CButton m_m3;
	CButton m_m4;
	CButton m_comma1;
	CButton m_comma2;
	CButton m_comma3;
	CButton m_comma4;
	CButton m_fstop1;
	CButton m_fstop2;
	CButton m_fstop3;
	CButton m_fstop4;
	CButton m_fslash1;
	CButton m_fslash2;
	CButton m_fslash3;
	CButton m_fslash4;

	CButton m_qsup, m_wsup, m_esup, m_rsup, m_tsup, m_ysup, m_usup, m_isup, m_osup, m_psup;
	CButton m_asup, m_ssup, m_dsup, m_fsup, m_gsup, m_hsup, m_jsup, m_ksup, m_lsup;
	CButton m_zsup, m_xsup, m_csup, m_vsup, m_bsup, m_nsup, m_msup;

	//DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
   afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
   afx_msg void OnBnClickedSpcbar();
};
// Talapatram.cpp : Defines the class behaviors for the application.

#include "stdafx.h"
#include "Talapatram.h"
#include "TalapatramDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTalapatramApp

BEGIN_MESSAGE_MAP(CTalapatramApp, CWinApp)
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()


CTalapatramApp::CTalapatramApp()
{
	// Place all significant initialization in InitInstance
}


// The one and only CTalapatramApp object
CTalapatramApp theApp;


/**
* CTalapatramApp initialization. License-check is also done here.
*/
BOOL CTalapatramApp::InitInstance()
{
	// InitCommonControls() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	InitCommonControls();

	CWinApp::InitInstance();

	AfxEnableControlContainer();

	FILE *fp;
	if(_wfopen_s(&fp, _T("LICENSE-DONT-DELETE.txt"), _T("rb")) != 0)
	{
		MessageBox(NULL, _T("Oi... Your License file is missing! Contact me at www.funnotes.net/talapatram/contact.html with details."), _T("License Error"), MB_OK);
		return -1;
	}

	unsigned int licsNum=0;
	fread(&licsNum, sizeof(unsigned int), 1, fp);

	//license number is 673673688
	//just an arbitrary number that is written in binary mode into a text file called 'LICENSE-DONT-DELETE.txt'
	//this file will be hidden in the folder where executable file is there.
	if(licsNum!=673673688)
	{
		fclose(fp);
		MessageBox(NULL, _T("Ppcch... It seems you messed up my License? Contact me at www.funnotes.net/talapatram/contact.html with details."), _T("License Error"), MB_OK);
		return -1;
	}
	else
		fclose(fp);

	//resolution should be 1152 width and 768 height minimum
	if(GetSystemMetrics(SM_CXSCREEN)<1152 || GetSystemMetrics(SM_CYSCREEN)<768)
	{
		if(MessageBox(NULL, _T("I need display resolution of atleast 1152 X 768. Shall I try changing your Display Resolution?"), _T("Settings not compatible"), MB_YESNO)==IDYES)
		{
			DEVMODE dispMode;
			EnumDisplaySettings(NULL, ENUM_REGISTRY_SETTINGS, &dispMode);
			dispMode.dmPelsWidth=1152;
			dispMode.dmPelsHeight=768;
			dispMode.dmFields = DM_PELSWIDTH | DM_PELSHEIGHT;
			if(ChangeDisplaySettings(&dispMode, CDS_UPDATEREGISTRY)!=DISP_CHANGE_SUCCESSFUL)
				MessageBox(NULL, _T("Sorry... It has not been possible for me to change your display resolution. Your display resolution should be atleast 1152 pixels wide and 768 pixels high. Please change settings manually."), _T("Please change settings"), MB_OK);
		}
	}

	/*-----------------------------
   Standard initialization
	If you are not using these features and wish to reduce the size
	of your final executable, you should remove from the following
	the specific initialization routines you do not need.
	Change the registry key under which our settings are stored
	TODO: You should modify this string to be something appropriate
	such as the name of your company or organization.
   THIS REGISTRY NAME SHOULD NOT BE CHANGED BY ANYONE. DOING SO WILL BE VIOLATION OF MY T&Cs.
   -----------------------------*/
	SetRegistryKey(_T("Talapatram, Vorray Inc."));

	CTalapatramDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		//Place code here to handle when the dialog is
		//dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		//Place code here to handle when the dialog is
		//dismissed with Cancel
	}

	//Since the dialog has been closed, return FALSE so that we exit the
	//application, rather than start the application's message pump.
	return FALSE;
}

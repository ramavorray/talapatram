/*----------------------------------
Class: CTalapatramApp

Main Application instantiation class. This initializes the global application instance of the application.

Written by: Rama Aravind Vorray, Feb 2007.
----------------------------------*/

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols


class CTalapatramApp : public CWinApp
{
public:
	CTalapatramApp();

public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

extern CTalapatramApp theApp;
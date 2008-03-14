/*-------------------------------------
Class: DISP_BOX

This class is for the text display box (editing region) of the application. This is necessary for resizing
of the region when main dialog (CTalapatamDlg) is resized.

Written by: Rama Aravind Vorray, Feb, 2007.
-------------------------------------*/
#pragma once

#include <WinUser.h>


class DISP_BOX : public CEditView
{
	DECLARE_DYNCREATE(DISP_BOX)

public:
	DISP_BOX();
	virtual ~DISP_BOX();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnEnChange();
	afx_msg void OnSize(UINT nType, int cx, int cy);
};



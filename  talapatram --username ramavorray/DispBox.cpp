// DispBox.cpp : implementation file
//
#include "stdafx.h"
#include "Talapatram.h"
#include "DispBox.h"
#include ".\dispbox.h"

IMPLEMENT_DYNCREATE(DISP_BOX, CEditView)

DISP_BOX::DISP_BOX()
{
}

DISP_BOX::~DISP_BOX()
{
}

BEGIN_MESSAGE_MAP(DISP_BOX, CEditView)
	ON_CONTROL_REFLECT(EN_CHANGE, OnEnChange)
	ON_WM_SIZE()
END_MESSAGE_MAP()


//DISP_BOX diagnostics

#ifdef _DEBUG
void DISP_BOX::AssertValid() const
{
	CEditView::AssertValid();
}

void DISP_BOX::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}
#endif //_DEBUG


void DISP_BOX::OnEnChange()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CEditView::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
}

void DISP_BOX::OnSize(UINT nType, int cx, int cy)
{
	CEditView::OnSize(nType, cx, cy);
}

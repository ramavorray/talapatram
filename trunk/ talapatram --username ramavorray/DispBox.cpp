// DispBox.cpp : implementation file
//
#include "stdafx.h"
#include "Talapatram.h"
#include "DispBox.h"
#include ".\dispbox.h"


// DISP_BOX

IMPLEMENT_DYNCREATE(DISP_BOX, CEditView)

DISP_BOX::DISP_BOX()
{
	/*LANGID test=GetSystemDefaultLangID();
	test=GetUserDefaultLangID();
	HKL var=GetKeyboardLayout(0);
	var=var;
	if(ActivateKeyboardLayout(LoadKeyboardLayout(_T("0x044a"), KLF_ACTIVATE), KLF_REORDER)==0)
	{int j=0, i; i=j;}

	test=GetUserDefaultLangID();

	DWORD err=GetLastError();*/
}

DISP_BOX::~DISP_BOX()
{
}

BEGIN_MESSAGE_MAP(DISP_BOX, CEditView)
	//ON_WM_KEYDOWN()
	//ON_WM_CHAR()
	//ON_WM_CREATE()
	ON_CONTROL_REFLECT(EN_CHANGE, OnEnChange)
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


//// DISP_BOX message handlers
//
//void DISP_BOX::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
//{
//	if(nChar==VK_TAB);
//
//	CEditView::OnKeyDown(nChar, nRepCnt, nFlags);
//}
//
//void DISP_BOX::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
//{
//	//SetWindowText(m_dispText);
//
//	CEditView::OnChar(nChar, nRepCnt, nFlags);
//}
//
//int DISP_BOX::OnCreate(LPCREATESTRUCT lpCreateStruct)
//{
//	if (CEditView::OnCreate(lpCreateStruct) == -1)
//		return -1;
//
//	// TODO:  Add your specialized creation code here
//
//	return 0;
//}

void DISP_BOX::OnEnChange()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CEditView::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}

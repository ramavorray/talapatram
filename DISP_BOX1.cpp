// DISP_BOX1.cpp : implementation file
//

#include "stdafx.h"
#include "Talapatram.h"
#include "DISP_BOX1.h"


// DISP_BOX1

IMPLEMENT_DYNCREATE(DISP_BOX1, CRichEditView)

DISP_BOX1::DISP_BOX1()
{
}

DISP_BOX1::~DISP_BOX1()
{
}

BEGIN_MESSAGE_MAP(DISP_BOX1, CRichEditView)
END_MESSAGE_MAP()


// DISP_BOX1 diagnostics

#ifdef _DEBUG
void DISP_BOX1::AssertValid() const
{
	CRichEditView::AssertValid();
}

void DISP_BOX1::Dump(CDumpContext& dc) const
{
	CRichEditView::Dump(dc);
}
#endif //_DEBUG


// DISP_BOX1 message handlers

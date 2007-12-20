// ParentControlDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Talapatram.h"
#include "ParentControlDialog.h"


// ParentControlDialog dialog

IMPLEMENT_DYNAMIC(ParentControlDialog, CDialog)
ParentControlDialog::ParentControlDialog(CWnd* pParent /*=NULL*/)
	: CDialog(ParentControlDialog::IDD, pParent)
{
}

ParentControlDialog::~ParentControlDialog()
{
}

void ParentControlDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ParentControlDialog, CDialog)
END_MESSAGE_MAP()


// ParentControlDialog message handlers

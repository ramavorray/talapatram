#pragma once


// ParentControlDialog dialog

class ParentControlDialog : public CDialog
{
	DECLARE_DYNAMIC(ParentControlDialog)

public:
	ParentControlDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~ParentControlDialog();

// Dialog Data
	enum { IDD = IDD_PARENT_DLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};

#pragma once

#include <WinUser.h>


// DISP_BOX view

class DISP_BOX : public CEditView
{
	DECLARE_DYNCREATE(DISP_BOX)

public:
	DISP_BOX();           // protected constructor used by dynamic creation
	virtual ~DISP_BOX();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	DECLARE_MESSAGE_MAP()
//public:
//	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
//
//private:
//	bool m_shift, m_altGr;
//	CString m_dispText;
public:
	//afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	//afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnEnChange();
};



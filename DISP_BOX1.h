#pragma once


// DISP_BOX1 view

class DISP_BOX1 : public CRichEditView
{
	DECLARE_DYNCREATE(DISP_BOX1)

protected:
	DISP_BOX1();           // protected constructor used by dynamic creation
	virtual ~DISP_BOX1();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	DECLARE_MESSAGE_MAP()
};



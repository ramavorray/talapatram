// TalapatramDlg.h : header file
//

#pragma once
#include "afxwin.h"
#include "DispBox.h"
#include "Keyboard.h"
#include "afxcmn.h"
#include <string>

using namespace std;


//// CTalapatramDlg dialog
//class CTalapatramDlg : public CDialog
//{
//// Construction
//public:
//	CTalapatramDlg(CWnd* pParent = NULL);	// standard constructor
//	virtual ~CTalapatramDlg();
//
//// Dialog Data
//	enum { IDD = IDD_TALAPATRAM_DIALOG };
//	int m_curLang;
//	CFont m_fontBengali,
//		m_fontEnglish,
//		m_fontFarsi,
//		m_fontFarsi2,
//		m_fontGujarati,
//		m_fontGujarati2,
//		m_fontHindi,
//		m_fontKannada,
//		m_fontKannada2,
//		m_fontMalayalam,
//		m_fontMalayalam2,
//		m_fontMarathi,
//		m_fontPunjabi,
//		m_fontPunjabi2,
//		m_fontTamil,
//		m_fontTamil2,
//		m_fontTelugu,
//		m_fontTelugu2,
//		m_fontTelugu3,
//		m_fontUrdu,
//		m_supFont;
//
//	void SetButtonsFonts(CFont *font);
//	void SetSupButtonsFonts();
//
//protected:
//	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
//
//// Implementation
//protected:
//	HICON m_hIcon;
//
//	// Generated message map functions
//	virtual BOOL OnInitDialog();
//	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
//	afx_msg void OnPaint();
//	afx_msg HCURSOR OnQueryDragIcon();
//	DECLARE_MESSAGE_MAP()
//
//private:
//   bool m_initHlpFilePath;
//   bool m_keyboard_flg;
//   CString m_hlpFilePath;
//	enum consts{NUMLANGS=12};
//	CString m_langs[NUMLANGS];
//	CString m_langsInTheirLang[NUMLANGS];
//	
//	DISP_BOX *m_dispBox;
//	Keyboard *m_keyboard;
//
//	CString m_langIDs[NUMLANGS];
// //  string m_langFonts[NUMLANGS];
//	
//	
//	//CListBox m_langList;
//	CComboBox m_langList;
//
//public:
//	afx_msg void OnLbnSelchangeLanglist();
//	afx_msg void OnEnChangeEditor();
//	afx_msg void OnEnUpdateEditor();
//	afx_msg void OnEnSetfocusEditor();
//	afx_msg void OnBnClickedFonthelper();
//	afx_msg void OnBnClickedSaveContents();
//	afx_msg void OnBnClickedDispKeyboard();
//   afx_msg void OnSetFocus(CWnd* pOldWnd);
//   afx_msg void OnSize(UINT nType, int cx, int cy);
//};

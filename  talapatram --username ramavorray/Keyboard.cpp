// Keyboard.cpp : implementation file

#include "stdafx.h"
#include "Talapatram.h"
#include "Keyboard.h"
#include ".\keyboard.h"

using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// Keyboard dialog

IMPLEMENT_DYNAMIC(Keyboard, CDialog)
Keyboard::Keyboard(CTalapatramDlg *mainDlg, CWnd *pParent /*=NULL*/)
	: m_parent(mainDlg)
{
	Create(Keyboard::IDD, NULL);
}

Keyboard::~Keyboard()
{
}

void Keyboard::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	m_curLang=m_parent->m_curLang;

	DDX_Control(pDX, IDC_BKSPACE, m_bkSpc);
	DDX_Control(pDX, IDC_TAB, m_tab);
	DDX_Control(pDX, IDC_ENTER, m_enter);
	DDX_Control(pDX, IDC_CAPS, m_caps);
	DDX_Control(pDX, IDC_SHIFT1, m_shift1);
	DDX_Control(pDX, IDC_SHIFT2, m_shift2);
	DDX_Control(pDX, IDC_CTRL1, m_ctrl1);
	DDX_Control(pDX, IDC_RESERVED, m_reserved);
	DDX_Control(pDX, IDC_WINSPEC1, m_winSpec1);
	DDX_Control(pDX, IDC_ALT, m_alt);
	DDX_Control(pDX, IDC_SPCBAR, m_spcBar);
	DDX_Control(pDX, IDC_ALTGR, m_altGr);
	DDX_Control(pDX, IDC_WINSPEC2, m_winSpec2);
	DDX_Control(pDX, IDC_CTRL2, m_ctrl2);

	DDX_Control(pDX, IDC_BAR4, m_bar4);
	DDX_Control(pDX, IDC_BAR1, m_bar1);
	DDX_Control(pDX, IDC_BAR2, m_bar2);
	DDX_Control(pDX, IDC_BAR3, m_bar3);
	DDX_Control(pDX, IDC_11, m_11);
	DDX_Control(pDX, IDC_12, m_12);
	DDX_Control(pDX, IDC_13, m_13);
	DDX_Control(pDX, IDC_14, m_14);
	DDX_Control(pDX, IDC_21, m_21);
	DDX_Control(pDX, IDC_22, m_22);
	DDX_Control(pDX, IDC_23, m_23);
	DDX_Control(pDX, IDC_24, m_24);
	DDX_Control(pDX, IDC_31, m_31);
	DDX_Control(pDX, IDC_32, m_32);
	DDX_Control(pDX, IDC_33, m_33);
	DDX_Control(pDX, IDC_34, m_34);
	DDX_Control(pDX, IDC_41, m_41);
	DDX_Control(pDX, IDC_42, m_42);
	DDX_Control(pDX, IDC_43, m_43);
	DDX_Control(pDX, IDC_44, m_44);
	DDX_Control(pDX, IDC_51, m_51);
	DDX_Control(pDX, IDC_52, m_52);
	DDX_Control(pDX, IDC_53, m_53);
	DDX_Control(pDX, IDC_54, m_54);
	DDX_Control(pDX, IDC_61, m_61);
	DDX_Control(pDX, IDC_62, m_62);
	DDX_Control(pDX, IDC_63, m_63);
	DDX_Control(pDX, IDC_64, m_64);
	DDX_Control(pDX, IDC_71, m_71);
	DDX_Control(pDX, IDC_72, m_72);
	DDX_Control(pDX, IDC_73, m_73);
	DDX_Control(pDX, IDC_74, m_74);
	DDX_Control(pDX, IDC_81, m_81);
	DDX_Control(pDX, IDC_82, m_82);
	DDX_Control(pDX, IDC_83, m_83);
	DDX_Control(pDX, IDC_84, m_84);
	DDX_Control(pDX, IDC_91, m_91);
	DDX_Control(pDX, IDC_92, m_92);
	DDX_Control(pDX, IDC_93, m_93);
	DDX_Control(pDX, IDC_94, m_94);
	DDX_Control(pDX, IDC_01, m_01);
	DDX_Control(pDX, IDC_02, m_02);
	DDX_Control(pDX, IDC_03, m_03);
	DDX_Control(pDX, IDC_04, m_04);
	DDX_Control(pDX, IDC_UNDSCR1, m_undscr1);
	DDX_Control(pDX, IDC_UNDSCR2, m_undscr2);
	DDX_Control(pDX, IDC_UNDSCR3, m_undscr3);
	DDX_Control(pDX, IDC_UNDSCR4, m_undscr4);
	DDX_Control(pDX, IDC_EQ1, m_eq1);
	DDX_Control(pDX, IDC_EQ2, m_eq2);
	DDX_Control(pDX, IDC_EQ3, m_eq3);
	DDX_Control(pDX, IDC_EQ4, m_eq4);
	DDX_Control(pDX, IDC_Q1, m_q1);
	DDX_Control(pDX, IDC_Q2, m_q2);
	DDX_Control(pDX, IDC_Q3, m_q3);
	DDX_Control(pDX, IDC_Q4, m_q4);
	DDX_Control(pDX, IDC_W1, m_w1);
	DDX_Control(pDX, IDC_W2, m_w2);
	DDX_Control(pDX, IDC_W3, m_w3);
	DDX_Control(pDX, IDC_W4, m_w4);
	DDX_Control(pDX, IDC_E1, m_e1);
	DDX_Control(pDX, IDC_E2, m_e2);
	DDX_Control(pDX, IDC_E3, m_e3);
	DDX_Control(pDX, IDC_E4, m_e4);
	DDX_Control(pDX, IDC_R1, m_r1);
	DDX_Control(pDX, IDC_R2, m_r2);
	DDX_Control(pDX, IDC_R3, m_r3);
	DDX_Control(pDX, IDC_R4, m_r4);
	DDX_Control(pDX, IDC_T1, m_t1);
	DDX_Control(pDX, IDC_T2, m_t2);
	DDX_Control(pDX, IDC_T3, m_t3);
	DDX_Control(pDX, IDC_T4, m_t4);
	DDX_Control(pDX, IDC_Y1, m_y1);
	DDX_Control(pDX, IDC_Y2, m_y2);
	DDX_Control(pDX, IDC_Y3, m_y3);
	DDX_Control(pDX, IDC_Y4, m_y4);
	DDX_Control(pDX, IDC_U1, m_u1);
	DDX_Control(pDX, IDC_U2, m_u2);
	DDX_Control(pDX, IDC_U3, m_u3);
	DDX_Control(pDX, IDC_U4, m_u4);
	DDX_Control(pDX, IDC_I1, m_i1);
	DDX_Control(pDX, IDC_I2, m_i2);
	DDX_Control(pDX, IDC_I3, m_i3);
	DDX_Control(pDX, IDC_I4, m_i4);
	DDX_Control(pDX, IDC_O1, m_o1);
	DDX_Control(pDX, IDC_O2, m_o2);
	DDX_Control(pDX, IDC_O3, m_o3);
	DDX_Control(pDX, IDC_O4, m_o4);
	DDX_Control(pDX, IDC_P3, m_p3);
	DDX_Control(pDX, IDC_P1, m_p1);
	DDX_Control(pDX, IDC_P2, m_p2);
	DDX_Control(pDX, IDC_P4, m_p4);
	DDX_Control(pDX, IDC_LSQBRKT1, m_lsqbrkt1);
	DDX_Control(pDX, IDC_LSQBRKT2, m_lsqbrkt2);
	DDX_Control(pDX, IDC_LSQBRKT3, m_lsqbrkt3);
	DDX_Control(pDX, IDC_LSQBRKT4, m_lsqbrkt4);
	DDX_Control(pDX, IDC_RSQBRKT1, m_rsqbrkt1);
	DDX_Control(pDX, IDC_RSQBRKT2, m_rsqbrkt2);
	DDX_Control(pDX, IDC_RSQBRKT3, m_rsqbrkt3);
	DDX_Control(pDX, IDC_RSQBRKT4, m_rsqbrkt4);
	DDX_Control(pDX, IDC_A1, m_a1);
	DDX_Control(pDX, IDC_A2, m_a2);
	DDX_Control(pDX, IDC_A3, m_a3);
	DDX_Control(pDX, IDC_A4, m_a4);
	DDX_Control(pDX, IDC_S1, m_s1);
	DDX_Control(pDX, IDC_S2, m_s2);
	DDX_Control(pDX, IDC_S3, m_s3);
	DDX_Control(pDX, IDC_S4, m_s4);
	DDX_Control(pDX, IDC_D1, m_d1);
	DDX_Control(pDX, IDC_D2, m_d2);
	DDX_Control(pDX, IDC_D3, m_d3);
	DDX_Control(pDX, IDC_D4, m_d4);
	DDX_Control(pDX, IDC_F1, m_f1);
	DDX_Control(pDX, IDC_F2, m_f2);
	DDX_Control(pDX, IDC_F3, m_f3);
	DDX_Control(pDX, IDC_F4, m_f4);
	DDX_Control(pDX, IDC_G1, m_g1);
	DDX_Control(pDX, IDC_G2, m_g2);
	DDX_Control(pDX, IDC_G3, m_g3);
	DDX_Control(pDX, IDC_G4, m_g4);
	DDX_Control(pDX, IDC_H1, m_h1);
	DDX_Control(pDX, IDC_H2, m_h2);
	DDX_Control(pDX, IDC_H3, m_h3);
	DDX_Control(pDX, IDC_H4, m_h4);
	DDX_Control(pDX, IDC_J1, m_j1);
	DDX_Control(pDX, IDC_J2, m_j2);
	DDX_Control(pDX, IDC_J3, m_j3);
	DDX_Control(pDX, IDC_J4, m_j4);
	DDX_Control(pDX, IDC_K1, m_k1);
	DDX_Control(pDX, IDC_K2, m_k2);
	DDX_Control(pDX, IDC_K3, m_k3);
	DDX_Control(pDX, IDC_K4, m_k4);
	DDX_Control(pDX, IDC_L1, m_l1);
	DDX_Control(pDX, IDC_L2, m_l2);
	DDX_Control(pDX, IDC_L3, m_l3);
	DDX_Control(pDX, IDC_L4, m_l4);
	DDX_Control(pDX, IDC_SEMICOLON1, m_semicolon1);
	DDX_Control(pDX, IDC_SEMICOLON2, m_semicolon2);
	DDX_Control(pDX, IDC_SEMICOLON3, m_semicolon3);
	DDX_Control(pDX, IDC_SEMICOLON4, m_semicolon4);
	DDX_Control(pDX, IDC_APOS1, m_apos1);
	DDX_Control(pDX, IDC_APOS2, m_apos2);
	DDX_Control(pDX, IDC_APOS3, m_apos3);
	DDX_Control(pDX, IDC_APOS4, m_apos4);
	DDX_Control(pDX, IDC_HASH1, m_hash1);
	DDX_Control(pDX, IDC_HASH2, m_hash2);
	DDX_Control(pDX, IDC_HASH3, m_hash3);
	DDX_Control(pDX, IDC_HASH4, m_hash4);
	DDX_Control(pDX, IDC_BSLASH1, m_bslash1);
	DDX_Control(pDX, IDC_BSLASH2, m_bslash2);
	DDX_Control(pDX, IDC_BSLASH3, m_bslash3);
	DDX_Control(pDX, IDC_BSLASH4, m_bslash4);
	DDX_Control(pDX, IDC_Z1, m_z1);
	DDX_Control(pDX, IDC_Z2, m_z2);
	DDX_Control(pDX, IDC_Z3, m_z3);
	DDX_Control(pDX, IDC_Z4, m_z4);
	DDX_Control(pDX, IDC_X1, m_x1);
	DDX_Control(pDX, IDC_X2, m_x2);
	DDX_Control(pDX, IDC_X3, m_x3);
	DDX_Control(pDX, IDC_X4, m_x4);
	DDX_Control(pDX, IDC_C1, m_c1);
	DDX_Control(pDX, IDC_C2, m_c2);
	DDX_Control(pDX, IDC_C3, m_c3);
	DDX_Control(pDX, IDC_C4, m_c4);
	DDX_Control(pDX, IDC_V1, m_v1);
	DDX_Control(pDX, IDC_V2, m_v2);
	DDX_Control(pDX, IDC_V3, m_v3);
	DDX_Control(pDX, IDC_V4, m_v4);
	DDX_Control(pDX, IDC_B1, m_b1);
	DDX_Control(pDX, IDC_B2, m_b2);
	DDX_Control(pDX, IDC_B3, m_b3);
	DDX_Control(pDX, IDC_B4, m_b4);
	DDX_Control(pDX, IDC_N1, m_n1);
	DDX_Control(pDX, IDC_N2, m_n2);
	DDX_Control(pDX, IDC_N3, m_n3);
	DDX_Control(pDX, IDC_N4, m_n4);
	DDX_Control(pDX, IDC_M1, m_m1);
	DDX_Control(pDX, IDC_M2, m_m2);
	DDX_Control(pDX, IDC_M3, m_m3);
	DDX_Control(pDX, IDC_M4, m_m4);
	DDX_Control(pDX, IDC_COMMA1, m_comma1);
	DDX_Control(pDX, IDC_COMMA2, m_comma2);
	DDX_Control(pDX, IDC_COMMA3, m_comma3);
	DDX_Control(pDX, IDC_COMMA4, m_comma4);
	DDX_Control(pDX, IDC_FSTOP1, m_fstop1);
	DDX_Control(pDX, IDC_FSTOP2, m_fstop2);
	DDX_Control(pDX, IDC_FSTOP3, m_fstop3);
	DDX_Control(pDX, IDC_FSTOP4, m_fstop4);
	DDX_Control(pDX, IDC_FSLASH1, m_fslash1);
	DDX_Control(pDX, IDC_FSLASH2, m_fslash2);
	DDX_Control(pDX, IDC_FSLASH3, m_fslash3);
	DDX_Control(pDX, IDC_FSLASH4, m_fslash4);

	DDX_Control(pDX, IDC_QSUP, m_qsup); DDX_Control(pDX, IDC_ESUP, m_esup); DDX_Control(pDX, IDC_RSUP, m_rsup); DDX_Control(pDX, IDC_TSUP, m_tsup);
	DDX_Control(pDX, IDC_wsup, m_wsup); DDX_Control(pDX, IDC_YSUP, m_ysup); DDX_Control(pDX, IDC_USUP, m_usup); DDX_Control(pDX, IDC_ISUP, m_isup);
	DDX_Control(pDX, IDC_OSUP, m_osup); DDX_Control(pDX, IDC_PSUP, m_psup);
	DDX_Control(pDX, IDC_ASUP, m_asup); DDX_Control(pDX, IDC_SSUP, m_ssup); DDX_Control(pDX, IDC_DSUP, m_dsup); DDX_Control(pDX, IDC_FSUP, m_fsup);
	DDX_Control(pDX, IDC_GSUP, m_gsup); DDX_Control(pDX, IDC_HSUP, m_hsup); DDX_Control(pDX, IDC_JSUP, m_jsup); DDX_Control(pDX, IDC_KSUP, m_ksup);
	DDX_Control(pDX, IDC_LSUP, m_lsup);
	DDX_Control(pDX, IDC_ZSUP, m_zsup); DDX_Control(pDX, IDC_XSUP, m_xsup); DDX_Control(pDX, IDC_CSUP, m_csup); DDX_Control(pDX, IDC_VSUP, m_vsup);
	DDX_Control(pDX, IDC_BSUP, m_bsup); DDX_Control(pDX, IDC_NSUP, m_nsup); DDX_Control(pDX, IDC_MSUP, m_msup);
}

void Keyboard::SetButtonsFonts(CFont *font)
{
	m_bar1.SetFont(font); m_bar2.SetFont(font); m_bar3.SetFont(font); m_bar4.SetFont(font);
	m_11.SetFont(font); m_12.SetFont(font); m_13.SetFont(font); m_14.SetFont(font);
	m_21.SetFont(font); m_22.SetFont(font); m_23.SetFont(font); m_24.SetFont(font);
	m_31.SetFont(font); m_32.SetFont(font); m_33.SetFont(font); m_34.SetFont(font);
	m_41.SetFont(font); m_42.SetFont(font); m_43.SetFont(font); m_44.SetFont(font);
	m_51.SetFont(font); m_52.SetFont(font); m_53.SetFont(font); m_54.SetFont(font);
	m_61.SetFont(font); m_62.SetFont(font); m_63.SetFont(font); m_64.SetFont(font);
	m_71.SetFont(font); m_72.SetFont(font); m_73.SetFont(font); m_74.SetFont(font);
	m_81.SetFont(font); m_82.SetFont(font); m_83.SetFont(font); m_84.SetFont(font);
	m_91.SetFont(font); m_92.SetFont(font); m_93.SetFont(font); m_94.SetFont(font);
	m_01.SetFont(font); m_02.SetFont(font); m_03.SetFont(font); m_04.SetFont(font);
	m_undscr1.SetFont(font); m_undscr2.SetFont(font); m_undscr3.SetFont(font); m_undscr4.SetFont(font);
	m_eq1.SetFont(font); m_eq2.SetFont(font); m_eq3.SetFont(font); m_eq4.SetFont(font);
	m_q1.SetFont(font); m_q2.SetFont(font); m_q3.SetFont(font); m_q4.SetFont(font);
	m_w1.SetFont(font); m_w2.SetFont(font); m_w3.SetFont(font); m_w4.SetFont(font);
	m_e1.SetFont(font); m_e2.SetFont(font); m_e3.SetFont(font); m_e4.SetFont(font);
	m_r1.SetFont(font); m_r2.SetFont(font); m_r3.SetFont(font); m_r4.SetFont(font);
	m_t1.SetFont(font); m_t2.SetFont(font); m_t3.SetFont(font); m_t4.SetFont(font);
	m_y1.SetFont(font); m_y2.SetFont(font); m_y3.SetFont(font); m_y4.SetFont(font);
	m_u1.SetFont(font); m_u2.SetFont(font); m_u3.SetFont(font); m_u4.SetFont(font);
	m_i1.SetFont(font); m_i2.SetFont(font); m_i3.SetFont(font); m_i4.SetFont(font);
	m_o1.SetFont(font); m_o2.SetFont(font); m_o3.SetFont(font); m_o4.SetFont(font);
	m_p3.SetFont(font); m_p1.SetFont(font); m_p2.SetFont(font); m_p4.SetFont(font);
	m_lsqbrkt1.SetFont(font); m_lsqbrkt2.SetFont(font); m_lsqbrkt3.SetFont(font); m_lsqbrkt4.SetFont(font);
	m_rsqbrkt1.SetFont(font); m_rsqbrkt2.SetFont(font); m_rsqbrkt3.SetFont(font); m_rsqbrkt4.SetFont(font);
	m_a1.SetFont(font); m_a2.SetFont(font); m_a3.SetFont(font); m_a4.SetFont(font);
	m_s1.SetFont(font); m_s2.SetFont(font); m_s3.SetFont(font); m_s4.SetFont(font);
	m_d1.SetFont(font); m_d2.SetFont(font); m_d3.SetFont(font); m_d4.SetFont(font);
	m_f1.SetFont(font); m_f2.SetFont(font); m_f3.SetFont(font); m_f4.SetFont(font);
	m_g1.SetFont(font); m_g2.SetFont(font); m_g3.SetFont(font); m_g4.SetFont(font);
	m_h1.SetFont(font); m_h2.SetFont(font); m_h3.SetFont(font); m_h4.SetFont(font);
	m_j1.SetFont(font); m_j2.SetFont(font); m_j3.SetFont(font); m_j4.SetFont(font);
	m_k1.SetFont(font); m_k2.SetFont(font); m_k3.SetFont(font); m_k4.SetFont(font);
	m_l1.SetFont(font); m_l2.SetFont(font); m_l3.SetFont(font); m_l4.SetFont(font);
	m_semicolon1.SetFont(font); m_semicolon2.SetFont(font); m_semicolon3.SetFont(font);
	m_semicolon4.SetFont(font); m_apos1.SetFont(font); m_apos2.SetFont(font);
	m_apos3.SetFont(font); m_apos4.SetFont(font); m_hash1.SetFont(font); m_hash2.SetFont(font);
	m_hash3.SetFont(font); m_hash4.SetFont(font); m_bslash1.SetFont(font); m_bslash2.SetFont(font);
	m_bslash3.SetFont(font); m_bslash4.SetFont(font); m_z1.SetFont(font); m_z2.SetFont(font);
	m_z3.SetFont(font); m_z4.SetFont(font); m_x1.SetFont(font); m_x2.SetFont(font); m_x3.SetFont(font);
	m_x4.SetFont(font); m_c1.SetFont(font); m_c2.SetFont(font); 	m_c3.SetFont(font); m_c4.SetFont(font);
	m_v1.SetFont(font); m_v2.SetFont(font); m_v3.SetFont(font); m_v4.SetFont(font);
	m_b1.SetFont(font); m_b2.SetFont(font); m_b3.SetFont(font); m_b4.SetFont(font); m_n1.SetFont(font);
	m_n2.SetFont(font); m_n3.SetFont(font); m_n4.SetFont(font); m_m1.SetFont(font); m_m2.SetFont(font);
	m_m3.SetFont(font); m_m4.SetFont(font); m_comma1.SetFont(font); m_comma2.SetFont(font);
	m_comma3.SetFont(font); m_comma4.SetFont(font); m_fstop1.SetFont(font); m_fstop2.SetFont(font);
	m_fstop3.SetFont(font); m_fstop4.SetFont(font); m_fslash1.SetFont(font); m_fslash2.SetFont(font);
	m_fslash3.SetFont(font); m_fslash4.SetFont(font);
}

void Keyboard::SetSupButtonsFonts(CFont *font)
{
	m_qsup.SetFont(font); m_esup.SetFont(font); m_rsup.SetFont(font); m_tsup.SetFont(font);
	m_ysup.SetFont(font); m_usup.SetFont(font); m_isup.SetFont(font); m_osup.SetFont(font);
	m_psup.SetFont(font);
	m_ssup.SetFont(font); m_dsup.SetFont(font); m_fsup.SetFont(font); m_gsup.SetFont(font);
	m_hsup.SetFont(font); m_jsup.SetFont(font); m_ksup.SetFont(font); m_lsup.SetFont(font);
	m_zsup.SetFont(font); m_xsup.SetFont(font); m_csup.SetFont(font); m_vsup.SetFont(font);
	m_bsup.SetFont(font); m_nsup.SetFont(font); m_msup.SetFont(font);
	m_wsup.SetFont(font);
	m_asup.SetFont(font);
}

void Keyboard::SetTeluguText()
{
	CString title; title+=m_parent->m_langs[m_curLang]; title+=" Keyboard - ";
	title+=m_parent->m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

	m_bar4.SetWindowText(_T(""));m_bar3.SetWindowText(_T("")); m_bar1.SetWindowText(_T("ొ")); m_bar2.SetWindowText(_T("ఒ"));
   m_14.SetWindowText(_T(""));m_13.SetWindowText(_T("౧")); m_11.SetWindowText(_T("1"));m_12.SetWindowText(_T(""));
   m_24.SetWindowText(_T(""));m_23.SetWindowText(_T("౨"));m_21.SetWindowText(_T("2")); m_22.SetWindowText(_T(""));
   m_34.SetWindowText(_T(""));m_33.SetWindowText(_T("౩")); m_31.SetWindowText(_T("3")); m_32.SetWindowText(_T("్ర"));
   m_44.SetWindowText(_T(""));m_43.SetWindowText(_T("౪"));m_41.SetWindowText(_T("4")); m_42.SetWindowText(_T(""));
   m_54.SetWindowText(_T(""));m_53.SetWindowText(_T("౫"));m_51.SetWindowText(_T("5")); m_52.SetWindowText(_T("జ్ఞ"));
   m_64.SetWindowText(_T(""));m_63.SetWindowText(_T("౬"));m_61.SetWindowText(_T("6"));m_62.SetWindowText(_T("త్ర"));
   m_74.SetWindowText(_T(""));m_73.SetWindowText(_T("౭"));m_71.SetWindowText(_T("7")); m_72.SetWindowText(_T("క్ష"));
   m_84.SetWindowText(_T(""));m_83.SetWindowText(_T("౮"));m_81.SetWindowText(_T("8")); m_82.SetWindowText(_T("శ్ర"));
   m_94.SetWindowText(_T(""));m_93.SetWindowText(_T("౯"));m_91.SetWindowText(_T("9")); m_92.SetWindowText(_T("("));
   m_04.SetWindowText(_T(""));m_03.SetWindowText(_T("౦")); m_01.SetWindowText(_T("0")); m_02.SetWindowText(_T(")"));
   m_undscr4.SetWindowText(_T(""));m_undscr3.SetWindowText(_T(""));m_undscr1.SetWindowText(_T("-"));m_undscr2.SetWindowText(_T("ః"));
   m_eq4.SetWindowText(_T("ౠ"));m_eq3.SetWindowText(_T("ౄ")); m_eq1.SetWindowText(_T("ృ"));m_eq2.SetWindowText(_T("ఋ"));
   m_q4.SetWindowText(_T(""));m_q3.SetWindowText(_T(""));m_q1.SetWindowText(_T("ౌ")); m_q2.SetWindowText(_T("ఔ"));
   m_w4.SetWindowText(_T(""));m_w3.SetWindowText(_T("ౖ"));m_w1.SetWindowText(_T("ై")); m_w2.SetWindowText(_T("ఐ"));//m_wsup.SetWindowText(_T("W"));
   m_e4.SetWindowText(_T(""));m_e3.SetWindowText(_T(""));m_e1.SetWindowText(_T("ా")); m_e2.SetWindowText(_T("ఆ"));
   m_r4.SetWindowText(_T("ౡ"));m_r3.SetWindowText(_T(""));m_r1.SetWindowText(_T("ీ")); m_r2.SetWindowText(_T("ఈ"));
   m_t4.SetWindowText(_T(""));m_t3.SetWindowText(_T("")); m_t1.SetWindowText(_T("ూ"));m_t2.SetWindowText(_T("ఊ"));
   m_y4.SetWindowText(_T(""));m_y3.SetWindowText(_T("")); m_y1.SetWindowText(_T("బ")); m_y2.SetWindowText(_T("భ"));
   m_u4.SetWindowText(_T(""));m_u3.SetWindowText(_T(""));m_u1.SetWindowText(_T("హ")); m_u2.SetWindowText(_T("ఙ"));
   m_i4.SetWindowText(_T(""));m_i3.SetWindowText(_T(""));m_i1.SetWindowText(_T("గ")); m_i2.SetWindowText(_T("ఘ"));
   m_o4.SetWindowText(_T(""));m_o3.SetWindowText(_T(""));m_o1.SetWindowText(_T("ద")); m_o2.SetWindowText(_T("ధ"));
   m_p4.SetWindowText(_T(""));m_p3.SetWindowText(_T(""));m_p1.SetWindowText(_T("జ")); m_p2.SetWindowText(_T("ఝ"));
   m_lsqbrkt4.SetWindowText(_T(""));m_lsqbrkt3.SetWindowText(_T(""));m_lsqbrkt1.SetWindowText(_T("డ")); m_lsqbrkt2.SetWindowText(_T("ఢ"));
   m_rsqbrkt4.SetWindowText(_T(""));m_rsqbrkt3.SetWindowText(_T(""));m_rsqbrkt1.SetWindowText(_T("")); m_rsqbrkt2.SetWindowText(_T("ఞ"));
   m_a4.SetWindowText(_T(""));m_a3.SetWindowText(_T(""));m_a1.SetWindowText(_T("ో")); m_a2.SetWindowText(_T("ఓ"));
   m_s4.SetWindowText(_T(""));m_s3.SetWindowText(_T("ౕ"));m_s1.SetWindowText(_T("ే")); m_s2.SetWindowText(_T("ఏ"));
   m_d4.SetWindowText(_T(""));m_d3.SetWindowText(_T("")); m_d1.SetWindowText(_T("్")); m_d2.SetWindowText(_T("అ"));
   m_f4.SetWindowText(_T("ఌ"));m_f3.SetWindowText(_T("")); m_f1.SetWindowText(_T("ి")); m_f2.SetWindowText(_T("ఇ"));
   m_g4.SetWindowText(_T(""));m_g3.SetWindowText(_T(""));m_g1.SetWindowText(_T("ు")); m_g2.SetWindowText(_T("ఉ"));
   m_h4.SetWindowText(_T(""));m_h3.SetWindowText(_T(""));m_h1.SetWindowText(_T("ప")); m_h2.SetWindowText(_T("ఫ"));
   m_j4.SetWindowText(_T(""));m_j3.SetWindowText(_T(""));m_j1.SetWindowText(_T("ర")); m_j2.SetWindowText(_T("ఱ"));
   m_k4.SetWindowText(_T(""));m_k3.SetWindowText(_T("")); m_k1.SetWindowText(_T("క")); m_k2.SetWindowText(_T("ఖ"));
   m_l4.SetWindowText(_T(""));m_l3.SetWindowText(_T("")); m_l1.SetWindowText(_T("త"));m_l2.SetWindowText(_T("థ"));
   m_semicolon4.SetWindowText(_T(""));m_semicolon3.SetWindowText(_T("")); m_semicolon1.SetWindowText(_T("చ")); m_semicolon2.SetWindowText(_T("ఛ"));
   m_apos4.SetWindowText(_T(""));m_apos3.SetWindowText(_T("")); m_apos1.SetWindowText(_T("ట")); m_apos2.SetWindowText(_T("ఠ"));
   m_hash4.SetWindowText(_T(""));m_hash3.SetWindowText(_T(""));m_hash1.SetWindowText(_T("")); m_hash2.SetWindowText(_T(""));
   m_bslash4.SetWindowText(_T(""));m_bslash3.SetWindowText(_T("")); m_bslash1.SetWindowText(_T("")); m_bslash2.SetWindowText(_T(""));
   m_z4.SetWindowText(_T(""));m_z3.SetWindowText(_T(""));m_z1.SetWindowText(_T("ె")); m_z2.SetWindowText(_T("ఎ"));
   m_x4.SetWindowText(_T(""));m_x3.SetWindowText(_T(""));m_x1.SetWindowText(_T("ం")); m_x2.SetWindowText(_T("ఁ"));
   m_c4.SetWindowText(_T(""));m_c3.SetWindowText(_T("")); m_c1.SetWindowText(_T("మ")); m_c2.SetWindowText(_T("ణ"));
   m_v4.SetWindowText(_T(""));m_v3.SetWindowText(_T(""));m_v1.SetWindowText(_T("న")); m_v2.SetWindowText(_T("న"));
   m_b4.SetWindowText(_T(""));m_b3.SetWindowText(_T(""));m_b1.SetWindowText(_T("వ"));m_b2.SetWindowText(_T(""));
   m_n4.SetWindowText(_T(""));m_n3.SetWindowText(_T(""));m_n1.SetWindowText(_T("ల")); m_n2.SetWindowText(_T("ళ"));
   m_m4.SetWindowText(_T(""));m_m3.SetWindowText(_T(""));m_m1.SetWindowText(_T("స")); m_m2.SetWindowText(_T("శ"));
   m_comma4.SetWindowText(_T(""));m_comma3.SetWindowText(_T("")); m_comma1.SetWindowText(_T(",")); m_comma2.SetWindowText(_T("ష"));
   m_fstop4.SetWindowText(_T(""));m_fstop3.SetWindowText(_T(""));m_fstop1.SetWindowText(_T(".")); m_fstop2.SetWindowText(_T(""));
   m_fslash4.SetWindowText(_T(""));m_fslash3.SetWindowText(_T(""));m_fslash1.SetWindowText(_T("య")); m_fslash2.SetWindowText(_T("")); 
}

void Keyboard::SetHindiText()
{
	CString title; title+=m_parent->m_langs[m_curLang]; title+=" Keyboard - ";
	title+=m_parent->m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

	m_bar4.SetWindowText(_T("~")); m_bar3.SetWindowText(_T("`")); m_bar1.SetWindowText(_T("")); m_bar2.SetWindowText(_T(""));
   m_14.SetWindowText(_T("!"));m_13.SetWindowText(_T("१")); m_11.SetWindowText(_T("1")); m_12.SetWindowText(_T("ऍ"));
   m_24.SetWindowText(_T("@"));m_23.SetWindowText(_T("२")); m_21.SetWindowText(_T("2")); m_22.SetWindowText(_T(""));
   m_34.SetWindowText(_T("#"));m_33.SetWindowText(_T("३")); m_31.SetWindowText(_T("3")); m_32.SetWindowText(_T("र"));
   m_44.SetWindowText(_T("$"));m_43.SetWindowText(_T("४")); m_41.SetWindowText(_T("4")); m_42.SetWindowText(_T("र्"));
   m_54.SetWindowText(_T("%"));m_53.SetWindowText(_T("५")); m_51.SetWindowText(_T("5")); m_52.SetWindowText(_T("ज्ञ"));
   m_64.SetWindowText(_T("^"));m_63.SetWindowText(_T("६"));m_61.SetWindowText(_T("6")); m_62.SetWindowText(_T("त्र"));
   m_74.SetWindowText(_T("&"));m_73.SetWindowText(_T("७"));m_71.SetWindowText(_T("7")); m_72.SetWindowText(_T("क्ष"));
   m_84.SetWindowText(_T("*"));m_83.SetWindowText(_T("८")); m_81.SetWindowText(_T("8")); m_82.SetWindowText(_T("श्र"));
   m_94.SetWindowText(_T("("));m_93.SetWindowText(_T("९"));m_91.SetWindowText(_T("9")); m_92.SetWindowText(_T("("));
   m_04.SetWindowText(_T(")"));m_03.SetWindowText(_T("०")); m_01.SetWindowText(_T("0")); m_02.SetWindowText(_T(")"));
   m_undscr4.SetWindowText(_T("-"));m_undscr3.SetWindowText(_T("-"));m_undscr1.SetWindowText(_T("-")); m_undscr2.SetWindowText(_T("ः"));
   m_eq4.SetWindowText(_T("+"));m_eq3.SetWindowText(_T("=")); m_eq1.SetWindowText(_T("ृ")); m_eq2.SetWindowText(_T("ऋ"));
   m_q4.SetWindowText(_T(""));m_q3.SetWindowText(_T(""));m_q1.SetWindowText(_T("ौ")); m_q2.SetWindowText(_T("औ"));
	m_w4.SetWindowText(_T(""));m_w3.SetWindowText(_T("")); m_w1.SetWindowText(_T("ै")); m_w2.SetWindowText(_T("ऐ")); //m_wsup.SetWindowText(_T("W"));
   m_e4.SetWindowText(_T(""));m_e3.SetWindowText(_T(""));m_e1.SetWindowText(_T("ा")); m_e2.SetWindowText(_T("आ"));
   m_r4.SetWindowText(_T(""));m_r3.SetWindowText(_T(""));m_r1.SetWindowText(_T("ी")); m_r2.SetWindowText(_T("ई"));
   m_t4.SetWindowText(_T(""));m_t3.SetWindowText(_T(""));m_t1.SetWindowText(_T("ू")); m_t2.SetWindowText(_T("ऊ"));
   m_y4.SetWindowText(_T(""));m_y3.SetWindowText(_T("")); m_y1.SetWindowText(_T("ब")); m_y2.SetWindowText(_T("भ"));
   m_u4.SetWindowText(_T(""));m_u3.SetWindowText(_T("")); m_u1.SetWindowText(_T("ह")); m_u2.SetWindowText(_T("ङ"));
   m_i4.SetWindowText(_T(""));m_i3.SetWindowText(_T(""));m_i1.SetWindowText(_T("ग")); m_i2.SetWindowText(_T("घ"));
   m_o4.SetWindowText(_T(""));m_o3.SetWindowText(_T(""));m_o1.SetWindowText(_T("द")); m_o2.SetWindowText(_T("ध"));
   m_p4.SetWindowText(_T(""));m_p3.SetWindowText(_T("")); m_p1.SetWindowText(_T("ज")); m_p2.SetWindowText(_T("झ"));
   m_lsqbrkt4.SetWindowText(_T("{"));m_lsqbrkt3.SetWindowText(_T("["));m_lsqbrkt1.SetWindowText(_T("ड")); m_lsqbrkt2.SetWindowText(_T("ढ"));
   m_rsqbrkt4.SetWindowText(_T("}"));m_rsqbrkt3.SetWindowText(_T("]")); m_rsqbrkt1.SetWindowText(_T("")); m_rsqbrkt2.SetWindowText(_T("ञ"));
   m_a4.SetWindowText(_T(""));m_a3.SetWindowText(_T(""));m_a1.SetWindowText(_T("ो")); m_a2.SetWindowText(_T("ओ"));
   m_s4.SetWindowText(_T(""));m_s3.SetWindowText(_T(""));m_s1.SetWindowText(_T("े")); m_s2.SetWindowText(_T("ए"));
   m_d4.SetWindowText(_T(""));m_d3.SetWindowText(_T("")); m_d1.SetWindowText(_T("्")); m_d2.SetWindowText(_T("अ"));
   m_f4.SetWindowText(_T(""));m_f3.SetWindowText(_T(""));m_f1.SetWindowText(_T("ि")); m_f2.SetWindowText(_T("इ"));
   m_g4.SetWindowText(_T(""));m_g3.SetWindowText(_T(""));m_g1.SetWindowText(_T("ु")); m_g2.SetWindowText(_T("उ"));
   m_h4.SetWindowText(_T(""));m_h3.SetWindowText(_T("")); m_h1.SetWindowText(_T("प")); m_h2.SetWindowText(_T("फ"));
   m_j4.SetWindowText(_T(""));m_j3.SetWindowText(_T("")); m_j1.SetWindowText(_T("र")); m_j2.SetWindowText(_T("ऱ"));
   m_k4.SetWindowText(_T(""));m_k3.SetWindowText(_T("")); m_k1.SetWindowText(_T("क")); m_k2.SetWindowText(_T("ख"));
   m_l4.SetWindowText(_T(""));m_l3.SetWindowText(_T("")); m_l1.SetWindowText(_T("त")); m_l2.SetWindowText(_T("थ"));
   m_semicolon4.SetWindowText(_T(":"));m_semicolon3.SetWindowText(_T(";"));m_semicolon1.SetWindowText(_T("च")); m_semicolon2.SetWindowText(_T("छ"));
   m_apos4.SetWindowText(_T("\""));m_apos3.SetWindowText(_T("'"));m_apos1.SetWindowText(_T("ट")); m_apos2.SetWindowText(_T("ठ"));
   m_hash4.SetWindowText(_T("|")); m_hash3.SetWindowText(_T("")); m_hash1.SetWindowText(_T("")); m_hash2.SetWindowText(_T("ऑ"));
   m_bslash4.SetWindowText(_T(""));m_bslash3.SetWindowText(_T("")); m_bslash1.SetWindowText(_T("ॉ")); m_bslash2.SetWindowText(_T("ऑ"));
   m_z4.SetWindowText(_T("")); m_z3.SetWindowText(_T(""));m_z1.SetWindowText(_T("")); m_z2.SetWindowText(_T(""));
   m_x4.SetWindowText(_T("ॐ")); m_x3.SetWindowText(_T(""));m_x1.SetWindowText(_T("ं")); m_x2.SetWindowText(_T("ँ"));
   m_c4.SetWindowText(_T(""));m_c3.SetWindowText(_T(""));m_c1.SetWindowText(_T("म")); m_c2.SetWindowText(_T("ण"));
   m_v4.SetWindowText(_T(""));m_v3.SetWindowText(_T("")); m_v1.SetWindowText(_T("न")); m_v2.SetWindowText(_T(""));
   m_b4.SetWindowText(_T(""));m_b3.SetWindowText(_T("")); m_b1.SetWindowText(_T("व")); m_b2.SetWindowText(_T(""));
   m_n4.SetWindowText(_T(""));m_n3.SetWindowText(_T("")); m_n1.SetWindowText(_T("ल"));m_n2.SetWindowText(_T("ळ"));
   m_m4.SetWindowText(_T(""));m_m3.SetWindowText(_T("")); m_m1.SetWindowText(_T("स")); m_m2.SetWindowText(_T("श"));
   m_comma4.SetWindowText(_T("<"));m_comma3.SetWindowText(_T(","));m_comma1.SetWindowText(_T(",")); m_comma2.SetWindowText(_T("ष"));
   m_fstop4.SetWindowText(_T(">"));m_fstop3.SetWindowText(_T("."));m_fstop1.SetWindowText(_T(".")); m_fstop2.SetWindowText(_T("।"));
   m_fslash4.SetWindowText(_T("?"));m_fslash3.SetWindowText(_T("/"));m_fslash1.SetWindowText(_T("य")); m_fslash2.SetWindowText(_T("य़"));
}

void Keyboard::SetEnglishText()
{
	CString title; title+=m_parent->m_langs[m_curLang]; title+=" Keyboard - ";
	title+=m_parent->m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

	m_bar4.SetWindowText(_T(""));m_bar3.SetWindowText(_T("¦"));m_bar1.SetWindowText(_T("`")); m_bar2.SetWindowText(_T("¬"));
   m_14.SetWindowText(_T(""));m_13.SetWindowText(_T(""));m_11.SetWindowText(_T("1")); m_12.SetWindowText(_T("!"));
   m_24.SetWindowText(_T(""));m_23.SetWindowText(_T(""));m_21.SetWindowText(_T("2")); m_22.SetWindowText(_T("\""));
   m_34.SetWindowText(_T(""));m_33.SetWindowText(_T(""));m_31.SetWindowText(_T("3")); m_32.SetWindowText(_T("£"));
   m_44.SetWindowText(_T(""));m_43.SetWindowText(_T("€"));m_41.SetWindowText(_T("4")); m_42.SetWindowText(_T("$"));
   m_54.SetWindowText(_T(""));m_53.SetWindowText(_T("")); m_51.SetWindowText(_T("5")); m_52.SetWindowText(_T("%"));
   m_64.SetWindowText(_T(""));m_63.SetWindowText(_T(""));m_61.SetWindowText(_T("6")); m_62.SetWindowText(_T("^"));
   m_74.SetWindowText(_T(""));m_73.SetWindowText(_T(""));m_71.SetWindowText(_T("7")); m_72.SetWindowText(_T("&"));
   m_84.SetWindowText(_T(""));m_83.SetWindowText(_T("")); m_81.SetWindowText(_T("8")); m_82.SetWindowText(_T("*"));
   m_94.SetWindowText(_T(""));m_93.SetWindowText(_T("")); m_91.SetWindowText(_T("9")); m_92.SetWindowText(_T("("));
   m_04.SetWindowText(_T(""));m_03.SetWindowText(_T(""));m_01.SetWindowText(_T("0")); m_02.SetWindowText(_T(")"));
   m_undscr4.SetWindowText(_T(""));m_undscr3.SetWindowText(_T("")); m_undscr1.SetWindowText(_T("-")); m_undscr2.SetWindowText(_T("_"));
   m_eq4.SetWindowText(_T(""));m_eq3.SetWindowText(_T("")); m_eq1.SetWindowText(_T("=")); m_eq2.SetWindowText(_T("+"));
   m_q4.SetWindowText(_T(""));m_q3.SetWindowText(_T("")); m_q1.SetWindowText(_T("q")); m_q2.SetWindowText(_T("Q"));
   m_w4.SetWindowText(_T(""));m_w3.SetWindowText(_T("")); m_w1.SetWindowText(_T("w")); m_w2.SetWindowText(_T("W"));//m_wsup.SetWindowText(_T("W"));
   m_e4.SetWindowText(_T(""));m_e3.SetWindowText(_T(""));m_e1.SetWindowText(_T("e")); m_e2.SetWindowText(_T("E"));
   m_r4.SetWindowText(_T(""));m_r3.SetWindowText(_T(""));m_r1.SetWindowText(_T("r")); m_r2.SetWindowText(_T("R"));
   m_t4.SetWindowText(_T(""));m_t3.SetWindowText(_T(""));m_t1.SetWindowText(_T("t")); m_t2.SetWindowText(_T("T"));
   m_y4.SetWindowText(_T(""));m_y3.SetWindowText(_T("")); m_y1.SetWindowText(_T("y")); m_y2.SetWindowText(_T("Y"));
   m_u4.SetWindowText(_T(""));m_u3.SetWindowText(_T("")); m_u1.SetWindowText(_T("u")); m_u2.SetWindowText(_T("U"));
   m_i4.SetWindowText(_T(""));m_i3.SetWindowText(_T(""));m_i1.SetWindowText(_T("i")); m_i2.SetWindowText(_T("I"));
   m_o4.SetWindowText(_T(""));m_o3.SetWindowText(_T("")); m_o1.SetWindowText(_T("o")); m_o2.SetWindowText(_T("O"));
   m_p4.SetWindowText(_T(""));m_p3.SetWindowText(_T("")); m_p1.SetWindowText(_T("p")); m_p2.SetWindowText(_T("P"));
   m_lsqbrkt4.SetWindowText(_T(""));m_lsqbrkt3.SetWindowText(_T(""));m_lsqbrkt1.SetWindowText(_T("[")); m_lsqbrkt2.SetWindowText(_T("{"));
   m_rsqbrkt4.SetWindowText(_T(""));m_rsqbrkt3.SetWindowText(_T("")); m_rsqbrkt1.SetWindowText(_T("]")); m_rsqbrkt2.SetWindowText(_T("}"));
   m_a4.SetWindowText(_T(""));m_a3.SetWindowText(_T(""));m_a1.SetWindowText(_T("a")); m_a2.SetWindowText(_T("A"));
   m_s4.SetWindowText(_T(""));m_s3.SetWindowText(_T(""));m_s1.SetWindowText(_T("s")); m_s2.SetWindowText(_T("S"));
   m_d4.SetWindowText(_T(""));m_d3.SetWindowText(_T("")); m_d1.SetWindowText(_T("d")); m_d2.SetWindowText(_T("D"));
   m_f4.SetWindowText(_T(""));m_f3.SetWindowText(_T("")); m_f1.SetWindowText(_T("f")); m_f2.SetWindowText(_T("F"));
   m_g4.SetWindowText(_T(""));m_g3.SetWindowText(_T(""));m_g1.SetWindowText(_T("g")); m_g2.SetWindowText(_T("G"));
   m_h4.SetWindowText(_T(""));m_h3.SetWindowText(_T(""));m_h1.SetWindowText(_T("h")); m_h2.SetWindowText(_T("H"));
   m_j4.SetWindowText(_T(""));m_j3.SetWindowText(_T(""));m_j1.SetWindowText(_T("j")); m_j2.SetWindowText(_T("J"));
   m_k4.SetWindowText(_T(""));m_k3.SetWindowText(_T("")); m_k1.SetWindowText(_T("k")); m_k2.SetWindowText(_T("K"));
   m_l4.SetWindowText(_T(""));m_l3.SetWindowText(_T(""));m_l1.SetWindowText(_T("l")); m_l2.SetWindowText(_T("L"));
   m_semicolon4.SetWindowText(_T(""));m_semicolon3.SetWindowText(_T("")); m_semicolon1.SetWindowText(_T(";")); m_semicolon2.SetWindowText(_T(":"));
   m_apos4.SetWindowText(_T(""));m_apos3.SetWindowText(_T(""));m_apos1.SetWindowText(_T("'")); m_apos2.SetWindowText(_T("@"));
   m_hash4.SetWindowText(_T(""));m_hash3.SetWindowText(_T(""));m_hash1.SetWindowText(_T("#")); m_hash2.SetWindowText(_T("~"));
   m_bslash4.SetWindowText(_T(""));m_bslash3.SetWindowText(_T("")); m_bslash1.SetWindowText(_T("\\")); m_bslash2.SetWindowText(_T("|"));
   m_z4.SetWindowText(_T(""));m_z3.SetWindowText(_T("")); m_z1.SetWindowText(_T("z")); m_z2.SetWindowText(_T("Z"));
   m_x4.SetWindowText(_T(""));m_x3.SetWindowText(_T(""));m_x1.SetWindowText(_T("x")); m_x2.SetWindowText(_T("X"));
   m_c4.SetWindowText(_T(""));m_c3.SetWindowText(_T("")); m_c1.SetWindowText(_T("c")); m_c2.SetWindowText(_T("C"));
   m_v4.SetWindowText(_T(""));m_v3.SetWindowText(_T(""));m_v1.SetWindowText(_T("v")); m_v2.SetWindowText(_T("V"));
   m_b4.SetWindowText(_T(""));m_b3.SetWindowText(_T("")); m_b1.SetWindowText(_T("b")); m_b2.SetWindowText(_T("B"));
   m_n4.SetWindowText(_T(""));m_n3.SetWindowText(_T(""));m_n1.SetWindowText(_T("n")); m_n2.SetWindowText(_T("N"));
   m_m4.SetWindowText(_T(""));m_m3.SetWindowText(_T(""));m_m1.SetWindowText(_T("m")); m_m2.SetWindowText(_T("M"));
   m_comma4.SetWindowText(_T(""));m_comma3.SetWindowText(_T(""));m_comma1.SetWindowText(_T(",")); m_comma2.SetWindowText(_T("<"));
   m_fstop4.SetWindowText(_T(""));m_fstop3.SetWindowText(_T(""));m_fstop1.SetWindowText(_T(".")); m_fstop2.SetWindowText(_T(">"));
   m_fslash4.SetWindowText(_T(""));m_fslash3.SetWindowText(_T(""));m_fslash1.SetWindowText(_T("/")); m_fslash2.SetWindowText(_T("?")); 
}

void Keyboard::SetBengaliText()
{
	CString title; title+=m_parent->m_langs[m_curLang]; title+=" Keyboard - ";
	title+=m_parent->m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

	m_bar4.SetWindowText(_T(""));m_bar3.SetWindowText(_T("")); m_bar1.SetWindowText(_T("")); m_bar2.SetWindowText(_T(""));
   m_14.SetWindowText(_T(""));m_13.SetWindowText(_T("১"));m_11.SetWindowText(_T("1")); m_12.SetWindowText(_T(""));
   m_24.SetWindowText(_T(""));m_23.SetWindowText(_T("২")); m_21.SetWindowText(_T("2")); m_22.SetWindowText(_T(""));
   m_34.SetWindowText(_T(""));m_33.SetWindowText(_T("৩")); m_31.SetWindowText(_T("3")); m_32.SetWindowText(_T("্র"));
   m_44.SetWindowText(_T(""));m_43.SetWindowText(_T("৪")); m_41.SetWindowText(_T("4")); m_42.SetWindowText(_T("র্"));
   m_54.SetWindowText(_T(""));m_53.SetWindowText(_T("৫"));m_51.SetWindowText(_T("5")); m_52.SetWindowText(_T("জ্র"));
   m_64.SetWindowText(_T(""));m_63.SetWindowText(_T("৬"));m_61.SetWindowText(_T("6")); m_62.SetWindowText(_T("ত্ষ"));
   m_74.SetWindowText(_T(""));m_73.SetWindowText(_T("৭")); m_71.SetWindowText(_T("7")); m_72.SetWindowText(_T("ক্র"));
   m_84.SetWindowText(_T(""));m_83.SetWindowText(_T("৮"));m_81.SetWindowText(_T("8")); m_82.SetWindowText(_T("শ্র"));
   m_94.SetWindowText(_T(""));m_93.SetWindowText(_T("৯")); m_91.SetWindowText(_T("9")); m_92.SetWindowText(_T("("));
   m_04.SetWindowText(_T(""));m_03.SetWindowText(_T("০"));m_01.SetWindowText(_T("0")); m_02.SetWindowText(_T(")"));
   m_undscr4.SetWindowText(_T(""));m_undscr3.SetWindowText(_T("")); m_undscr1.SetWindowText(_T("-")); m_undscr2.SetWindowText(_T("ঃ"));
   m_eq4.SetWindowText(_T("ৠ"));m_eq3.SetWindowText(_T("ৢ"));m_eq1.SetWindowText(_T("ৃ")); m_eq2.SetWindowText(_T("ঋ"));
   m_q4.SetWindowText(_T(""));m_q3.SetWindowText(_T("ৗ"));m_q1.SetWindowText(_T("ৌ")); m_q2.SetWindowText(_T("ঔ"));
   m_w4.SetWindowText(_T(""));m_w3.SetWindowText(_T("")); m_w1.SetWindowText(_T("ৈ")); m_w2.SetWindowText(_T("ঐ"));//m_wsup.SetWindowText(_T("W"));
   m_e4.SetWindowText(_T(""));m_e3.SetWindowText(_T(""));m_e1.SetWindowText(_T("া")); m_e2.SetWindowText(_T("আ"));
   m_r4.SetWindowText(_T("ৡ"));m_r3.SetWindowText(_T("ৣ")); m_r1.SetWindowText(_T("ী")); m_r2.SetWindowText(_T("ঈ"));
   m_t4.SetWindowText(_T(""));m_t3.SetWindowText(_T("")); m_t1.SetWindowText(_T("ূ")); m_t2.SetWindowText(_T("ঊ"));
   m_y4.SetWindowText(_T(""));m_y3.SetWindowText(_T("")); m_y1.SetWindowText(_T("ব")); m_y2.SetWindowText(_T("ভ"));
   m_u4.SetWindowText(_T(""));m_u3.SetWindowText(_T("")); m_u1.SetWindowText(_T("হ")); m_u2.SetWindowText(_T("ঙ"));
   m_i4.SetWindowText(_T(""));m_i3.SetWindowText(_T(""));m_i1.SetWindowText(_T("গ")); m_i2.SetWindowText(_T("ঘ"));
   m_o4.SetWindowText(_T(""));m_o3.SetWindowText(_T(""));m_o1.SetWindowText(_T("দ")); m_o2.SetWindowText(_T("ধ"));
   m_p4.SetWindowText(_T(""));m_p3.SetWindowText(_T(""));m_p1.SetWindowText(_T("জ")); m_p2.SetWindowText(_T("ঝ"));
   m_lsqbrkt4.SetWindowText(_T("ঢ়"));m_lsqbrkt3.SetWindowText(_T("ড়")); m_lsqbrkt1.SetWindowText(_T("ড")); m_lsqbrkt2.SetWindowText(_T("ঢ"));
   m_rsqbrkt4.SetWindowText(_T(""));m_rsqbrkt3.SetWindowText(_T(""));m_rsqbrkt1.SetWindowText(_T("়")); m_rsqbrkt2.SetWindowText(_T("ঞ"));
   m_a4.SetWindowText(_T("৵"));m_a3.SetWindowText(_T("৴"));m_a1.SetWindowText(_T("ো")); m_a2.SetWindowText(_T("ও"));
   m_s4.SetWindowText(_T("৷"));m_s3.SetWindowText(_T("৶"));m_s1.SetWindowText(_T("ে")); m_s2.SetWindowText(_T("এ"));
   m_d4.SetWindowText(_T("৹"));m_d3.SetWindowText(_T("৸"));m_d1.SetWindowText(_T("্")); m_d2.SetWindowText(_T("অ"));
   m_f4.SetWindowText(_T("ঌ"));m_f3.SetWindowText(_T("ৢ"));m_f1.SetWindowText(_T("ি")); m_f2.SetWindowText(_T("ই"));
   m_g4.SetWindowText(_T(""));m_g3.SetWindowText(_T(""));m_g1.SetWindowText(_T("ু")); m_g2.SetWindowText(_T("উ"));
   m_h4.SetWindowText(_T(""));m_h3.SetWindowText(_T(""));m_h1.SetWindowText(_T("প")); m_h2.SetWindowText(_T("ফ"));
   m_j4.SetWindowText(_T("ৱ"));m_j3.SetWindowText(_T("ৰ"));m_j1.SetWindowText(_T("র")); m_j2.SetWindowText(_T(""));
   m_k4.SetWindowText(_T(""));m_k3.SetWindowText(_T("")); m_k1.SetWindowText(_T("ক")); m_k2.SetWindowText(_T("খ"));
   m_l4.SetWindowText(_T(""));m_l3.SetWindowText(_T(""));m_l1.SetWindowText(_T("ত")); m_l2.SetWindowText(_T("থ"));
   m_semicolon4.SetWindowText(_T(""));m_semicolon3.SetWindowText(_T("")); m_semicolon1.SetWindowText(_T("চ")); m_semicolon2.SetWindowText(_T("ছ"));
   m_apos4.SetWindowText(_T(""));m_apos3.SetWindowText(_T("")); m_apos1.SetWindowText(_T("ট")); m_apos2.SetWindowText(_T("ঠ"));
   m_hash4.SetWindowText(_T(""));m_hash3.SetWindowText(_T("")); m_hash1.SetWindowText(_T("")); m_hash2.SetWindowText(_T(""));
   m_bslash4.SetWindowText(_T(""));m_bslash3.SetWindowText(_T("")); m_bslash1.SetWindowText(_T("")); m_bslash2.SetWindowText(_T(""));
   m_z4.SetWindowText(_T(""));m_z3.SetWindowText(_T("")); m_z1.SetWindowText(_T("")); m_z2.SetWindowText(_T(""));
   m_x4.SetWindowText(_T(""));m_x3.SetWindowText(_T("৺"));m_x1.SetWindowText(_T("ং")); m_x2.SetWindowText(_T("ঁ"));
   m_c4.SetWindowText(_T(""));m_c3.SetWindowText(_T(""));m_c1.SetWindowText(_T("ম")); m_c2.SetWindowText(_T("ণ"));
   m_v4.SetWindowText(_T(""));m_v3.SetWindowText(_T(""));m_v1.SetWindowText(_T("ন")); m_v2.SetWindowText(_T(""));
   m_b4.SetWindowText(_T(""));m_b3.SetWindowText(_T(""));m_b1.SetWindowText(_T("ব")); m_b2.SetWindowText(_T(""));
   m_n4.SetWindowText(_T(""));m_n3.SetWindowText(_T("")); m_n1.SetWindowText(_T("ল")); m_n2.SetWindowText(_T(""));
   m_m4.SetWindowText(_T(""));m_m3.SetWindowText(_T("")); m_m1.SetWindowText(_T("স")); m_m2.SetWindowText(_T("শ"));
   m_comma4.SetWindowText(_T(""));m_comma3.SetWindowText(_T("")); m_comma1.SetWindowText(_T(",")); m_comma2.SetWindowText(_T("ষ"));
   m_fstop4.SetWindowText(_T(""));m_fstop3.SetWindowText(_T("")); m_fstop1.SetWindowText(_T(".")); m_fstop2.SetWindowText(_T(""));
   m_fslash4.SetWindowText(_T(""));m_fslash3.SetWindowText(_T("")); m_fslash1.SetWindowText(_T("য়")); m_fslash2.SetWindowText(_T("য")); 
}

void Keyboard::SetFarsiText()
{
	CString title; title+=m_parent->m_langs[m_curLang]; title+=" Keyboard - ";
	title+=m_parent->m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

	m_bar4.SetWindowText(_T(""));m_bar3.SetWindowText(_T("")); m_bar1.SetWindowText(_T("÷")); m_bar2.SetWindowText(_T("×"));
   m_14.SetWindowText(_T(""));m_13.SetWindowText(_T("")); m_11.SetWindowText(_T("1")); m_12.SetWindowText(_T("!"));
   m_24.SetWindowText(_T(""));m_23.SetWindowText(_T(""));m_21.SetWindowText(_T("2")); m_22.SetWindowText(_T("@"));
   m_34.SetWindowText(_T(""));m_33.SetWindowText(_T("")); m_31.SetWindowText(_T("3")); m_32.SetWindowText(_T("#"));
   m_44.SetWindowText(_T(""));m_43.SetWindowText(_T(""));m_41.SetWindowText(_T("4")); m_42.SetWindowText(_T("$"));
   m_54.SetWindowText(_T(""));m_53.SetWindowText(_T(""));m_51.SetWindowText(_T("5")); m_52.SetWindowText(_T("%"));
   m_64.SetWindowText(_T(""));m_63.SetWindowText(_T(""));m_61.SetWindowText(_T("6")); m_62.SetWindowText(_T("^"));
   m_74.SetWindowText(_T(""));m_73.SetWindowText(_T(""));m_71.SetWindowText(_T("7")); m_72.SetWindowText(_T("&"));
   m_84.SetWindowText(_T(""));m_83.SetWindowText(_T(""));m_81.SetWindowText(_T("8")); m_82.SetWindowText(_T("*"));
   m_94.SetWindowText(_T(""));m_93.SetWindowText(_T(""));m_91.SetWindowText(_T("9")); m_92.SetWindowText(_T("("));
   m_04.SetWindowText(_T(""));m_03.SetWindowText(_T("")); m_01.SetWindowText(_T("0")); m_02.SetWindowText(_T(")"));
   m_undscr4.SetWindowText(_T(""));m_undscr3.SetWindowText(_T("")); m_undscr1.SetWindowText(_T("-")); m_undscr2.SetWindowText(_T("_"));
   m_eq4.SetWindowText(_T(""));m_eq3.SetWindowText(_T(""));m_eq1.SetWindowText(_T("=")); m_eq2.SetWindowText(_T("+"));
   m_q4.SetWindowText(_T(""));m_q3.SetWindowText(_T("")); m_q1.SetWindowText(_T("ض")); m_q2.SetWindowText(_T("ًًًضً"));
   m_w4.SetWindowText(_T(""));m_w3.SetWindowText(_T("")); m_w1.SetWindowText(_T("ص")); m_w2.SetWindowText(_T("ٌصٌ"));//m_wsup.SetWindowText(_T("W"));
   m_e4.SetWindowText(_T(""));m_e3.SetWindowText(_T("")); m_e1.SetWindowText(_T("ث")); m_e2.SetWindowText(_T("ثٍ"));
   m_r4.SetWindowText(_T(""));m_r3.SetWindowText(_T("")); m_r1.SetWindowText(_T("ق")); m_r2.SetWindowText(_T("ريال"));
   m_t4.SetWindowText(_T(""));m_t3.SetWindowText(_T("")); m_t1.SetWindowText(_T("ف")); m_t2.SetWindowText(_T("،"));
   m_y4.SetWindowText(_T(""));m_y3.SetWindowText(_T("")); m_y1.SetWindowText(_T("غ")); m_y2.SetWindowText(_T("؛"));
   m_u4.SetWindowText(_T(""));m_u3.SetWindowText(_T("")); m_u1.SetWindowText(_T("ع")); m_u2.SetWindowText(_T(","));
   m_i4.SetWindowText(_T(""));m_i3.SetWindowText(_T(""));m_i1.SetWindowText(_T("ه")); m_i2.SetWindowText(_T("["));
   m_o4.SetWindowText(_T(""));m_o3.SetWindowText(_T("")); m_o1.SetWindowText(_T("خ")); m_o2.SetWindowText(_T("]"));
   m_p4.SetWindowText(_T(""));m_p3.SetWindowText(_T("")); m_p1.SetWindowText(_T("ح")); m_p2.SetWindowText(_T("\\"));
   m_lsqbrkt4.SetWindowText(_T(""));m_lsqbrkt3.SetWindowText(_T("")); m_lsqbrkt1.SetWindowText(_T("ج")); m_lsqbrkt2.SetWindowText(_T("{"));
   m_rsqbrkt4.SetWindowText(_T(""));m_rsqbrkt3.SetWindowText(_T("")); m_rsqbrkt1.SetWindowText(_T("چ")); m_rsqbrkt2.SetWindowText(_T("}"));
   m_a4.SetWindowText(_T(""));m_a3.SetWindowText(_T(""));m_a1.SetWindowText(_T("ش")); m_a2.SetWindowText(_T("ََشَ"));
   m_s4.SetWindowText(_T(""));m_s3.SetWindowText(_T(""));m_s1.SetWindowText(_T("س")); m_s2.SetWindowText(_T("ُسُ"));
   m_d4.SetWindowText(_T(""));m_d3.SetWindowText(_T("")); m_d1.SetWindowText(_T("ی")); m_d2.SetWindowText(_T("ِیِ"));
   m_f4.SetWindowText(_T(""));m_f3.SetWindowText(_T(""));m_f1.SetWindowText(_T("ب")); m_f2.SetWindowText(_T("ّبّ"));
   m_g4.SetWindowText(_T(""));m_g3.SetWindowText(_T(""));m_g1.SetWindowText(_T("ل")); m_g2.SetWindowText(_T("ۀ"));
   m_h4.SetWindowText(_T(""));m_h3.SetWindowText(_T("")); m_h1.SetWindowText(_T("ا")); m_h2.SetWindowText(_T("آ"));
   m_j4.SetWindowText(_T(""));m_j3.SetWindowText(_T("")); m_j1.SetWindowText(_T("ت")); m_j2.SetWindowText(_T("ـ"));
   m_k4.SetWindowText(_T(""));m_k3.SetWindowText(_T("")); m_k1.SetWindowText(_T("ن")); m_k2.SetWindowText(_T("«"));
   m_l4.SetWindowText(_T(""));m_l3.SetWindowText(_T("")); m_l1.SetWindowText(_T("م")); m_l2.SetWindowText(_T("»"));
   m_semicolon4.SetWindowText(_T(""));m_semicolon3.SetWindowText(_T("")); m_semicolon1.SetWindowText(_T("ک")); m_semicolon2.SetWindowText(_T(":"));
   m_apos4.SetWindowText(_T(""));m_apos3.SetWindowText(_T("")); m_apos1.SetWindowText(_T("گ")); m_apos2.SetWindowText(_T("\""));
   m_hash4.SetWindowText(_T(""));m_hash3.SetWindowText(_T("")); m_hash1.SetWindowText(_T("پ")); m_hash2.SetWindowText(_T("|"));
   m_bslash4.SetWindowText(_T(""));m_bslash3.SetWindowText(_T(""));m_bslash1.SetWindowText(_T("پ")); m_bslash2.SetWindowText(_T("|"));
   m_z4.SetWindowText(_T(""));m_z3.SetWindowText(_T(""));m_z1.SetWindowText(_T("ظ")); m_z2.SetWindowText(_T("ة"));
   m_x4.SetWindowText(_T("")); m_x3.SetWindowText(_T("")); m_x1.SetWindowText(_T("ط")); m_x2.SetWindowText(_T("ي"));
   m_c4.SetWindowText(_T(""));m_c3.SetWindowText(_T(""));m_c1.SetWindowText(_T("ز")); m_c2.SetWindowText(_T("ژ"));
   m_v4.SetWindowText(_T(""));m_v3.SetWindowText(_T("")); m_v1.SetWindowText(_T("ر")); m_v2.SetWindowText(_T("ؤ"));
   m_b4.SetWindowText(_T(""));m_b3.SetWindowText(_T(""));m_b1.SetWindowText(_T("ذ")); m_b2.SetWindowText(_T("إ"));
   m_n4.SetWindowText(_T(""));m_n3.SetWindowText(_T(""));m_n1.SetWindowText(_T("د")); m_n2.SetWindowText(_T("أ"));
   m_m4.SetWindowText(_T(""));m_m3.SetWindowText(_T("")); m_m1.SetWindowText(_T("ئ")); m_m2.SetWindowText(_T("ء"));
   m_comma4.SetWindowText(_T(""));m_comma3.SetWindowText(_T("")); m_comma1.SetWindowText(_T("و")); m_comma2.SetWindowText(_T("<"));
   m_fstop4.SetWindowText(_T(""));m_fstop3.SetWindowText(_T("")); m_fstop1.SetWindowText(_T(".")); m_fstop2.SetWindowText(_T(">"));
   m_fslash4.SetWindowText(_T(""));m_fslash3.SetWindowText(_T("")); m_fslash1.SetWindowText(_T("/")); m_fslash2.SetWindowText(_T("؟")); 
}

void Keyboard::SetGujaratiText()
{
	CString title; title+=m_parent->m_langs[m_curLang]; title+=" Keyboard - ";
	title+=m_parent->m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

	m_bar4.SetWindowText(_T(""));m_bar3.SetWindowText(_T("")); m_bar1.SetWindowText(_T("")); m_bar2.SetWindowText(_T(""));
   m_14.SetWindowText(_T(""));m_13.SetWindowText(_T("૧"));m_11.SetWindowText(_T("1")); m_12.SetWindowText(_T("ઍ"));
   m_24.SetWindowText(_T(""));m_23.SetWindowText(_T("૨")); m_21.SetWindowText(_T("2")); m_22.SetWindowText(_T("ૅ"));
   m_34.SetWindowText(_T(""));m_33.SetWindowText(_T("૩")); m_31.SetWindowText(_T("3")); m_32.SetWindowText(_T("્ર"));
   m_44.SetWindowText(_T(""));m_43.SetWindowText(_T("૪")); m_41.SetWindowText(_T("4")); m_42.SetWindowText(_T("ર્"));
   m_54.SetWindowText(_T(""));m_53.SetWindowText(_T("૫")); m_51.SetWindowText(_T("5")); m_52.SetWindowText(_T("જ્ઞ"));
   m_64.SetWindowText(_T(""));m_63.SetWindowText(_T("૬")); m_61.SetWindowText(_T("6")); m_62.SetWindowText(_T("ત્ર"));
   m_74.SetWindowText(_T(""));m_73.SetWindowText(_T("૭")); m_71.SetWindowText(_T("7")); m_72.SetWindowText(_T("ક્ષ"));
   m_84.SetWindowText(_T(""));m_83.SetWindowText(_T("૮"));m_81.SetWindowText(_T("8")); m_82.SetWindowText(_T("શ્ર"));
   m_94.SetWindowText(_T(""));m_93.SetWindowText(_T("૯"));m_91.SetWindowText(_T("9")); m_92.SetWindowText(_T("("));
   m_04.SetWindowText(_T(""));m_03.SetWindowText(_T("૦")); m_01.SetWindowText(_T("0")); m_02.SetWindowText(_T(")"));
   m_undscr4.SetWindowText(_T(""));m_undscr3.SetWindowText(_T("")); m_undscr1.SetWindowText(_T("-")); m_undscr2.SetWindowText(_T("ઃ"));
   m_eq4.SetWindowText(_T("ૠ"));m_eq3.SetWindowText(_T("ૄ")); m_eq1.SetWindowText(_T("ૃ")); m_eq2.SetWindowText(_T("ઋ"));
   m_q4.SetWindowText(_T(""));m_q3.SetWindowText(_T(""));m_q1.SetWindowText(_T("ૌ")); m_q2.SetWindowText(_T("ઔ"));
   m_w4.SetWindowText(_T(""));m_w3.SetWindowText(_T(""));m_w1.SetWindowText(_T("ૈ")); m_w2.SetWindowText(_T("ઐ"));//m_wsup.SetWindowText(_T("W"));
   m_e4.SetWindowText(_T(""));m_e3.SetWindowText(_T(""));m_e1.SetWindowText(_T("ા")); m_e2.SetWindowText(_T("આ"));
   m_r4.SetWindowText(_T(""));m_r3.SetWindowText(_T("")); m_r1.SetWindowText(_T("ી")); m_r2.SetWindowText(_T("ઈ"));
   m_t4.SetWindowText(_T(""));m_t3.SetWindowText(_T("")); m_t1.SetWindowText(_T("ૂ")); m_t2.SetWindowText(_T("ઊ"));
   m_y4.SetWindowText(_T(""));m_y3.SetWindowText(_T("")); m_y1.SetWindowText(_T("બ")); m_y2.SetWindowText(_T("ભ"));
   m_u4.SetWindowText(_T(""));m_u3.SetWindowText(_T("")); m_u1.SetWindowText(_T("હ")); m_u2.SetWindowText(_T("ઙ"));
   m_i4.SetWindowText(_T(""));m_i3.SetWindowText(_T("")); m_i1.SetWindowText(_T("ગ")); m_i2.SetWindowText(_T("ઘ"));
   m_o4.SetWindowText(_T(""));m_o3.SetWindowText(_T("")); m_o1.SetWindowText(_T("દ")); m_o2.SetWindowText(_T("ધ"));
   m_p4.SetWindowText(_T(""));m_p3.SetWindowText(_T("")); m_p1.SetWindowText(_T("જ")); m_p2.SetWindowText(_T("ઝ"));
   m_lsqbrkt4.SetWindowText(_T(""));m_lsqbrkt3.SetWindowText(_T("")); m_lsqbrkt1.SetWindowText(_T("ડ")); m_lsqbrkt2.SetWindowText(_T("ઢ"));
   m_rsqbrkt4.SetWindowText(_T(""));m_rsqbrkt3.SetWindowText(_T(""));m_rsqbrkt1.SetWindowText(_T("઼")); m_rsqbrkt2.SetWindowText(_T("ઞ"));
   m_a4.SetWindowText(_T(""));m_a3.SetWindowText(_T("")); m_a1.SetWindowText(_T("ો")); m_a2.SetWindowText(_T("ઓ"));
   m_s4.SetWindowText(_T(""));m_s3.SetWindowText(_T("")); m_s1.SetWindowText(_T("ે")); m_s2.SetWindowText(_T("એ"));
   m_d4.SetWindowText(_T(""));m_d3.SetWindowText(_T("")); m_d1.SetWindowText(_T("્")); m_d2.SetWindowText(_T("અ"));
   m_f4.SetWindowText(_T(""));m_f3.SetWindowText(_T("")); m_f1.SetWindowText(_T("િ")); m_f2.SetWindowText(_T("ઇ"));
   m_g4.SetWindowText(_T(""));m_g3.SetWindowText(_T("")); m_g1.SetWindowText(_T("ુ")); m_g2.SetWindowText(_T("ઉ"));
   m_h4.SetWindowText(_T(""));m_h3.SetWindowText(_T(""));m_h1.SetWindowText(_T("પ")); m_h2.SetWindowText(_T("ફ"));
   m_j4.SetWindowText(_T(""));m_j3.SetWindowText(_T(""));m_j1.SetWindowText(_T("ર")); m_j2.SetWindowText(_T(""));
   m_k4.SetWindowText(_T(""));m_k3.SetWindowText(_T("")); m_k1.SetWindowText(_T("ક")); m_k2.SetWindowText(_T("ખ"));
   m_l4.SetWindowText(_T(""));m_l3.SetWindowText(_T(""));m_l1.SetWindowText(_T("ત")); m_l2.SetWindowText(_T("થ"));
   m_semicolon4.SetWindowText(_T(""));m_semicolon3.SetWindowText(_T("")); m_semicolon1.SetWindowText(_T("ચ")); m_semicolon2.SetWindowText(_T("છ"));
   m_apos4.SetWindowText(_T(""));m_apos3.SetWindowText(_T("")); m_apos1.SetWindowText(_T("ટ")); m_apos2.SetWindowText(_T("ઠ"));
   m_hash4.SetWindowText(_T(""));m_hash3.SetWindowText(_T("")); m_hash1.SetWindowText(_T("ૉ")); m_hash2.SetWindowText(_T("ઑ"));
   m_bslash4.SetWindowText(_T(""));m_bslash3.SetWindowText(_T("")); m_bslash1.SetWindowText(_T("")); m_bslash2.SetWindowText(_T(""));
   m_z4.SetWindowText(_T(""));m_z3.SetWindowText(_T("")); m_z1.SetWindowText(_T("")); m_z2.SetWindowText(_T(""));
   m_x4.SetWindowText(_T("ૐ"));m_x3.SetWindowText(_T("")); m_x1.SetWindowText(_T("ં")); m_x2.SetWindowText(_T("ઁ"));
   m_c4.SetWindowText(_T(""));m_c3.SetWindowText(_T("")); m_c1.SetWindowText(_T("મ")); m_c2.SetWindowText(_T("ણ"));
   m_v4.SetWindowText(_T(""));m_v3.SetWindowText(_T("")); m_v1.SetWindowText(_T("ન")); m_v2.SetWindowText(_T(""));
   m_b4.SetWindowText(_T(""));m_b3.SetWindowText(_T(""));m_b1.SetWindowText(_T("વ")); m_b2.SetWindowText(_T(""));
   m_n4.SetWindowText(_T(""));m_n3.SetWindowText(_T("")); m_n1.SetWindowText(_T("લ")); m_n2.SetWindowText(_T("ળ"));
   m_m4.SetWindowText(_T(""));m_m3.SetWindowText(_T("")); m_m1.SetWindowText(_T("સ")); m_m2.SetWindowText(_T("શ"));
   m_comma4.SetWindowText(_T(""));m_comma3.SetWindowText(_T("")); m_comma1.SetWindowText(_T(",")); m_comma2.SetWindowText(_T("ષ"));
   m_fstop4.SetWindowText(_T("ઽ"));m_fstop3.SetWindowText(_T("॥")); m_fstop1.SetWindowText(_T(".")); m_fstop2.SetWindowText(_T("।"));
   m_fslash4.SetWindowText(_T(""));m_fslash3.SetWindowText(_T("")); m_fslash1.SetWindowText(_T("ય")); m_fslash2.SetWindowText(_T("")); 
}

void Keyboard::SetKannadaText()
{
	CString title; title+=m_parent->m_langs[m_curLang]; title+=" Keyboard - ";
	title+=m_parent->m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

	m_bar4.SetWindowText(_T(""));m_bar3.SetWindowText(_T("")); m_bar1.SetWindowText(_T("ೊ")); m_bar2.SetWindowText(_T("ಒ"));
   m_14.SetWindowText(_T(""));m_13.SetWindowText(_T("೧")); m_11.SetWindowText(_T("1")); m_12.SetWindowText(_T(""));
   m_24.SetWindowText(_T(""));m_23.SetWindowText(_T("೨")); m_21.SetWindowText(_T("2")); m_22.SetWindowText(_T(""));
   m_34.SetWindowText(_T(""));m_33.SetWindowText(_T("೩")); m_31.SetWindowText(_T("3")); m_32.SetWindowText(_T("್ರ"));
   m_44.SetWindowText(_T(""));m_43.SetWindowText(_T("೪")); m_41.SetWindowText(_T("4")); m_42.SetWindowText(_T("ರ್"));
   m_54.SetWindowText(_T(""));m_53.SetWindowText(_T("೫"));m_51.SetWindowText(_T("5")); m_52.SetWindowText(_T("ಜ್ಞ"));
   m_64.SetWindowText(_T(""));m_63.SetWindowText(_T("೬")); m_61.SetWindowText(_T("6")); m_62.SetWindowText(_T("ತ್ರ"));
   m_74.SetWindowText(_T(""));m_73.SetWindowText(_T("೭"));m_71.SetWindowText(_T("7")); m_72.SetWindowText(_T("ಕ್ಷ"));
   m_84.SetWindowText(_T(""));m_83.SetWindowText(_T("೮")); m_81.SetWindowText(_T("8")); m_82.SetWindowText(_T("ಶ್ರ"));
   m_94.SetWindowText(_T(""));m_93.SetWindowText(_T("೯")); m_91.SetWindowText(_T("9")); m_92.SetWindowText(_T("("));
   m_04.SetWindowText(_T(""));m_03.SetWindowText(_T("೦")); m_01.SetWindowText(_T("0")); m_02.SetWindowText(_T(")"));
   m_undscr4.SetWindowText(_T(""));m_undscr3.SetWindowText(_T("")); m_undscr1.SetWindowText(_T("-")); m_undscr2.SetWindowText(_T("ಃ"));
   m_eq4.SetWindowText(_T("ೠ"));m_eq3.SetWindowText(_T("ೄ")); m_eq1.SetWindowText(_T("ೃ")); m_eq2.SetWindowText(_T("ಋ"));
   m_q4.SetWindowText(_T(""));m_q3.SetWindowText(_T("")); m_q1.SetWindowText(_T("ೌ")); m_q2.SetWindowText(_T("ಔ"));
   m_w4.SetWindowText(_T(""));m_w3.SetWindowText(_T("ೖ")); m_w1.SetWindowText(_T("ೈ")); m_w2.SetWindowText(_T("ಐ"));//m_wsup.SetWindowText(_T("W"));
   m_e4.SetWindowText(_T(""));m_e3.SetWindowText(_T("")); m_e1.SetWindowText(_T("ಾ")); m_e2.SetWindowText(_T("ಆ"));
   m_r4.SetWindowText(_T("ೡ"));m_r3.SetWindowText(_T("")); m_r1.SetWindowText(_T("ೀ")); m_r2.SetWindowText(_T("ಈ"));
   m_t4.SetWindowText(_T(""));m_t3.SetWindowText(_T("")); m_t1.SetWindowText(_T("ೂ")); m_t2.SetWindowText(_T("ಊ"));
   m_y4.SetWindowText(_T(""));m_y3.SetWindowText(_T("")); m_y1.SetWindowText(_T("ಬ")); m_y2.SetWindowText(_T("ಭ"));
   m_u4.SetWindowText(_T(""));m_u3.SetWindowText(_T("")); m_u1.SetWindowText(_T("ಹ")); m_u2.SetWindowText(_T("ಙ"));
   m_i4.SetWindowText(_T(""));m_i3.SetWindowText(_T("")); m_i1.SetWindowText(_T("ಗ")); m_i2.SetWindowText(_T("ಘ"));
   m_o4.SetWindowText(_T(""));m_o3.SetWindowText(_T("")); m_o1.SetWindowText(_T("ದ")); m_o2.SetWindowText(_T("ಧ"));
   m_p4.SetWindowText(_T(""));m_p3.SetWindowText(_T(""));m_p1.SetWindowText(_T("ಜ")); m_p2.SetWindowText(_T("ಝ"));
   m_lsqbrkt4.SetWindowText(_T(""));m_lsqbrkt3.SetWindowText(_T(""));m_lsqbrkt1.SetWindowText(_T("ಡ")); m_lsqbrkt2.SetWindowText(_T("ಢ"));
   m_rsqbrkt4.SetWindowText(_T(""));m_rsqbrkt3.SetWindowText(_T("")); m_rsqbrkt1.SetWindowText(_T("")); m_rsqbrkt2.SetWindowText(_T("ಞ"));
   m_a4.SetWindowText(_T(""));m_a3.SetWindowText(_T("")); m_a1.SetWindowText(_T("ೋ")); m_a2.SetWindowText(_T("ಓ"));
   m_s4.SetWindowText(_T(""));m_s3.SetWindowText(_T("ೕ"));m_s1.SetWindowText(_T("ೇ")); m_s2.SetWindowText(_T("ಏ"));
   m_d4.SetWindowText(_T(""));m_d3.SetWindowText(_T("")); m_d1.SetWindowText(_T("್")); m_d2.SetWindowText(_T("ಅ"));
   m_f4.SetWindowText(_T("ಌ"));m_f3.SetWindowText(_T("")); m_f1.SetWindowText(_T("ಿ")); m_f2.SetWindowText(_T("ಇ"));
   m_g4.SetWindowText(_T(""));m_g3.SetWindowText(_T("")); m_g1.SetWindowText(_T("ು")); m_g2.SetWindowText(_T("ಉ"));
   m_h4.SetWindowText(_T("ೞ"));m_h3.SetWindowText(_T("")); m_h1.SetWindowText(_T("ಪ")); m_h2.SetWindowText(_T("ಫ"));
   m_j4.SetWindowText(_T(""));m_j3.SetWindowText(_T("")); m_j1.SetWindowText(_T("ರ")); m_j2.SetWindowText(_T("ಱ"));
   m_k4.SetWindowText(_T(""));m_k3.SetWindowText(_T("")); m_k1.SetWindowText(_T("ಕ")); m_k2.SetWindowText(_T("ಖ"));
   m_l4.SetWindowText(_T(""));m_l3.SetWindowText(_T("")); m_l1.SetWindowText(_T("ತ")); m_l2.SetWindowText(_T("ಥ"));
   m_semicolon4.SetWindowText(_T(""));m_semicolon3.SetWindowText(_T("")); m_semicolon1.SetWindowText(_T("ಚ")); m_semicolon2.SetWindowText(_T("ಛ"));
   m_apos4.SetWindowText(_T(""));m_apos3.SetWindowText(_T("")); m_apos1.SetWindowText(_T("ಟ")); m_apos2.SetWindowText(_T("ಠ"));
   m_hash4.SetWindowText(_T(""));m_hash3.SetWindowText(_T("")); m_hash1.SetWindowText(_T("")); m_hash2.SetWindowText(_T(""));
   m_bslash4.SetWindowText(_T(""));m_bslash3.SetWindowText(_T("")); m_bslash1.SetWindowText(_T("")); m_bslash2.SetWindowText(_T(""));
   m_z4.SetWindowText(_T(""));m_z3.SetWindowText(_T("")); m_z1.SetWindowText(_T("ೆ")); m_z2.SetWindowText(_T("ಎ"));
   m_x4.SetWindowText(_T(""));m_x3.SetWindowText(_T("")); m_x1.SetWindowText(_T("ಂ")); m_x2.SetWindowText(_T(""));
   m_c4.SetWindowText(_T(""));m_c3.SetWindowText(_T(""));m_c1.SetWindowText(_T("ಮ")); m_c2.SetWindowText(_T("ಣ"));
   m_v4.SetWindowText(_T(""));m_v3.SetWindowText(_T("")); m_v1.SetWindowText(_T("ನ")); m_v2.SetWindowText(_T(""));
   m_b4.SetWindowText(_T(""));m_b3.SetWindowText(_T("")); m_b1.SetWindowText(_T("ವ")); m_b2.SetWindowText(_T(""));
   m_n4.SetWindowText(_T(""));m_n3.SetWindowText(_T("")); m_n1.SetWindowText(_T("ಲ")); m_n2.SetWindowText(_T("ಳ"));
   m_m4.SetWindowText(_T(""));m_m3.SetWindowText(_T("")); m_m1.SetWindowText(_T("ಸ")); m_m2.SetWindowText(_T("ಶ"));
   m_comma4.SetWindowText(_T(""));m_comma3.SetWindowText(_T("")); m_comma1.SetWindowText(_T(",")); m_comma2.SetWindowText(_T("ಷ"));
   m_fstop4.SetWindowText(_T(""));m_fstop3.SetWindowText(_T("")); m_fstop1.SetWindowText(_T(".")); m_fstop2.SetWindowText(_T("|"));
   m_fslash4.SetWindowText(_T(""));m_fslash3.SetWindowText(_T("")); m_fslash1.SetWindowText(_T("ಯ")); m_fslash2.SetWindowText(_T("")); 
}

void Keyboard::SetMalayalamText()
{
	CString title; title+=m_parent->m_langs[m_curLang]; title+=" Keyboard - ";
	title+=m_parent->m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

	m_bar4.SetWindowText(_T(""));m_bar3.SetWindowText(_T("")); m_bar1.SetWindowText(_T("ൊ")); m_bar2.SetWindowText(_T("ഒ"));
   m_14.SetWindowText(_T(""));m_13.SetWindowText(_T("൧")); m_11.SetWindowText(_T("1")); m_12.SetWindowText(_T(""));
   m_24.SetWindowText(_T(""));m_23.SetWindowText(_T("൨")); m_21.SetWindowText(_T("2")); m_22.SetWindowText(_T(""));
   m_34.SetWindowText(_T(""));m_33.SetWindowText(_T("൩")); m_31.SetWindowText(_T("3")); m_32.SetWindowText(_T("്ര"));
   m_44.SetWindowText(_T(""));m_43.SetWindowText(_T("൪")); m_41.SetWindowText(_T("4")); m_42.SetWindowText(_T(""));
   m_54.SetWindowText(_T(""));m_53.SetWindowText(_T("൫")); m_51.SetWindowText(_T("5")); m_52.SetWindowText(_T(""));
   m_64.SetWindowText(_T(""));m_63.SetWindowText(_T("൬")); m_61.SetWindowText(_T("6")); m_62.SetWindowText(_T(""));
   m_74.SetWindowText(_T(""));m_73.SetWindowText(_T("൭")); m_71.SetWindowText(_T("7")); m_72.SetWindowText(_T("ക്ഷ"));
   m_84.SetWindowText(_T(""));m_83.SetWindowText(_T("൮")); m_81.SetWindowText(_T("8")); m_82.SetWindowText(_T(""));
   m_94.SetWindowText(_T(""));m_93.SetWindowText(_T("൯")); m_91.SetWindowText(_T("9")); m_92.SetWindowText(_T("("));
   m_04.SetWindowText(_T(""));m_03.SetWindowText(_T("൦")); m_01.SetWindowText(_T("0")); m_02.SetWindowText(_T(")"));
   m_undscr4.SetWindowText(_T(""));m_undscr3.SetWindowText(_T("")); m_undscr1.SetWindowText(_T("-")); m_undscr2.SetWindowText(_T("ഃ"));
   m_eq4.SetWindowText(_T("ൠ"));m_eq3.SetWindowText(_T("")); m_eq1.SetWindowText(_T("ൃ")); m_eq2.SetWindowText(_T("ഋ"));
   m_q4.SetWindowText(_T(""));m_q3.SetWindowText(_T("ൗ")); m_q1.SetWindowText(_T("ൌ")); m_q2.SetWindowText(_T("ഔ"));
   m_w4.SetWindowText(_T(""));m_w3.SetWindowText(_T("")); m_w1.SetWindowText(_T("ൈ")); m_w2.SetWindowText(_T("ഐ"));//m_wsup.SetWindowText(_T("W"));
   m_e4.SetWindowText(_T(""));m_e3.SetWindowText(_T("")); m_e1.SetWindowText(_T("ാ")); m_e2.SetWindowText(_T("ആ"));
   m_r4.SetWindowText(_T("ൡ"));m_r3.SetWindowText(_T("")); m_r1.SetWindowText(_T("ീ")); m_r2.SetWindowText(_T("ഈ"));
   m_t4.SetWindowText(_T(""));m_t3.SetWindowText(_T("")); m_t1.SetWindowText(_T("ൂ")); m_t2.SetWindowText(_T("ഊ"));
   m_y4.SetWindowText(_T(""));m_y3.SetWindowText(_T("")); m_y1.SetWindowText(_T("ബ")); m_y2.SetWindowText(_T("ഭ"));
   m_u4.SetWindowText(_T(""));m_u3.SetWindowText(_T(""));m_u1.SetWindowText(_T("ഹ")); m_u2.SetWindowText(_T("ങ"));
   m_i4.SetWindowText(_T(""));m_i3.SetWindowText(_T("")); m_i1.SetWindowText(_T("ഗ")); m_i2.SetWindowText(_T("ഘ"));
   m_o4.SetWindowText(_T(""));m_o3.SetWindowText(_T("")); m_o1.SetWindowText(_T("ദ")); m_o2.SetWindowText(_T("ധ"));
   m_p4.SetWindowText(_T(""));m_p3.SetWindowText(_T("")); m_p1.SetWindowText(_T("ജ")); m_p2.SetWindowText(_T("ഝ"));
   m_lsqbrkt4.SetWindowText(_T(""));m_lsqbrkt3.SetWindowText(_T("")); m_lsqbrkt1.SetWindowText(_T("ഡ")); m_lsqbrkt2.SetWindowText(_T("ഢ"));
   m_rsqbrkt4.SetWindowText(_T(""));m_rsqbrkt3.SetWindowText(_T("")); m_rsqbrkt1.SetWindowText(_T("")); m_rsqbrkt2.SetWindowText(_T("ഞ"));
   m_a4.SetWindowText(_T(""));m_a3.SetWindowText(_T("")); m_a1.SetWindowText(_T("ോ")); m_a2.SetWindowText(_T("ഓ"));
   m_s4.SetWindowText(_T(""));m_s3.SetWindowText(_T("")); m_s1.SetWindowText(_T("േ")); m_s2.SetWindowText(_T("ഏ"));
   m_d4.SetWindowText(_T("ഌ"));m_d3.SetWindowText(_T("")); m_d1.SetWindowText(_T("്")); m_d2.SetWindowText(_T("അ"));
   m_f4.SetWindowText(_T(""));m_f3.SetWindowText(_T("")); m_f1.SetWindowText(_T("ി")); m_f2.SetWindowText(_T("ഇ"));
   m_g4.SetWindowText(_T(""));m_g3.SetWindowText(_T(""));m_g1.SetWindowText(_T("ു")); m_g2.SetWindowText(_T("ഉ"));
   m_h4.SetWindowText(_T(""));m_h3.SetWindowText(_T(""));m_h1.SetWindowText(_T("പ")); m_h2.SetWindowText(_T("ഫ"));
   m_j4.SetWindowText(_T(""));m_j3.SetWindowText(_T(""));m_j1.SetWindowText(_T("ര")); m_j2.SetWindowText(_T("റ"));
   m_k4.SetWindowText(_T(""));m_k3.SetWindowText(_T(""));m_k1.SetWindowText(_T("ക")); m_k2.SetWindowText(_T("ഖ"));
   m_l4.SetWindowText(_T(""));m_l3.SetWindowText(_T(""));m_l1.SetWindowText(_T("ത")); m_l2.SetWindowText(_T("ഥ"));
   m_semicolon4.SetWindowText(_T(""));m_semicolon3.SetWindowText(_T(""));m_semicolon1.SetWindowText(_T("ച")); m_semicolon2.SetWindowText(_T("ഛ"));
   m_apos4.SetWindowText(_T(""));m_apos3.SetWindowText(_T("")); m_apos1.SetWindowText(_T("ട")); m_apos2.SetWindowText(_T("ഠ"));
   m_hash4.SetWindowText(_T(""));m_hash3.SetWindowText(_T("")); m_hash1.SetWindowText(_T("")); m_hash2.SetWindowText(_T(""));
   m_bslash4.SetWindowText(_T(""));m_bslash3.SetWindowText(_T(""));m_bslash1.SetWindowText(_T("")); m_bslash2.SetWindowText(_T(""));
   m_z4.SetWindowText(_T(""));m_z3.SetWindowText(_T("")); m_z1.SetWindowText(_T("െ")); m_z2.SetWindowText(_T("എ"));
   m_x4.SetWindowText(_T(""));m_x3.SetWindowText(_T("")); m_x1.SetWindowText(_T("ം")); m_x2.SetWindowText(_T(""));
   m_c4.SetWindowText(_T(""));m_c3.SetWindowText(_T("")); m_c1.SetWindowText(_T("മ")); m_c2.SetWindowText(_T("ണ"));
   m_v4.SetWindowText(_T(""));m_v3.SetWindowText(_T("")); m_v1.SetWindowText(_T("ന")); m_v2.SetWindowText(_T(""));
   m_b4.SetWindowText(_T(""));m_b3.SetWindowText(_T(""));m_b1.SetWindowText(_T("വ")); m_b2.SetWindowText(_T("ഴ"));
   m_n4.SetWindowText(_T(""));m_n3.SetWindowText(_T("")); m_n1.SetWindowText(_T("ല")); m_n2.SetWindowText(_T("ള"));
   m_m4.SetWindowText(_T(""));m_m3.SetWindowText(_T("")); m_m1.SetWindowText(_T("സ")); m_m2.SetWindowText(_T("ശ"));
   m_comma4.SetWindowText(_T(""));m_comma3.SetWindowText(_T("")); m_comma1.SetWindowText(_T(",")); m_comma2.SetWindowText(_T("ഷ"));
   m_fstop4.SetWindowText(_T(""));m_fstop3.SetWindowText(_T("")); m_fstop1.SetWindowText(_T(".")); m_fstop2.SetWindowText(_T(""));
   m_fslash4.SetWindowText(_T(""));m_fslash3.SetWindowText(_T("")); m_fslash1.SetWindowText(_T("യ")); m_fslash2.SetWindowText(_T("")); 
}

void Keyboard::SetTamilText()
{
	CString title; title+=m_parent->m_langs[m_curLang]; title+=" Keyboard - ";
	title+=m_parent->m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

   m_bar4.SetWindowText(_T(""));m_bar3.SetWindowText(_T("")); m_bar1.SetWindowText(_T("ொ")); m_bar2.SetWindowText(_T("ஒ"));
   m_14.SetWindowText(_T(""));m_13.SetWindowText(_T("௧")); m_11.SetWindowText(_T("1")); m_12.SetWindowText(_T(""));
   m_24.SetWindowText(_T(""));m_23.SetWindowText(_T("௨")); m_21.SetWindowText(_T("2")); m_22.SetWindowText(_T(""));
   m_34.SetWindowText(_T(""));m_33.SetWindowText(_T("௩")); m_31.SetWindowText(_T("3")); m_32.SetWindowText(_T(""));
   m_44.SetWindowText(_T(""));m_43.SetWindowText(_T("௪")); m_41.SetWindowText(_T("4")); m_42.SetWindowText(_T(""));
   m_54.SetWindowText(_T(""));m_53.SetWindowText(_T("௫")); m_51.SetWindowText(_T("5")); m_52.SetWindowText(_T(""));
   m_64.SetWindowText(_T(""));m_63.SetWindowText(_T("௬")); m_61.SetWindowText(_T("6")); m_62.SetWindowText(_T("த்ர"));
   m_74.SetWindowText(_T(""));m_73.SetWindowText(_T("௭")); m_71.SetWindowText(_T("7")); m_72.SetWindowText(_T("க்ஷ"));
   m_84.SetWindowText(_T(""));m_83.SetWindowText(_T("௮")); m_81.SetWindowText(_T("8")); m_82.SetWindowText(_T("ஷ்ர"));
   m_94.SetWindowText(_T(""));m_93.SetWindowText(_T("௯")); m_91.SetWindowText(_T("9")); m_92.SetWindowText(_T(""));
   m_04.SetWindowText(_T(""));m_03.SetWindowText(_T("௰")); m_01.SetWindowText(_T("0")); m_02.SetWindowText(_T(""));
   m_undscr4.SetWindowText(_T(""));m_undscr3.SetWindowText(_T("௱"));m_undscr1.SetWindowText(_T("-")); m_undscr2.SetWindowText(_T("ஃ"));
   m_eq4.SetWindowText(_T(""));m_eq3.SetWindowText(_T("௲")); m_eq1.SetWindowText(_T("")); m_eq2.SetWindowText(_T(""));
   m_q4.SetWindowText(_T(""));m_q3.SetWindowText(_T("")); m_q1.SetWindowText(_T("ௌ")); m_q2.SetWindowText(_T("ஔ"));
   m_w4.SetWindowText(_T(""));m_w3.SetWindowText(_T("")); m_w1.SetWindowText(_T("ை")); m_w2.SetWindowText(_T("ஐ"));//m_wsup.SetWindowText(_T("W"));
   m_e4.SetWindowText(_T(""));m_e3.SetWindowText(_T("")); m_e1.SetWindowText(_T("ா")); m_e2.SetWindowText(_T("ஆ"));
   m_r4.SetWindowText(_T(""));m_r3.SetWindowText(_T("")); m_r1.SetWindowText(_T("ீ")); m_r2.SetWindowText(_T("ஈ"));
   m_t4.SetWindowText(_T(""));m_t3.SetWindowText(_T("")); m_t1.SetWindowText(_T("ூ")); m_t2.SetWindowText(_T("ஊ"));
   m_y4.SetWindowText(_T(""));m_y3.SetWindowText(_T("")); m_y1.SetWindowText(_T("ப")); m_y2.SetWindowText(_T("ப"));
   m_u4.SetWindowText(_T(""));m_u3.SetWindowText(_T("")); m_u1.SetWindowText(_T("ஹ")); m_u2.SetWindowText(_T("ங"));
   m_i4.SetWindowText(_T(""));m_i3.SetWindowText(_T("")); m_i1.SetWindowText(_T("க")); m_i2.SetWindowText(_T("க"));
   m_o4.SetWindowText(_T(""));m_o3.SetWindowText(_T("")); m_o1.SetWindowText(_T("த")); m_o2.SetWindowText(_T("த"));
   m_p4.SetWindowText(_T(""));m_p3.SetWindowText(_T("")); m_p1.SetWindowText(_T("ஜ")); m_p2.SetWindowText(_T("ச"));
   m_lsqbrkt4.SetWindowText(_T(""));m_lsqbrkt3.SetWindowText(_T("")); m_lsqbrkt1.SetWindowText(_T("ட")); m_lsqbrkt2.SetWindowText(_T("ட"));
   m_rsqbrkt4.SetWindowText(_T(""));m_rsqbrkt3.SetWindowText(_T(""));m_rsqbrkt1.SetWindowText(_T("ஞ")); m_rsqbrkt2.SetWindowText(_T(""));
   m_a4.SetWindowText(_T(""));m_a3.SetWindowText(_T("")); m_a1.SetWindowText(_T("ோ")); m_a2.SetWindowText(_T("ஓ"));
   m_s4.SetWindowText(_T(""));m_s3.SetWindowText(_T("")); m_s1.SetWindowText(_T("ே")); m_s2.SetWindowText(_T("ஏ"));
   m_d4.SetWindowText(_T(""));m_d3.SetWindowText(_T("")); m_d1.SetWindowText(_T("்")); m_d2.SetWindowText(_T("அ"));
   m_f4.SetWindowText(_T(""));m_f3.SetWindowText(_T("")); m_f1.SetWindowText(_T("ி")); m_f2.SetWindowText(_T("இ"));
   m_g4.SetWindowText(_T(""));m_g3.SetWindowText(_T("")); m_g1.SetWindowText(_T("ு")); m_g2.SetWindowText(_T("உ"));
   m_h4.SetWindowText(_T(""));m_h3.SetWindowText(_T(""));m_h1.SetWindowText(_T("ப")); m_h2.SetWindowText(_T("ப"));
   m_j4.SetWindowText(_T(""));m_j3.SetWindowText(_T("")); m_j1.SetWindowText(_T("ர")); m_j2.SetWindowText(_T("ற"));
   m_k4.SetWindowText(_T(""));m_k3.SetWindowText(_T("")); m_k1.SetWindowText(_T("க")); m_k2.SetWindowText(_T("க"));
   m_l4.SetWindowText(_T(""));m_l3.SetWindowText(_T("")); m_l1.SetWindowText(_T("த")); m_l2.SetWindowText(_T("த"));
   m_semicolon4.SetWindowText(_T(""));m_semicolon3.SetWindowText(_T("")); m_semicolon1.SetWindowText(_T("ச")); m_semicolon2.SetWindowText(_T("ச"));
   m_apos4.SetWindowText(_T(""));m_apos3.SetWindowText(_T("")); m_apos1.SetWindowText(_T("ட")); m_apos2.SetWindowText(_T("ட"));
   m_hash4.SetWindowText(_T(""));m_hash3.SetWindowText(_T(""));m_hash1.SetWindowText(_T("")); m_hash2.SetWindowText(_T(""));
   m_bslash4.SetWindowText(_T(""));m_bslash3.SetWindowText(_T(""));m_bslash1.SetWindowText(_T("")); m_bslash2.SetWindowText(_T(""));
   m_z4.SetWindowText(_T(""));m_z3.SetWindowText(_T("")); m_z1.SetWindowText(_T("ெ")); m_z2.SetWindowText(_T("எ"));
   m_x4.SetWindowText(_T(""));m_x3.SetWindowText(_T("")); m_x1.SetWindowText(_T("")); m_x2.SetWindowText(_T(""));
   m_c4.SetWindowText(_T(""));m_c3.SetWindowText(_T("")); m_c1.SetWindowText(_T("ம")); m_c2.SetWindowText(_T("ண"));
   m_v4.SetWindowText(_T(""));m_v3.SetWindowText(_T("")); m_v1.SetWindowText(_T("ந")); m_v2.SetWindowText(_T("ன"));
   m_b4.SetWindowText(_T(""));m_b3.SetWindowText(_T("")); m_b1.SetWindowText(_T("வ")); m_b2.SetWindowText(_T("ழ"));
   m_n4.SetWindowText(_T(""));m_n3.SetWindowText(_T(""));m_n1.SetWindowText(_T("ல")); m_n2.SetWindowText(_T("ள"));
   m_m4.SetWindowText(_T(""));m_m3.SetWindowText(_T("")); m_m1.SetWindowText(_T("ஸ")); m_m2.SetWindowText(_T("ஷ"));
   m_comma4.SetWindowText(_T(""));m_comma3.SetWindowText(_T("")); m_comma1.SetWindowText(_T(",")); m_comma2.SetWindowText(_T("ஷ"));
   m_fstop4.SetWindowText(_T(""));m_fstop3.SetWindowText(_T("")); m_fstop1.SetWindowText(_T(".")); m_fstop2.SetWindowText(_T("ஸ்ரீ"));
   m_fslash4.SetWindowText(_T(""));m_fslash3.SetWindowText(_T("")); m_fslash1.SetWindowText(_T("ய")); m_fslash2.SetWindowText(_T("ய")); 
}

void Keyboard::SetPunjabiText()
{
	CString title; title+=m_parent->m_langs[m_curLang]; title+=" Keyboard - ";
	title+=m_parent->m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

	m_bar4.SetWindowText(_T(""));m_bar3.SetWindowText(_T("")); m_bar1.SetWindowText(_T("")); m_bar2.SetWindowText(_T("੍ਹ"));
   m_14.SetWindowText(_T(""));m_13.SetWindowText(_T("੧")); m_11.SetWindowText(_T("1")); m_12.SetWindowText(_T("੍ਵ"));
   m_24.SetWindowText(_T(""));m_23.SetWindowText(_T("੨")); m_21.SetWindowText(_T("2")); m_22.SetWindowText(_T("੍ਯ"));
   m_34.SetWindowText(_T(""));m_33.SetWindowText(_T("੩")); m_31.SetWindowText(_T("3")); m_32.SetWindowText(_T("੍ਰ"));
   m_44.SetWindowText(_T(""));m_43.SetWindowText(_T("੪")); m_41.SetWindowText(_T("4")); m_42.SetWindowText(_T("ੱ"));
   m_54.SetWindowText(_T(""));m_53.SetWindowText(_T("੫")); m_51.SetWindowText(_T("5")); m_52.SetWindowText(_T(""));
   m_64.SetWindowText(_T(""));m_63.SetWindowText(_T("੬")); m_61.SetWindowText(_T("6")); m_62.SetWindowText(_T(""));
   m_74.SetWindowText(_T(""));m_73.SetWindowText(_T("੭")); m_71.SetWindowText(_T("7")); m_72.SetWindowText(_T(""));
   m_84.SetWindowText(_T(""));m_83.SetWindowText(_T("੮")); m_81.SetWindowText(_T("8")); m_82.SetWindowText(_T(""));
   m_94.SetWindowText(_T(""));m_93.SetWindowText(_T("੯")); m_91.SetWindowText(_T("9")); m_92.SetWindowText(_T("("));
   m_04.SetWindowText(_T(""));m_03.SetWindowText(_T("੦")); m_01.SetWindowText(_T("0")); m_02.SetWindowText(_T(")"));
   m_undscr4.SetWindowText(_T(""));m_undscr3.SetWindowText(_T("")); m_undscr1.SetWindowText(_T("-")); m_undscr2.SetWindowText(_T(""));
   m_eq4.SetWindowText(_T(""));m_eq3.SetWindowText(_T("")); m_eq1.SetWindowText(_T("")); m_eq2.SetWindowText(_T(""));
   m_q4.SetWindowText(_T(""));m_q3.SetWindowText(_T("")); m_q1.SetWindowText(_T("ੌ")); m_q2.SetWindowText(_T("ਔ"));
   m_w4.SetWindowText(_T(""));m_w3.SetWindowText(_T("")); m_w1.SetWindowText(_T("ੈ")); m_w2.SetWindowText(_T("ਐ"));//m_wsup.SetWindowText(_T("W"));
   m_e4.SetWindowText(_T(""));m_e3.SetWindowText(_T("")); m_e1.SetWindowText(_T("ਾ")); m_e2.SetWindowText(_T("ਆ"));
   m_r4.SetWindowText(_T(""));m_r3.SetWindowText(_T("")); m_r1.SetWindowText(_T("ੀ")); m_r2.SetWindowText(_T("ਈ"));
   m_t4.SetWindowText(_T(""));m_t3.SetWindowText(_T("")); m_t1.SetWindowText(_T("ੂ")); m_t2.SetWindowText(_T("ਊ"));
   m_y4.SetWindowText(_T(""));m_y3.SetWindowText(_T("")); m_y1.SetWindowText(_T("ਬ")); m_y2.SetWindowText(_T("ਭ"));
   m_u4.SetWindowText(_T(""));m_u3.SetWindowText(_T("")); m_u1.SetWindowText(_T("ਹ")); m_u2.SetWindowText(_T("ਙ"));
   m_i4.SetWindowText(_T(""));m_i3.SetWindowText(_T("ਗ਼"));m_i1.SetWindowText(_T("ਗ")); m_i2.SetWindowText(_T("ਘ"));
   m_o4.SetWindowText(_T(""));m_o3.SetWindowText(_T(""));m_o1.SetWindowText(_T("ਦ")); m_o2.SetWindowText(_T("ਧ"));
   m_p4.SetWindowText(_T(""));m_p3.SetWindowText(_T("ਜ਼"));m_p1.SetWindowText(_T("ਜ")); m_p2.SetWindowText(_T("ਝ"));
   m_lsqbrkt4.SetWindowText(_T(""));m_lsqbrkt3.SetWindowText(_T("ੜ")); m_lsqbrkt1.SetWindowText(_T("ਡ")); m_lsqbrkt2.SetWindowText(_T("ਢ"));
   m_rsqbrkt4.SetWindowText(_T(""));m_rsqbrkt3.SetWindowText(_T("")); m_rsqbrkt1.SetWindowText(_T("਼")); m_rsqbrkt2.SetWindowText(_T("ਞ"));
   m_a4.SetWindowText(_T(""));m_a3.SetWindowText(_T("")); m_a1.SetWindowText(_T("ੋ")); m_a2.SetWindowText(_T("ਓ"));
   m_s4.SetWindowText(_T(""));m_s3.SetWindowText(_T("")); m_s1.SetWindowText(_T("ੇ")); m_s2.SetWindowText(_T("ਏ"));
   m_d4.SetWindowText(_T(""));m_d3.SetWindowText(_T("")); m_d1.SetWindowText(_T("੍")); m_d2.SetWindowText(_T("ਅ"));
   m_f4.SetWindowText(_T(""));m_f3.SetWindowText(_T("")); m_f1.SetWindowText(_T("ਿ")); m_f2.SetWindowText(_T("ਇ"));
   m_g4.SetWindowText(_T(""));m_g3.SetWindowText(_T("")); m_g1.SetWindowText(_T("ੁ")); m_g2.SetWindowText(_T("ਉ"));
   m_h4.SetWindowText(_T(""));m_h3.SetWindowText(_T("ਫ਼")); m_h1.SetWindowText(_T("ਪ")); m_h2.SetWindowText(_T("ਫ"));
   m_j4.SetWindowText(_T(""));m_j3.SetWindowText(_T("")); m_j1.SetWindowText(_T("ਰ")); m_j2.SetWindowText(_T(""));
   m_k4.SetWindowText(_T(""));m_k3.SetWindowText(_T("ਖ਼")); m_k1.SetWindowText(_T("ਕ")); m_k2.SetWindowText(_T("ਖ"));
   m_l4.SetWindowText(_T(""));m_l3.SetWindowText(_T("")); m_l1.SetWindowText(_T("ਤ")); m_l2.SetWindowText(_T("ਥ"));
   m_semicolon4.SetWindowText(_T(""));m_semicolon3.SetWindowText(_T("")); m_semicolon1.SetWindowText(_T("ਚ")); m_semicolon2.SetWindowText(_T("ਛ"));
   m_apos4.SetWindowText(_T(""));m_apos3.SetWindowText(_T("")); m_apos1.SetWindowText(_T("ਟ")); m_apos2.SetWindowText(_T("ਠ"));
   m_hash4.SetWindowText(_T(""));m_hash3.SetWindowText(_T("")); m_hash1.SetWindowText(_T("")); m_hash2.SetWindowText(_T(""));
   m_bslash4.SetWindowText(_T(""));m_bslash3.SetWindowText(_T("")); m_bslash1.SetWindowText(_T("")); m_bslash2.SetWindowText(_T(""));
   m_z4.SetWindowText(_T(""));m_z3.SetWindowText(_T("")); m_z1.SetWindowText(_T("")); m_z2.SetWindowText(_T(""));
   m_x4.SetWindowText(_T("ੴ"));m_x3.SetWindowText(_T("")); m_x1.SetWindowText(_T("ੰ")); m_x2.SetWindowText(_T("ਂ"));
   m_c4.SetWindowText(_T(""));m_c3.SetWindowText(_T(""));m_c1.SetWindowText(_T("ਮ")); m_c2.SetWindowText(_T("ਣ"));
   m_v4.SetWindowText(_T(""));m_v3.SetWindowText(_T("")); m_v1.SetWindowText(_T("ਨ")); m_v2.SetWindowText(_T(""));
   m_b4.SetWindowText(_T(""));m_b3.SetWindowText(_T("ੳ")); m_b1.SetWindowText(_T("ਵ")); m_b2.SetWindowText(_T("ੲ"));
   m_n4.SetWindowText(_T(""));m_n3.SetWindowText(_T("")); m_n1.SetWindowText(_T("ਲ")); m_n2.SetWindowText(_T("ਲ਼"));
   m_m4.SetWindowText(_T(""));m_m3.SetWindowText(_T("")); m_m1.SetWindowText(_T("ਸ")); m_m2.SetWindowText(_T("ਸ਼"));
   m_comma4.SetWindowText(_T(""));m_comma3.SetWindowText(_T("")); m_comma1.SetWindowText(_T(",")); m_comma2.SetWindowText(_T(""));
   m_fstop4.SetWindowText(_T(""));m_fstop3.SetWindowText(_T("॥")); m_fstop1.SetWindowText(_T(".")); m_fstop2.SetWindowText(_T("।"));
   m_fslash4.SetWindowText(_T(""));m_fslash3.SetWindowText(_T("")); m_fslash1.SetWindowText(_T("ਯ")); m_fslash2.SetWindowText(_T("")); 
}

void Keyboard::SetUrduText()
{
	CString title; title+=m_parent->m_langs[m_curLang]; title+=" Keyboard - ";
	title+=m_parent->m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

	 m_bar4.SetWindowText(_T(""));m_bar3.SetWindowText(_T(""));m_bar1.SetWindowText(_T("`")); m_bar2.SetWindowText(_T("~"));
   m_14.SetWindowText(_T(""));m_13.SetWindowText(_T("")); m_11.SetWindowText(_T("1")); m_12.SetWindowText(_T("!"));
   m_24.SetWindowText(_T(""));m_23.SetWindowText(_T("")); m_21.SetWindowText(_T("2")); m_22.SetWindowText(_T("@"));
   m_34.SetWindowText(_T(""));m_33.SetWindowText(_T("")); m_31.SetWindowText(_T("3")); m_32.SetWindowText(_T("£"));
   m_44.SetWindowText(_T(""));m_43.SetWindowText(_T(""));m_41.SetWindowText(_T("4")); m_42.SetWindowText(_T("$"));
   m_54.SetWindowText(_T(""));m_53.SetWindowText(_T(""));m_51.SetWindowText(_T("5")); m_52.SetWindowText(_T("%"));
   m_64.SetWindowText(_T(""));m_63.SetWindowText(_T("")); m_61.SetWindowText(_T("6")); m_62.SetWindowText(_T("^"));
   m_74.SetWindowText(_T(""));m_73.SetWindowText(_T("")); m_71.SetWindowText(_T("7")); m_72.SetWindowText(_T("&"));
   m_84.SetWindowText(_T(""));m_83.SetWindowText(_T("")); m_81.SetWindowText(_T("8")); m_82.SetWindowText(_T("*"));
   m_94.SetWindowText(_T(""));m_93.SetWindowText(_T("")); m_91.SetWindowText(_T("9")); m_92.SetWindowText(_T("("));
   m_04.SetWindowText(_T(""));m_03.SetWindowText(_T(""));m_01.SetWindowText(_T("0")); m_02.SetWindowText(_T(")"));
   m_undscr4.SetWindowText(_T(""));m_undscr3.SetWindowText(_T("")); m_undscr1.SetWindowText(_T("-")); m_undscr2.SetWindowText(_T("_"));
   m_eq4.SetWindowText(_T(""));m_eq3.SetWindowText(_T("")); m_eq1.SetWindowText(_T("=")); m_eq2.SetWindowText(_T("+"));
   m_q4.SetWindowText(_T(""));m_q3.SetWindowText(_T("")); m_q1.SetWindowText(_T("ط")); m_q2.SetWindowText(_T("ظ"));
   m_w4.SetWindowText(_T(""));m_w3.SetWindowText(_T("")); m_w1.SetWindowText(_T("ص")); m_w2.SetWindowText(_T("ض"));//m_wsup.SetWindowText(_T("W"));
   m_e4.SetWindowText(_T(""));m_e3.SetWindowText(_T(""));m_e1.SetWindowText(_T("ھ")); m_e2.SetWindowText(_T("ذ"));
   m_r4.SetWindowText(_T(""));m_r3.SetWindowText(_T(""));m_r1.SetWindowText(_T("د")); m_r2.SetWindowText(_T("ڈ"));
   m_t4.SetWindowText(_T(""));m_t3.SetWindowText(_T("")); m_t1.SetWindowText(_T("ٹ")); m_t2.SetWindowText(_T("ث"));
   m_y4.SetWindowText(_T(""));m_y3.SetWindowText(_T("")); m_y1.SetWindowText(_T("پ")); m_y2.SetWindowText(_T("ّّّّّّّپّ"));
   m_u4.SetWindowText(_T(""));m_u3.SetWindowText(_T("")); m_u1.SetWindowText(_T("ت")); m_u2.SetWindowText(_T("ۃ"));
   m_i4.SetWindowText(_T(""));m_i3.SetWindowText(_T("")); m_i1.SetWindowText(_T("ب")); m_i2.SetWindowText(_T("ـ"));
   m_o4.SetWindowText(_T(""));m_o3.SetWindowText(_T("")); m_o1.SetWindowText(_T("ج")); m_o2.SetWindowText(_T("چ"));
   m_p4.SetWindowText(_T(""));m_p3.SetWindowText(_T("")); m_p1.SetWindowText(_T("ح")); m_p2.SetWindowText(_T("خ"));
   m_lsqbrkt4.SetWindowText(_T(""));m_lsqbrkt3.SetWindowText(_T(""));m_lsqbrkt1.SetWindowText(_T("[")); m_lsqbrkt2.SetWindowText(_T("{"));
   m_rsqbrkt4.SetWindowText(_T(""));m_rsqbrkt3.SetWindowText(_T("")); m_rsqbrkt1.SetWindowText(_T("]")); m_rsqbrkt2.SetWindowText(_T("}"));
   m_a4.SetWindowText(_T(""));m_a3.SetWindowText(_T("")); m_a1.SetWindowText(_T("م")); m_a2.SetWindowText(_T("ژ"));
   m_s4.SetWindowText(_T(""));m_s3.SetWindowText(_T("")); m_s1.SetWindowText(_T("و")); m_s2.SetWindowText(_T("ز"));
   m_d4.SetWindowText(_T(""));m_d3.SetWindowText(_T("")); m_d1.SetWindowText(_T("ر")); m_d2.SetWindowText(_T("ڑ"));
   m_f4.SetWindowText(_T(""));m_f3.SetWindowText(_T("")); m_f1.SetWindowText(_T("ن")); m_f2.SetWindowText(_T("ں"));
   m_g4.SetWindowText(_T(""));m_g3.SetWindowText(_T("")); m_g1.SetWindowText(_T("ل")); m_g2.SetWindowText(_T("ۂ"));
   m_h4.SetWindowText(_T(""));m_h3.SetWindowText(_T("")); m_h1.SetWindowText(_T("ہ")); m_h2.SetWindowText(_T("ء"));
   m_j4.SetWindowText(_T(""));m_j3.SetWindowText(_T("")); m_j1.SetWindowText(_T("ا")); m_j2.SetWindowText(_T("آ"));
   m_k4.SetWindowText(_T(""));m_k3.SetWindowText(_T("")); m_k1.SetWindowText(_T("ک")); m_k2.SetWindowText(_T("گ"));
   m_l4.SetWindowText(_T(""));m_l3.SetWindowText(_T("")); m_l1.SetWindowText(_T("ی")); m_l2.SetWindowText(_T("ي"));
   m_semicolon4.SetWindowText(_T(""));m_semicolon3.SetWindowText(_T("")); m_semicolon1.SetWindowText(_T("؛")); m_semicolon2.SetWindowText(_T(":"));
   m_apos4.SetWindowText(_T(""));m_apos3.SetWindowText(_T(""));m_apos1.SetWindowText(_T("'")); m_apos2.SetWindowText(_T("\""));
   m_hash4.SetWindowText(_T(""));m_hash3.SetWindowText(_T("")); m_hash1.SetWindowText(_T("\\")); m_hash2.SetWindowText(_T("|"));
   m_bslash4.SetWindowText(_T(""));m_bslash3.SetWindowText(_T("")); m_bslash1.SetWindowText(_T("\\")); m_bslash2.SetWindowText(_T("|"));
   m_z4.SetWindowText(_T(""));m_z3.SetWindowText(_T(""));m_z1.SetWindowText(_T("ق")); m_z2.SetWindowText(_T("‍‍ق‍"));
   m_x4.SetWindowText(_T(""));m_x3.SetWindowText(_T("")); m_x1.SetWindowText(_T("ف")); m_x2.SetWindowText(_T("‌ف‌"));
   m_c4.SetWindowText(_T(""));m_c3.SetWindowText(_T("")); m_c1.SetWindowText(_T("ے")); m_c2.SetWindowText(_T("ۓ"));
   m_v4.SetWindowText(_T(""));m_v3.SetWindowText(_T("")); m_v1.SetWindowText(_T("س")); m_v2.SetWindowText(_T("‎"));
   m_b4.SetWindowText(_T(""));m_b3.SetWindowText(_T("")); m_b1.SetWindowText(_T("ش")); m_b2.SetWindowText(_T("ؤ"));
   m_n4.SetWindowText(_T(""));m_n3.SetWindowText(_T("")); m_n1.SetWindowText(_T("غ")); m_n2.SetWindowText(_T("ئ"));
   m_m4.SetWindowText(_T(""));m_m3.SetWindowText(_T("")); m_m1.SetWindowText(_T("ع")); m_m2.SetWindowText(_T("‏"));
   m_comma4.SetWindowText(_T(""));m_comma3.SetWindowText(_T("")); m_comma1.SetWindowText(_T("،")); m_comma2.SetWindowText(_T(">"));
   m_fstop4.SetWindowText(_T(""));m_fstop3.SetWindowText(_T("")); m_fstop1.SetWindowText(_T("۔")); m_fstop2.SetWindowText(_T("<"));
   m_fslash4.SetWindowText(_T(""));m_fslash3.SetWindowText(_T("")); m_fslash1.SetWindowText(_T("/")); m_fslash2.SetWindowText(_T("؟"));
}

void Keyboard::SetMarathiText()
{
	CString title; title+=m_parent->m_langs[m_curLang]; title+=" Keyboard - ";
	title+=m_parent->m_langsInTheirLang[m_curLang];
	title+=_T(" - Talapatram - © Vorray Software");
	SetWindowText(title);

	m_bar4.SetWindowText(_T("~"));m_bar3.SetWindowText(_T("`"));m_bar1.SetWindowText(_T("")); m_bar2.SetWindowText(_T(""));
   m_14.SetWindowText(_T("!"));m_13.SetWindowText(_T("1")); m_11.SetWindowText(_T("१")); m_12.SetWindowText(_T("ऍ"));
   m_24.SetWindowText(_T("@"));m_23.SetWindowText(_T("2")); m_21.SetWindowText(_T("२")); m_22.SetWindowText(_T(""));
   m_34.SetWindowText(_T("#"));m_33.SetWindowText(_T("3"));m_31.SetWindowText(_T("३")); m_32.SetWindowText(_T("र"));
   m_44.SetWindowText(_T("$"));m_43.SetWindowText(_T("4"));m_41.SetWindowText(_T("४")); m_42.SetWindowText(_T("र्"));
   m_54.SetWindowText(_T("%"));m_53.SetWindowText(_T("5"));m_51.SetWindowText(_T("५")); m_52.SetWindowText(_T("ज्ञ"));
   m_64.SetWindowText(_T("^"));m_63.SetWindowText(_T("6")); m_61.SetWindowText(_T("६")); m_62.SetWindowText(_T("त्र"));
   m_74.SetWindowText(_T("&"));m_73.SetWindowText(_T("7")); m_71.SetWindowText(_T("७")); m_72.SetWindowText(_T("क्ष"));
   m_84.SetWindowText(_T("*"));m_83.SetWindowText(_T("8")); m_81.SetWindowText(_T("८")); m_82.SetWindowText(_T("श्र"));
   m_94.SetWindowText(_T("("));m_93.SetWindowText(_T("9")); m_91.SetWindowText(_T("९")); m_92.SetWindowText(_T("("));
   m_04.SetWindowText(_T(")"));m_03.SetWindowText(_T("0"));m_01.SetWindowText(_T("०")); m_02.SetWindowText(_T(")"));
   m_undscr4.SetWindowText(_T("_"));m_undscr3.SetWindowText(_T("-")); m_undscr1.SetWindowText(_T("-")); m_undscr2.SetWindowText(_T("ः"));
   m_eq4.SetWindowText(_T("+"));m_eq3.SetWindowText(_T("="));m_eq1.SetWindowText(_T("ृ")); m_eq2.SetWindowText(_T("ऋ"));
   m_q4.SetWindowText(_T(""));m_q3.SetWindowText(_T("")); m_q1.SetWindowText(_T("ौ")); m_q2.SetWindowText(_T("औ"));
   m_w4.SetWindowText(_T(""));m_w3.SetWindowText(_T("")); m_w1.SetWindowText(_T("ै")); m_w2.SetWindowText(_T("ऐ"));//m_wsup.SetWindowText(_T("W"));
   m_e4.SetWindowText(_T(""));m_e3.SetWindowText(_T("")); m_e1.SetWindowText(_T("ा")); m_e2.SetWindowText(_T("आ"));
   m_r4.SetWindowText(_T(""));m_r3.SetWindowText(_T("")); m_r1.SetWindowText(_T("ी")); m_r2.SetWindowText(_T("ई"));
   m_t4.SetWindowText(_T(""));m_t3.SetWindowText(_T("")); m_t1.SetWindowText(_T("ू")); m_t2.SetWindowText(_T("ऊ"));
   m_y4.SetWindowText(_T(""));m_y3.SetWindowText(_T("")); m_y1.SetWindowText(_T("ब")); m_y2.SetWindowText(_T("भ"));
   m_u4.SetWindowText(_T(""));m_u3.SetWindowText(_T("")); m_u1.SetWindowText(_T("ह")); m_u2.SetWindowText(_T("ङ"));
   m_i4.SetWindowText(_T(""));m_i3.SetWindowText(_T("")); m_i1.SetWindowText(_T("ग")); m_i2.SetWindowText(_T("घ"));
   m_o4.SetWindowText(_T(""));m_o3.SetWindowText(_T("")); m_o1.SetWindowText(_T("द")); m_o2.SetWindowText(_T("ध"));
   m_p4.SetWindowText(_T(""));m_p3.SetWindowText(_T("")); m_p1.SetWindowText(_T("ज")); m_p2.SetWindowText(_T("झ"));
   m_lsqbrkt4.SetWindowText(_T("{"));m_lsqbrkt3.SetWindowText(_T("[")); m_lsqbrkt1.SetWindowText(_T("ड")); m_lsqbrkt2.SetWindowText(_T("ढ"));
   m_rsqbrkt4.SetWindowText(_T("}"));m_rsqbrkt3.SetWindowText(_T("]")); m_rsqbrkt1.SetWindowText(_T("")); m_rsqbrkt2.SetWindowText(_T("ञ"));
   m_a4.SetWindowText(_T(""));m_a3.SetWindowText(_T("")); m_a1.SetWindowText(_T("ो")); m_a2.SetWindowText(_T("ओ"));
   m_s4.SetWindowText(_T(""));m_s3.SetWindowText(_T(""));m_s1.SetWindowText(_T("े")); m_s2.SetWindowText(_T("ए"));
   m_d4.SetWindowText(_T(""));m_d3.SetWindowText(_T("")); m_d1.SetWindowText(_T("्")); m_d2.SetWindowText(_T("अ"));
   m_f4.SetWindowText(_T(""));m_f3.SetWindowText(_T("")); m_f1.SetWindowText(_T("ि")); m_f2.SetWindowText(_T("इ"));
   m_g4.SetWindowText(_T(""));m_g3.SetWindowText(_T("")); m_g1.SetWindowText(_T("ु")); m_g2.SetWindowText(_T("उ"));
   m_h4.SetWindowText(_T(""));m_h3.SetWindowText(_T("")); m_h1.SetWindowText(_T("प")); m_h2.SetWindowText(_T("फ"));
   m_j4.SetWindowText(_T(""));m_j3.SetWindowText(_T("")); m_j1.SetWindowText(_T("र")); m_j2.SetWindowText(_T("ऱ"));
   m_k4.SetWindowText(_T(""));m_k3.SetWindowText(_T("")); m_k1.SetWindowText(_T("क")); m_k2.SetWindowText(_T("ख"));
   m_l4.SetWindowText(_T(""));m_l3.SetWindowText(_T(""));m_l1.SetWindowText(_T("त")); m_l2.SetWindowText(_T("थ"));
   m_semicolon4.SetWindowText(_T(":"));m_semicolon3.SetWindowText(_T(";"));m_semicolon1.SetWindowText(_T("च")); m_semicolon2.SetWindowText(_T("छ"));
   m_apos4.SetWindowText(_T("\""));m_apos3.SetWindowText(_T("'"));m_apos1.SetWindowText(_T("ट")); m_apos2.SetWindowText(_T("ठ"));
   m_hash4.SetWindowText(_T("|"));m_hash3.SetWindowText(_T("\\")); m_hash1.SetWindowText(_T("ॉ")); m_hash2.SetWindowText(_T("ऑ"));
   m_bslash4.SetWindowText(_T(""));m_bslash3.SetWindowText(_T("")); m_bslash1.SetWindowText(_T("ॉ")); m_bslash2.SetWindowText(_T("ऑ"));
   m_z4.SetWindowText(_T(""));m_z3.SetWindowText(_T("")); m_z1.SetWindowText(_T("")); m_z2.SetWindowText(_T(""));
   m_x4.SetWindowText(_T("ॐ"));m_x3.SetWindowText(_T("")); m_x1.SetWindowText(_T("ं")); m_x2.SetWindowText(_T("ँ"));
   m_c4.SetWindowText(_T(""));m_c3.SetWindowText(_T(""));m_c1.SetWindowText(_T("म")); m_c2.SetWindowText(_T("ण"));
   m_v4.SetWindowText(_T(""));m_v3.SetWindowText(_T(""));m_v1.SetWindowText(_T("न")); m_v2.SetWindowText(_T(""));
   m_b4.SetWindowText(_T("")); m_b3.SetWindowText(_T("")); m_b1.SetWindowText(_T("व")); m_b2.SetWindowText(_T(""));
   m_n4.SetWindowText(_T("")); m_n3.SetWindowText(_T("")); m_n1.SetWindowText(_T("ल"));m_n2.SetWindowText(_T("ळ"));
   m_m4.SetWindowText(_T(""));m_m3.SetWindowText(_T(""));m_m1.SetWindowText(_T("स")); m_m2.SetWindowText(_T("श"));
   m_comma4.SetWindowText(_T("<"));m_comma3.SetWindowText(_T(",")); m_comma1.SetWindowText(_T(",")); m_comma2.SetWindowText(_T("ष"));
   m_fstop4.SetWindowText(_T(">")); m_fstop3.SetWindowText(_T("."));m_fstop1.SetWindowText(_T(".")); m_fstop2.SetWindowText(_T("।"));
   m_fslash4.SetWindowText(_T("?"));m_fslash3.SetWindowText(_T("/")); m_fslash1.SetWindowText(_T("य")); m_fslash2.SetWindowText(_T("य़"));
}


BEGIN_MESSAGE_MAP(Keyboard, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_DESTROY()
	ON_WM_CLOSE()
   ON_WM_LBUTTONDOWN()
//   ON_WM_MOUSEMOVE()
   ON_BN_CLICKED(IDC_SPCBAR, OnBnClickedSpcbar)
END_MESSAGE_MAP()


// Keyboard message handlers

BOOL Keyboard::OnInitDialog()
{
	CDialog::OnInitDialog();

	if(m_curLang==4)	//hindi
	{
	   SetButtonsFonts(&m_parent->m_fontHindi);
	   SetSupButtonsFonts(&m_parent->m_supFont);
	   SetHindiText();
	}
	else if(m_curLang==10)	//telugu
	{
		SetButtonsFonts(&m_parent->m_fontTelugu);

		m_a1.SetFont(&m_parent->m_fontTelugu3);
		m_s2.SetFont(&m_parent->m_fontTelugu2);
		m_f1.SetFont(&m_parent->m_fontTelugu2);
		m_r1.SetFont(&m_parent->m_fontTelugu3);

		SetSupButtonsFonts(&m_parent->m_supFont);
		SetTeluguText();
	}
	else if(m_curLang==0)	//bengali
	{
		SetButtonsFonts(&m_parent->m_fontBengali);
		SetSupButtonsFonts(&m_parent->m_supFont);
		SetBengaliText();
	}
	else if(m_curLang==1)	//english
	{
		SetButtonsFonts(&m_parent->m_fontEnglish);
		SetSupButtonsFonts(&m_parent->m_supFont);
		SetEnglishText();
	}
	else if(m_curLang==11)	//urdu
	{
		SetButtonsFonts(&m_parent->m_fontUrdu);
		SetSupButtonsFonts(&m_parent->m_supFont);
		SetUrduText();
	}
	else if(m_curLang==9)	//tamil
	{
		SetButtonsFonts(&m_parent->m_fontTamil);
     
		m_q1.SetFont(&m_parent->m_fontTamil2);
		m_bar1.SetFont(&m_parent->m_fontTamil2);
		m_82.SetFont(&m_parent->m_fontTamil2);
		m_w1.SetFont(&m_parent->m_fontTamil2);
		m_q2.SetFont(&m_parent->m_fontTamil2);
		m_u1.SetFont(&m_parent->m_fontTamil2);
		m_a1.SetFont(&m_parent->m_fontTamil2);
	  
		SetSupButtonsFonts(&m_parent->m_supFont);
		SetTamilText();
	}
	else if(m_curLang==8)	//punjabi
	{
		SetButtonsFonts(&m_parent->m_fontPunjabi);
		
		m_r1.SetFont(&m_parent->m_fontPunjabi2);
		m_r2.SetFont(&m_parent->m_fontPunjabi2);
		m_t2.SetFont(&m_parent->m_fontPunjabi2);
		m_a1.SetFont(&m_parent->m_fontPunjabi2);
		m_a2.SetFont(&m_parent->m_fontPunjabi2);
		m_s1.SetFont(&m_parent->m_fontPunjabi2);
		m_s2.SetFont(&m_parent->m_fontPunjabi2);
		m_f1.SetFont(&m_parent->m_fontPunjabi2);
		m_f2.SetFont(&m_parent->m_fontPunjabi2);
		m_g2.SetFont(&m_parent->m_fontPunjabi2);
		m_x1.SetFont(&m_parent->m_fontPunjabi2);
		m_x2.SetFont(&m_parent->m_fontPunjabi2);
		m_x4.SetFont(&m_parent->m_fontPunjabi2);
		m_b3.SetFont(&m_parent->m_fontPunjabi2);
		m_63.SetFont(&m_parent->m_fontPunjabi2);
		m_93.SetFont(&m_parent->m_fontPunjabi2);
		
		SetSupButtonsFonts(&m_parent->m_supFont);
		SetPunjabiText();
	}
	if(m_curLang==7)	//marathi
	{
		SetButtonsFonts(&m_parent->m_fontMarathi);
		SetSupButtonsFonts(&m_parent->m_supFont);
		SetMarathiText();
	}
	else if(m_curLang==6)	//malayalam
	{
		SetButtonsFonts(&m_parent->m_fontMalayalam);

		m_q1.SetFont(&m_parent->m_fontMalayalam2);
		m_w1.SetFont(&m_parent->m_fontMalayalam2);
		m_w2.SetFont(&m_parent->m_fontMalayalam2);
		m_bar1.SetFont(&m_parent->m_fontMalayalam2);
		m_r2.SetFont(&m_parent->m_fontMalayalam2);
		m_a1.SetFont(&m_parent->m_fontMalayalam2);

	  SetSupButtonsFonts(&m_parent->m_supFont);
	  SetMalayalamText();
	}
	else if(m_curLang==5)	//kannada
	{
		SetButtonsFonts(&m_parent->m_fontKannada);
		
		m_bar1.SetFont(&m_parent->m_fontKannada2);
		m_32.SetFont(&m_parent->m_fontKannada2);
		m_a1.SetFont(&m_parent->m_fontKannada2);
	
		SetSupButtonsFonts(&m_parent->m_supFont);
		SetKannadaText();
	}
	else if(m_curLang==3)	//gujarati
	{
		SetButtonsFonts(&m_parent->m_fontGujarati);
		
		m_12.SetFont(&m_parent->m_fontGujarati2);
		m_22.SetFont(&m_parent->m_fontGujarati2);
		m_q1.SetFont(&m_parent->m_fontGujarati2);
		m_q2.SetFont(&m_parent->m_fontGujarati2);
		m_w1.SetFont(&m_parent->m_fontGujarati2);
		m_w2.SetFont(&m_parent->m_fontGujarati2);
		m_r1.SetFont(&m_parent->m_fontGujarati2);
		m_a1.SetFont(&m_parent->m_fontGujarati2);
		m_a2.SetFont(&m_parent->m_fontGujarati2);
		m_s1.SetFont(&m_parent->m_fontGujarati2);
		m_s2.SetFont(&m_parent->m_fontGujarati2);
		m_f1.SetFont(&m_parent->m_fontGujarati2);
		m_hash1.SetFont(&m_parent->m_fontGujarati2);
		m_hash2.SetFont(&m_parent->m_fontGujarati2);
		m_x1.SetFont(&m_parent->m_fontGujarati2);
      m_x2.SetFont(&m_parent->m_fontGujarati2);
      m_x4.SetFont(&m_parent->m_fontGujarati2);
      
		
		SetSupButtonsFonts(&m_parent->m_supFont);
		SetGujaratiText();
	}
	else if(m_curLang==2)	//farsi
	{
		SetButtonsFonts(&m_parent->m_fontFarsi);
		
		m_r2.SetFont(&m_parent->m_fontFarsi2);

		SetSupButtonsFonts(&m_parent->m_supFont);
		SetFarsiText();
	}

	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, TRUE);

	return TRUE; 
}

void Keyboard::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

HCURSOR Keyboard::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void Keyboard::OnClose()
{
	m_parent->m_keyboard_flg=false;

	CDialog::OnClose();
}

void Keyboard::OnLButtonDown(UINT nFlags, CPoint point)
{
   MessageBox(_T("Please type in the Editing Window!"), _T("Usability Error"), MB_OK);

   CDialog::OnLButtonDown(nFlags, point);
}

void Keyboard::OnBnClickedSpcbar()  //implement a tooltip to appear at cursor when it is moved on Keyboard dlg saying, "Please type in Editor. Key hits have no affect".
{
   MessageBox(_T("Please type in the Editor!"), _T("Usability Error"), MB_OK);
}

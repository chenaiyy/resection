// hfjhDlg.h : header file
//

#if !defined(AFX_HFJHDLG_H__A1BC734A_8317_49C6_BB5B_56AFB6993DBF__INCLUDED_)
#define AFX_HFJHDLG_H__A1BC734A_8317_49C6_BB5B_56AFB6993DBF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CHfjhDlg dialog

class CHfjhDlg : public CDialog
{
// Construction
public:
	CHfjhDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CHfjhDlg)
	enum { IDD = IDD_HFJH_DIALOG };
	double	x1;
	double	x2;
	double	x3;
	double	x4;
	double	xx1;
	double	xx2;
	double	xx3;
	double	xx4;
	double	y1;
	double	y2;
	double	y3;
	double	y4;
	double	yy1;
	double	yy2;
	double	yy3;
	double	yy4;
	double	zz1;
	double	zz2;
	double	zz3;
	double	zz4;
	double	m_kappa;
	double	m_omega;
	double	m_phi;
	double	m_Xs;
	double	m_Ys;
	double	m_Zs;
	double	m_R1;
	double	m_R2;
	double	m_R3;
	double	m_R4;
	double	m_R5;
	double	m_R6;
	double	m_R7;
	double	m_R8;
	double	m_R9;
	int		m_m;
	double	m_f;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHfjhDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CHfjhDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HFJHDLG_H__A1BC734A_8317_49C6_BB5B_56AFB6993DBF__INCLUDED_)

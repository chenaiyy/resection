// hfjh.h : main header file for the HFJH application
//

#if !defined(AFX_HFJH_H__1142B607_086F_47C6_90DD_1AABB1F55E3D__INCLUDED_)
#define AFX_HFJH_H__1142B607_086F_47C6_90DD_1AABB1F55E3D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CHfjhApp:
// See hfjh.cpp for the implementation of this class
//

class CHfjhApp : public CWinApp
{
public:
	CHfjhApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHfjhApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CHfjhApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HFJH_H__1142B607_086F_47C6_90DD_1AABB1F55E3D__INCLUDED_)

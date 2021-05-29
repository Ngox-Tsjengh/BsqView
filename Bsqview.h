// Bsqview.h : main header file for the BSQVIEW application
//

#if !defined(AFX_BSQVIEW_H__0D1C55E0_E6CF_4E31_B74E_3787A747861E__INCLUDED_)
#define AFX_BSQVIEW_H__0D1C55E0_E6CF_4E31_B74E_3787A747861E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CBsqviewApp:
// See Bsqview.cpp for the implementation of this class
//

class CBsqviewApp : public CWinApp
{
public:
	CBsqviewApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBsqviewApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CBsqviewApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BSQVIEW_H__0D1C55E0_E6CF_4E31_B74E_3787A747861E__INCLUDED_)

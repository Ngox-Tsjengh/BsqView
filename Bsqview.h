// BsqView.h : main header file for the BSQVIEW application
//

#if !defined(AFX_BSQVIEW_H__C3A7B815_158E_4556_9DD3_4420B4D47779__INCLUDED_)
#define AFX_BSQVIEW_H__C3A7B815_158E_4556_9DD3_4420B4D47779__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CBsqViewApp:
// See BsqView.cpp for the implementation of this class
//

class CBsqViewApp : public CWinApp
{
public:
	CBsqViewApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBsqViewApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CBsqViewApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BSQVIEW_H__C3A7B815_158E_4556_9DD3_4420B4D47779__INCLUDED_)

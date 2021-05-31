#if !defined(AFX_IMAGEINITIATE_H__546D2B23_BDD7_48D4_A194_7B3882223287__INCLUDED_)
#define AFX_IMAGEINITIATE_H__546D2B23_BDD7_48D4_A194_7B3882223287__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ImageInitiate.h : header file
//
//#include "ClassInformationDlg.h"
/////////////////////////////////////////////////////////////////////////////
// CImageInitiate dialog

class CImageInitiate : public CDialog
{
// Construction
public:
	int m_classnum;

	CImageInitiate(CWnd* pParent = NULL);   // standard constructor
	int DataResult;
	int FileResult;
//	CClassInformationDlg dlg1;

// Dialog Data
	//{{AFX_DATA(CImageInitiate)
	enum { IDD = IDD_IMAGEINITIATE };
	int		m_samples;
	int		m_lines;
	int		m_bands;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImageInitiate)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CImageInitiate)
	virtual BOOL OnInitDialog();
	virtual void OnOK();

	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMAGEINITIATE_H__546D2B23_BDD7_48D4_A194_7B3882223287__INCLUDED_)

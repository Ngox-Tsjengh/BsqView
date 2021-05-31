#if !defined(AFX_CLASSSELECTDLG_H__78BEE865_4110_4286_9008_7342B8DB5F29__INCLUDED_)
#define AFX_CLASSSELECTDLG_H__78BEE865_4110_4286_9008_7342B8DB5F29__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ClassSelectDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CClassSelectDlg dialog

class CClassSelectDlg : public CDialog
{
// Construction
public:
	CClassSelectDlg(CWnd* pParent = NULL);   // standard constructor
	CStringArray ClassesList;
	int number;
	int rgIndex[40];
	bool select;

// Dialog Data
	//{{AFX_DATA(CClassSelectDlg)
	enum { IDD = IDD_CLASSES_SELECTION };
	CListBox	m_ClassesList;
	CString	m_ClassesNumber;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClassSelectDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CClassSelectDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSelchangeClassesList();
	afx_msg void OnSelectAll();
	afx_msg void OnClearAll();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLASSSELECTDLG_H__78BEE865_4110_4286_9008_7342B8DB5F29__INCLUDED_)

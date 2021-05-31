
#if !defined(AFX_SELBANDSDLG_H__CE079CF3_B2BB_4465_ABFE_291327018D31__INCLUDED_)
#define AFX_SELBANDSDLG_H__CE079CF3_B2BB_4465_ABFE_291327018D31__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SelBandsDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSelBandsDlg dialog

class CSelBandsDlg : public CDialog
{
// Construction
public:
	CSelBandsDlg(CWnd* pParent = NULL);   // standard constructor
    CStringArray m_sarrBands;
	
// Dialog Data
	//{{AFX_DATA(CSelBandsDlg)
	enum { IDD = IDD_SELBANDSDLG };
	CListBox	m_list;
	CString	m_static_b;
	CString	m_static_g;
	CString	m_static_r;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSelBandsDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSelBandsDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSelchangeList1();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SELBANDSDLG_H__CE079CF3_B2BB_4465_ABFE_291327018D31__INCLUDED_)

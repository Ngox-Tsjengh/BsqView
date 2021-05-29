// BsqviewDoc.h : interface of the CBsqviewDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BSQVIEWDOC_H__174DBB14_8CE0_4C69_9E6A_66070DFE764A__INCLUDED_)
#define AFX_BSQVIEWDOC_H__174DBB14_8CE0_4C69_9E6A_66070DFE764A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CBsqviewDoc : public CDocument
{
protected: // create from serialization only
	CBsqviewDoc();
	DECLARE_DYNCREATE(CBsqviewDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBsqviewDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBsqviewDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBsqviewDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BSQVIEWDOC_H__174DBB14_8CE0_4C69_9E6A_66070DFE764A__INCLUDED_)

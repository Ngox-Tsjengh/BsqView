// BsqViewDoc.h : interface of the CBsqViewDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BSQVIEWDOC_H__5BE10FA5_388F_4065_8EF5_307008BE8FD7__INCLUDED_)
#define AFX_BSQVIEWDOC_H__5BE10FA5_388F_4065_8EF5_307008BE8FD7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CBsqViewDoc : public CDocument
{
protected: // create from serialization only
	CBsqViewDoc();
	DECLARE_DYNCREATE(CBsqViewDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBsqViewDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBsqViewDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBsqViewDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BSQVIEWDOC_H__5BE10FA5_388F_4065_8EF5_307008BE8FD7__INCLUDED_)

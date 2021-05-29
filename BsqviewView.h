// BsqviewView.h : interface of the CBsqviewView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BSQVIEWVIEW_H__542BA2AE_64AB_41B5_ABC2_D131E2801B18__INCLUDED_)
#define AFX_BSQVIEWVIEW_H__542BA2AE_64AB_41B5_ABC2_D131E2801B18__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CBsqviewView : public CView
{
protected: // create from serialization only
	CBsqviewView();
	DECLARE_DYNCREATE(CBsqviewView)

// Attributes
public:
	CBsqviewDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBsqviewView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBsqviewView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBsqviewView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in BsqviewView.cpp
inline CBsqviewDoc* CBsqviewView::GetDocument()
   { return (CBsqviewDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BSQVIEWVIEW_H__542BA2AE_64AB_41B5_ABC2_D131E2801B18__INCLUDED_)

// BsqviewView.cpp : implementation of the CBsqviewView class
//

#include "stdafx.h"
#include "Bsqview.h"

#include "BsqviewDoc.h"
#include "BsqviewView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBsqviewView

IMPLEMENT_DYNCREATE(CBsqviewView, CView)

BEGIN_MESSAGE_MAP(CBsqviewView, CView)
	//{{AFX_MSG_MAP(CBsqviewView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBsqviewView construction/destruction

CBsqviewView::CBsqviewView()
{
	// TODO: add construction code here

}

CBsqviewView::~CBsqviewView()
{
}

BOOL CBsqviewView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CBsqviewView drawing

void CBsqviewView::OnDraw(CDC* pDC)
{
	CBsqviewDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CBsqviewView printing

BOOL CBsqviewView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CBsqviewView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CBsqviewView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CBsqviewView diagnostics

#ifdef _DEBUG
void CBsqviewView::AssertValid() const
{
	CView::AssertValid();
}

void CBsqviewView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBsqviewDoc* CBsqviewView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBsqviewDoc)));
	return (CBsqviewDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBsqviewView message handlers

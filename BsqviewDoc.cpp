// BsqviewDoc.cpp : implementation of the CBsqviewDoc class
//

#include "stdafx.h"
#include "Bsqview.h"

#include "BsqviewDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBsqviewDoc

IMPLEMENT_DYNCREATE(CBsqviewDoc, CDocument)

BEGIN_MESSAGE_MAP(CBsqviewDoc, CDocument)
	//{{AFX_MSG_MAP(CBsqviewDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBsqviewDoc construction/destruction

CBsqviewDoc::CBsqviewDoc()
{
	// TODO: add one-time construction code here

}

CBsqviewDoc::~CBsqviewDoc()
{
}

BOOL CBsqviewDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CBsqviewDoc serialization

void CBsqviewDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CBsqviewDoc diagnostics

#ifdef _DEBUG
void CBsqviewDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBsqviewDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBsqviewDoc commands

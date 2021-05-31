// BsqViewDoc.cpp : implementation of the CBsqViewDoc class
//

#include "stdafx.h"
#include "BsqView.h"

#include "BsqViewDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBsqViewDoc

IMPLEMENT_DYNCREATE(CBsqViewDoc, CDocument)

BEGIN_MESSAGE_MAP(CBsqViewDoc, CDocument)
	//{{AFX_MSG_MAP(CBsqViewDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBsqViewDoc construction/destruction

CBsqViewDoc::CBsqViewDoc()
{
	// TODO: add one-time construction code here

}

CBsqViewDoc::~CBsqViewDoc()
{
}

BOOL CBsqViewDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CBsqViewDoc serialization

void CBsqViewDoc::Serialize(CArchive& ar)
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
// CBsqViewDoc diagnostics

#ifdef _DEBUG
void CBsqViewDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBsqViewDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBsqViewDoc commands

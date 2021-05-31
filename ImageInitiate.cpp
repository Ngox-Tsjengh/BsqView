// ImageInitiate.cpp : implementation file
//

#include "stdafx.h"
#include "BsqView.h"
#include "ImageInitiate.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CImageInitiate dialog


CImageInitiate::CImageInitiate(CWnd* pParent /*=NULL*/)
	: CDialog(CImageInitiate::IDD, pParent)
{

	//{{AFX_DATA_INIT(CImageInitiate)
	m_samples = 0;
	m_lines = 0;
	m_bands = 0;
	//}}AFX_DATA_INIT
	m_classnum = 0;

}


void CImageInitiate::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CImageInitiate)
	DDX_Text(pDX, IDC_EDIT1, m_samples);
	DDX_Text(pDX, IDC_EDIT2, m_lines);
	DDX_Text(pDX, IDC_EDIT3, m_bands);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CImageInitiate, CDialog)
	//{{AFX_MSG_MAP(CImageInitiate)

	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CImageInitiate message handlers

BOOL CImageInitiate::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	CheckRadioButton(IDC_BYTE,IDC_INT,IDC_BYTE);
	CheckRadioButton(IDC_STANDARD_IMAGE,IDC_TRACE_IMAGE,IDC_STANDARD_IMAGE);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CImageInitiate::OnOK() 
{
	// TODO: Add extra validation here

	DataResult=GetCheckedRadioButton(IDC_BYTE,IDC_INT);
	FileResult=GetCheckedRadioButton(IDC_STANDARD_IMAGE,IDC_TRACE_IMAGE);
    CDialog::OnOK();
}



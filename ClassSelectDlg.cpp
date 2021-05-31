// ClassSelectDlg.cpp : implementation file
//

#include "stdafx.h"
#include "bsqview.h"
#include "ClassSelectDlg.h"

#include "mainfrm.h"
#include "BsqViewView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CClassSelectDlg dialog


CClassSelectDlg::CClassSelectDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CClassSelectDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CClassSelectDlg)
	m_ClassesNumber = _T("");
	//}}AFX_DATA_INIT
	for(int i=0;i<40;i++)
	{
		rgIndex[i]=0;
	}
	select=false;
}


void CClassSelectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CClassSelectDlg)
	DDX_Control(pDX, IDC_CLASSES_LIST, m_ClassesList);
	DDX_Text(pDX, IDC_CLASSES_NUMBER, m_ClassesNumber);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CClassSelectDlg, CDialog)
	//{{AFX_MSG_MAP(CClassSelectDlg)
	ON_LBN_SELCHANGE(IDC_CLASSES_LIST, OnSelchangeClassesList)
	ON_BN_CLICKED(IDC_SELECT_ALL, OnSelectAll)
	ON_BN_CLICKED(IDC_CLEAR_ALL, OnClearAll)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CClassSelectDlg message handlers

BOOL CClassSelectDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	UpdateData(true);//数据从控件向相关联的成员变量复制
	for(int i=0;i<ClassesList.GetSize();i++)
	{
		m_ClassesList.AddString(ClassesList[i]);
	}
	UpdateData(false);//数据从相关联的变量向控件传输
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CClassSelectDlg::OnSelchangeClassesList() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	CString num;
	number=m_ClassesList.GetSelCount();
	num.Format("%d",number);
	num.TrimLeft();
	m_ClassesNumber=num;
	m_ClassesList.GetSelItems(number,rgIndex);
	UpdateData(false);
	
}

void CClassSelectDlg::OnSelectAll() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	CString String;
	int number;
	
	CMainFrame* pframe = (CMainFrame *)AfxGetApp()->GetMainWnd();
	CMDIChildWnd* pChildWnd = pframe->MDIGetActive();
	CBsqViewView* pView = (CBsqViewView *) pChildWnd->GetActiveView();
	
	select=true;
	m_ClassesList.SetSel(-1,TRUE);
	number=pView->Timer+1;
	String.Format("%d",number);
	String.TrimLeft();
	m_ClassesNumber=String;
	UpdateData(false);
}

void CClassSelectDlg::OnClearAll() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	
	m_ClassesList.SetSel(-1,FALSE);
	m_ClassesNumber="0";
	select=false;
	
	UpdateData(false);
}

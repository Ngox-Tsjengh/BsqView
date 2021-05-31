// SelBandsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "BsqView.h"
#include "SelBandsDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSelBandsDlg dialog


CSelBandsDlg::CSelBandsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSelBandsDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSelBandsDlg)
	m_static_b = _T("");
	m_static_g = _T("");
	m_static_r = _T("");
	//}}AFX_DATA_INIT
}


void CSelBandsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSelBandsDlg)
	DDX_Control(pDX, IDC_LIST1, m_list);
	DDX_Text(pDX, IDC_STATIC_B, m_static_b);
	DDV_MaxChars(pDX, m_static_b, 50);
	DDX_Text(pDX, IDC_STATIC_G, m_static_g);
	DDV_MaxChars(pDX, m_static_g, 50);
	DDX_Text(pDX, IDC_STATIC_R, m_static_r);
	DDV_MaxChars(pDX, m_static_r, 50);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSelBandsDlg, CDialog)
	//{{AFX_MSG_MAP(CSelBandsDlg)
	ON_LBN_SELCHANGE(IDC_LIST1, OnSelchangeList1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSelBandsDlg message handlers

BOOL CSelBandsDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	CheckRadioButton(IDC_GREY,IDC_RGB,IDC_RGB);

	CheckRadioButton(IDC_R,IDC_B,IDC_R);
	for(int i = 0; i < m_sarrBands.GetSize(); i++)
	{
		m_list.AddString(m_sarrBands[i]);
	}
	UpdateData(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}


void CSelBandsDlg::OnSelchangeList1() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	int nIndex=m_list.GetCurSel();
	int result=GetCheckedRadioButton(IDC_R,IDC_B);
     
	CString str;
	if(result==IDC_R)
    {
		CheckRadioButton(IDC_R,IDC_B,IDC_G);
       	m_list.GetText(nIndex,str);
		str.TrimLeft();
	    m_static_r=str;
	}
	
	if(result==IDC_G)
    {
		CheckRadioButton(IDC_R,IDC_B,IDC_B);
       	m_list.GetText(nIndex,str);
		str.TrimLeft();
	    m_static_g=str;
	}	
	
	if(result==IDC_B)
    {
		CheckRadioButton(IDC_R,IDC_B,IDC_R);
       	m_list.GetText(nIndex,str);
		str.TrimLeft();
	    m_static_b=str;
	}

    UpdateData(FALSE);
	
}

void CSelBandsDlg::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}

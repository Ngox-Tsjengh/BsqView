// BigImageDlg.cpp : implementation file
//

#include "stdafx.h"
#include "BsqView.h"
#include "BigImageDlg.h"
#include "mainfrm.h"
#include "BsqViewView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBigImageDlg dialog


CBigImageDlg::CBigImageDlg(CWnd* pParent /*=NULL*/)
: CDialog(CBigImageDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBigImageDlg)
	// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	//将视图类的变量转化为此类的
	CMainFrame* pframe = (CMainFrame *)AfxGetApp()->GetMainWnd();
	CMDIChildWnd* pChildWnd = pframe->MDIGetActive();
	CBsqViewView* pView = (CBsqViewView *) pChildWnd->GetActiveView();
	
    memset(AverageGrey,0x00,sizeof(float)*240);
	Bands=pView->Bands;
	Width=pView->Width;
	Height=pView->Height;
	m_pathname=pView->m_pathname;
	HBig=pView->HBig;
	
	workmode=CommonMode;
	m_ldraw=FALSE;
	m_rdraw=FALSE;
	firstmouse_l=TRUE;
	firstmouse_r=TRUE;
	Areas=0;          
	
	for(int i=1;i<40;i++)
	{
		AreasBool[i]=true;
	}
	
	bChooseAreas = false;
	
	m_display=true;
	
}


void CBigImageDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBigImageDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBigImageDlg, CDialog)
	//{{AFX_MSG_MAP(CBigImageDlg)
	ON_WM_PAINT()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_RBUTTONDOWN()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDBLCLK()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBigImageDlg message handlers

void CBigImageDlg::OnPaint() 
{
	CPaintDC dc(this); // device context for painting

	// TODO: Add your message handler code here
	CWnd *pWnd = GetDlgItem(IDC_BIG_IMAGE);
	CDC *pDC = pWnd->GetDC();
	CRect conRect;

	//获得该控件的矩形区域
	::GetClientRect(pWnd->m_hWnd,conRect);
 
	pDC->SetViewportOrg(conRect.left,conRect.top);//设置窗口原点

	pWnd->Invalidate();
	pWnd->UpdateWindow();	
  
    CMainFrame* pframe = (CMainFrame *)AfxGetApp()->GetMainWnd();
    CMDIChildWnd* pChildWnd = pframe->MDIGetActive();
    CBsqViewView* pView = (CBsqViewView *) pChildWnd->GetActiveView();
	
	pView->pBigPiData=(LPSTR)(pView->lpbigshowbuf);
   
	//显示设备无关图到指定的坐标
	::SetDIBitsToDevice(pDC->m_hDC,0,0,pView->bgbi.biWidth,pView->bgbi.biHeight,0,0,
             0,pView->bgbi.biHeight,pView->pBigPiData,(BITMAPINFO *)&(pView->bgbi),DIB_RGB_COLORS);
	
}


void CBigImageDlg::PostNcDestroy() 
{
	// TODO: Add your specialized code here and/or call the base class
	delete this;
	CDialog::PostNcDestroy();
}

void CBigImageDlg::PreSubclassWindow() 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CDialog::PreSubclassWindow();
}

BOOL CBigImageDlg::PreCreateWindow(CREATESTRUCT& cs) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CDialog::PreCreateWindow(cs);
}



void CBigImageDlg::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CString str;
	CMainFrame* pFrame=(CMainFrame*)AfxGetApp()->m_pMainWnd;
	CStatusBar* pStatus=&pFrame->m_wndStatusBar;
	if(pStatus)
	{
		str.Format("X=%d",point.x);
		pStatus->SetPaneText(1,str);
		str.Format("Y=%d",point.y);
		pStatus->SetPaneText(2,str);
	}
	CDialog::OnMouseMove(nFlags, point);
}


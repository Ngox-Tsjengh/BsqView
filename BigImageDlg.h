#if !defined(AFX_BIGIMAGEDLG_H__A065F44F_D0FF_4349_A6CA_F7D4712F053E__INCLUDED_)
#define AFX_BIGIMAGEDLG_H__A065F44F_D0FF_4349_A6CA_F7D4712F053E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BigImageDlg.h : header file
//

//#include"SpectralLibraryDlg.h"

//#include "ColorSnapDlg.h"
/////////////////////////////////////////////////////////////////////////////
// CBigImageDlg dialog

class CBigImageDlg : public CDialog
{
// Construction
public:
    int WBig,HBig;           //对话框的高度和宽度
	bool m_display;			//是否显示颜色值信息
    CString m_pathname;
    int Bands,Width,Height;
	CBigImageDlg(CWnd* pParent = NULL);   // standard constructor
    BOOL m_ldraw;
	BOOL m_rdraw;
    BOOL firstmouse_l;
	BOOL firstmouse_r;

	BOOL bChooseAreas;

	CPoint OriginBoderPoint[40][10000];          //画图边界点
    int BoderPoints[40];						 //边界点个数
 
	int Areas,DelAreas;                                   //区域个数
   	float AverageGrey[240];
	

	float GrayValue[50][200];
    COLORREF Color[40];
	CString ColorString[40];
	bool AreasBool[40];
	
	enum WorkMode
	{
	  CommonMode,
	  DrawMode,
	  SpectralMode
	}workmode;


	unsigned char* pCurSpectralData;



//	CColorSnapDlg* m_pColorDlg;



// Dialog Data
	//{{AFX_DATA(CBigImageDlg)
	enum { IDD = IDD_BIG_IMAGE_DLG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBigImageDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void PostNcDestroy();
	virtual void PreSubclassWindow();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBigImageDlg)
	afx_msg void OnPaint();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BIGIMAGEDLG_H__A065F44F_D0FF_4349_A6CA_F7D4712F053E__INCLUDED_)

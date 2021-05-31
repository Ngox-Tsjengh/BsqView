// BsqViewView.h : interface of the CBsqViewView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BSQVIEWVIEW_H__CDC7327B_4265_4BE3_B96A_29873FDC84AC__INCLUDED_)
#define AFX_BSQVIEWVIEW_H__CDC7327B_4265_4BE3_B96A_29873FDC84AC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ImageInitiate.h"
#include "SelBandsDlg.h"
#include "BsqViewDoc.h"
#include "BigImageDlg.h"


class CBsqViewView : public CScrollView
{
protected: // create from serialization only
	CBsqViewView();
	DECLARE_DYNCREATE(CBsqViewView)

// Attributes
public:

	CString fListString[40];
	CString fBandsString[1000];
	CBigImageDlg *bigdlg;
	

	int ScanXPos,ScanYPos;   //新图像左下角坐标
	int WBig,HBig;           //大小图像的高度和宽度


	COLORREF ColorChange[41];
	BYTE lpshowbufR[400],lpshowbufG[400],lpshowbufB[400],lpshowbufS[400],lpshowbufL[400];

	int changethreshold;
	int ite;
	int clse;
	
	int CL;
	int CMC;
	double CMS;
	int CMN;
	int CITEA;
	int CK;
    int pixelcount[40];

    
	CBsqViewDoc* GetDocument();
	BITMAPINFOHEADER bi,bgbi;//建立头结构
	BITMAPINFO *pbi;//建立头指针
	
	LPSTR pData,pBigPiData,pBigPiDataHead,pRData,pGData,pBData;//图像数据指针

	HGLOBAL hData;//图像数据内存句柄
	int Width;
	int Height;
	int Bands;
	int red;
	int green;
	int blue;
	BYTE *lpbuf;
	BYTE *lpshowbuf,*lpbigshowbuf;

	
	long m_NewWidth,m_NewHeight;//图象新大小
   	CFile m_file;
	//文件对象变量


    COLORREF Color[40];
	CString ColorString[40];

	enum DataType
	{
	  ByteType = 1,
	  IntType = 2,
      FloatType = 4
	}dataType;


	float GrayValue[50][200];
	float Angle;

	
	CString m_filename;//设置文件名
	CString m_pathname;//文件路径
	CString header;//头文件名

	BOOL bByteData;
	BOOL bStandardImage;
	BOOL bClassificationImage;
	BOOL m_bOpenProDlg;
	BOOL m_bOpenFile;



	bool byteflag;
	int Timer;
	float PixelCount[40];		//用来统计类别信息
	long PixelTotal;			//统计所有的像素数目
	int m_ClassCount;
	bool m_ROI,m_ASC,m_SPE;
	bool m_fileopen;
	

	CImageInitiate Imageinfo;

// Operations
public:
	void BandsSelection();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBsqViewView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:

	int m_classnum;
	int classnumber;
	CString m_fileoutname;
	virtual ~CBsqViewView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBsqViewView)
	afx_msg void OnFileOpen();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnUpdateXY(CCmdUI* pCmdUI);
	afx_msg void OnNdvi();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in BsqViewView.cpp
inline CBsqViewDoc* CBsqViewView::GetDocument()
   { return (CBsqViewDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BSQVIEWVIEW_H__CDC7327B_4265_4BE3_B96A_29873FDC84AC__INCLUDED_)

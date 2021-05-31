// BandMath.cpp: implementation of the CBandMath class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "bsqview.h"
#include "BandMath.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CBandMath::CBandMath()
{

}

CBandMath::~CBandMath()
{

}

void CBandMath::NDVICal(CString m_pathname,int Bands,int Width,int Height)
{

	int fRed=3; 
	int fNearRed=5;

	float *NDVIWr = new float[Height*Width];
	char *Red         = new  char[Height*Width];
	char *NearRed     = new  char[Height*Width];

	CFile fReadFile,fWriteFile;
	//打开图像文件
	if(!fReadFile.Open(m_pathname,CFile::modeReadWrite))           
	{
		AfxMessageBox("不能打开所读文件!");  
		return;
	}    
	
	fReadFile.Seek((fRed-1)*Height*Width,CFile::begin);
	fReadFile.Read(Red,Height*Width);
	
	fReadFile.Seek((fNearRed-1)*Height*Width,CFile::begin);
	fReadFile.Read(NearRed,Height*Width);          
	
	for(int k=0;k<Height*Width;k++)
		NDVIWr[k]=((float)NearRed[k]-Red[k])/(NearRed[k]+Red[k]);

	//打开写入文件
	if(!fWriteFile.Open("ndvivalue",CFile::modeCreate|CFile::modeWrite))
	{
		AfxMessageBox("请选择输出文件!");  
		return;
	}
	fWriteFile.Write(NDVIWr,sizeof(float)*Height*Width);
	AfxMessageBox("finish!");
	
	fReadFile.Close();
	fWriteFile.Close();

	delete []NDVIWr;               
	delete []Red;      
	delete []NearRed ;  
	

}
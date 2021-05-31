// BandMath.h: interface for the CBandMath class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BANDMATH_H__FCAAE790_5C72_4002_9747_747C65A6144F__INCLUDED_)
#define AFX_BANDMATH_H__FCAAE790_5C72_4002_9747_747C65A6144F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CBandMath  
{
public:
	CBandMath();
	virtual ~CBandMath();
	void NDVICal(CString m_pathname,int Bands,int Width,int Height);

};

#endif // !defined(AFX_BANDMATH_H__FCAAE790_5C72_4002_9747_747C65A6144F__INCLUDED_)

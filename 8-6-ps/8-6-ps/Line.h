#pragma once
#include "layer.h"
class CLine :
	public CLayer
{

	CPoint m_first,m_second;
	void ONLButtonDown(UINT flags, CPoint point);
	void OnLButtonUp(UINT nFlags, CPoint point);
	void OnDraw(CDC* pDC);
public:
	CLine(void);
	~CLine(void);
};

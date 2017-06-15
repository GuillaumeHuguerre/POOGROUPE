#include "Zone.h"

CZone::CZone(int x, int y, int h, int w,int next)
	: m_nZonePosX(x)
	, m_nZonePosY(y)
	, m_nZoneHeight(h)
	, m_nZoneWidth(w)
	, m_nIdNextImg(next)
{
}
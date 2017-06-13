#pragma once
class CZone
{
	int m_nZonePosX;
	int m_nZonePosY;
	int m_nZoneHeight;
	int m_nZoneWidth;
	int m_nIdNextImg;

public:
	CZone() {}
	CZone(int x, int y, int h, int w, int next);

	int GetPosX() { return m_nZonePosX; }
	int GetPosY() { return m_nZonePosY; }
	int GetHeight() { return m_nZoneHeight; }
	int GetWidth() { return m_nZoneWidth; }
	int GetNextImg() { return m_nIdNextImg; }
};
#pragma once
#include "Zone.h"
#include <string>
#include <vector>

class Tableau
{
	std::string m_sAdresse;
	std::vector<CZone> m_vZones;
	int m_nIdImg;
public:
	Tableau(std::string, std::vector<CZone>, int);

	//Getter
	std::string GetAdresse() { return m_sAdresse; }
	int GetNbZone() { return m_vZones.size(); }
	std::vector<CZone> GetVectorOfZone() { return m_vZones; }
	int GetIdImg() { return m_nIdImg; }
};
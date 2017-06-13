#include "Tableau.h"
using namespace std;
Tableau::Tableau(string Adresse, std::vector<CZone> v, int id)
	: m_sAdresse(Adresse)
	, m_vZones(v)
	, m_nIdImg(id)
{
}
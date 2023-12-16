#pragma once
#include "pch.h"
#include "MapaBase.h"
#include "CamiSolucio.h"
#include "Util.h"

class MapaSolucio : public MapaBase
{
public:
	void getPdis(std::vector<PuntDeInteresBase*>&); //Agafar les dades de xmlElements per obtenir Punts de Interes i Camins

	//varios camins -> de varios nodes
	void getCamins(std::vector<CamiBase*>&);  //Retornar tot el conjunt de camins parsejats
	void parsejaXmlElements(std::vector<XmlElement>& xmlElements); //Retornar tot el conjunt de Punts d�Interes parsejats
private:
	std::vector<PuntDeInteresBase*> m_puntsDeInteres;
	std::vector<CamiSolucio*> m_camins;
};
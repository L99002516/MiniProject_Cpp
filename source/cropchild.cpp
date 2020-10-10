#include "cropparent.h"
#include "cropchild.h"
#include <string>
#include <iostream>
#include <string>
#include <algorithm>
int Bajra=30,Banana=20,Cadamom=20,CirtrusFruit=40, Coconut=15,Coriander=20,DryChillies=30,DryGinger=40;
int Garlic=30,Grapes=30,Groundnuts=70;
int Jowar=40,Mango=90;
int Onion=70,Paddy=40,Potato=80,Ragi=100,Rice=45;
int SoyaBean=30,Sugarcane=30;
int Tomato=20,Turmeric=30,Wheat=40;
cropchild::cropchild():cropparent(),m_districtname(""),m_cropyear(0),m_crop(""),m_season(""),m_area(0.0),m_production(0.0){}

cropchild::cropchild(std::string state,std::string district, int  year, std::string season, std::string crop,double area, double production):cropparent(state),m_districtname(district),m_cropyear(year),m_season(season),m_crop(crop),m_area(area),m_production(production){}

cropchild :: ~cropchild() {}

std::string cropchild::getSeason()
{
	return m_season;
}
int  cropchild::getCropYear()
{
	return m_cropyear;
}


std::string cropchild:: getDistrictName()
{
	return m_districtname;
}

std::string cropchild:: getCrop()
{

	return m_crop;
}

double cropchild::getProduction()
{
	return m_production;
}

double cropchild::getArea()
{
	return m_area;
}

double cropchild::computePrice(std::string crop, int prod)
{
		if(!crop.compare("Bajra"))return prod*Bajra; 
		else if(!crop.compare("Banana") )return prod*Banana;
		else if(!crop.compare("Cadamom") )return prod*Cadamom;
			else if(!crop.compare("Cirtrus Fruit") ) return prod*CirtrusFruit;
			else if(!crop.compare("Coriander") )return prod*Coriander;
			else if(!crop.compare("Coconut") )return prod*Coconut;
			else if(!crop.compare("Dry chillies") )return prod*DryChillies;
			else if(!crop.compare("Dry ginger") )return prod*DryGinger;
			else if(!crop.compare("Garlic") )return prod*Garlic;
			else if(!crop.compare("Grapes") )return prod*Grapes;
			else if(!crop.compare("Groundnut") ) return prod*Groundnuts;
			else if(!crop.compare("Jowar") )return prod*Jowar;
			else if(!crop.compare("Mango") )return prod*Mango;
			else if(!crop.compare("Onion") )return prod*Onion;
			else if(!crop.compare("Paddy") )return prod*Paddy;
			else if(!crop.compare("Potato") )return prod*Potato;
			else if(!crop.compare("Ragi") )return prod*Ragi;
			else if(!crop.compare("Rice") )return prod*Rice;
			else if(!crop.compare("Soyabean") )return prod*SoyaBean;
			else if(!crop.compare("Sugarcane") )return prod*Sugarcane;
			else if(!crop.compare("Tomato") )return prod*Tomato;
			else if(!crop.compare("Turmeric") )return prod* Turmeric;
			else if(!crop.compare("Wheat") )return prod*Wheat;
			else return 0.0;
}

//operator overloading
int cropchild::operator + (const cropchild& obj)
{
	return m_area+obj.m_area;
}


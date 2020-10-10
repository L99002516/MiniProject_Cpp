#ifndef __CROPCHILD_H_INCLUDED
#define __CROPCHILD_H_INCLUDED
#include "cropparent.h"
#include<string>
class cropchild : public cropparent
{
	std::string m_districtname;
	int m_cropyear;
	std::string m_season;
	std::string m_crop;
	double m_area;
	double m_production;
	
  public:
  	cropchild();
  	cropchild(std::string state,std::string,int,std::string,std::string,double,double);
  	~cropchild();
  	std::string getDistrictName();
  	std::string getSeason();
  	std::string getCrop();
  	int getCropYear();
  	double getArea();
  	double getProduction();
  	double computePrice(std::string,int);
  	int operator + (const cropchild& obj);//operator overloading

};
#endif


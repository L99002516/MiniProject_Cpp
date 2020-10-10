#ifndef __CROPPARENT_H_INCLUDED
#define __CROPPARENT_H_INCLUDED
#include<string>
class cropparent
{
  protected:
  	std::string m_statename;
	
  public:
  	cropparent();
  	cropparent(std::string);
  	cropparent(const cropparent&);
  	virtual double computePrice(std::string,int)=0;;
  	std::string getStateName();
  	
 };
 #endif

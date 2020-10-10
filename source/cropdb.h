#ifndef CROPDB_H_INCLUDED
#define CROPDB_H_INCLUDED
#include "cropparent.h"
#include "cropchild.h"
#include <list>

class cropdb
{
	std::list<cropchild> crop_list;
  public:
 	bool addCrop(std::string, std::string,int, std::string, std::string, double,double);
  	int countAll();
  	int numberOfCropsGrown(std::string,int );
  	int maxProductionYear(std::string ,std::string);
  	int maxProductionYear(std::string );//overloading
  	template <typename T>
  	T maxProductionDistrict(T, T);
  	
  	std::string maxProductionDistrict(int ,std::string );
};

#endif

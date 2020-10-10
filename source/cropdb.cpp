#include "cropdb.h"
#include "cropchild.h"
#include<iostream>
#include <list>
#include <iterator>
#include<iostream>
bool cropdb::addCrop(std::string state, std::string district,int year, std::string season, std::string crop, double area,double production)
{
	crop_list.push_back(cropchild(state,district,year,season,crop,area,production));
	return true;
}



int cropdb::countAll()
{
	std::list<cropchild> :: iterator iter;
	int count=0;
	iter=crop_list.begin();
   	for(;iter!=crop_list.end();++iter)
    	{
    		++count;
    	}
   	return count;
}

int cropdb::numberOfCropsGrown(std::string district,int year)
{
	std::list<cropchild> :: iterator iter;
	int count=0;
   	for(iter=crop_list.begin();iter!=crop_list.end();++iter)
    	{
        	if(  !(iter->getDistrictName().compare(district))  && (iter->getCropYear()==year)  )
        	{
           			++count;
        	}
        	
    	}
    	return count;
}

int cropdb::maxProductionYear(std::string district,std::string crop)
{
	std::list<cropchild> :: iterator iter;
	int year=0,maxProd=0;
   	for(iter=crop_list.begin();iter!=crop_list.end();++iter)
    	{
        	if(  !iter->getDistrictName().compare(district) && !(iter->getCrop().compare(crop)) )  
        	{	
        		if(iter->getProduction() >= maxProd)
        		{
        			maxProd = iter->getProduction();
        			year = iter->getCropYear();
        		}
        	}
        	
    	}
    	
    	return year;
}

//overloading
int cropdb::maxProductionYear(std::string district)
{
	std::list<cropchild> :: iterator iter;
	int year=0,maxProd=0;
   	for(iter=crop_list.begin();iter!=crop_list.end();++iter)
    	{
        	if(  !iter->getDistrictName().compare(district)  )  
        	{	
        		if(iter->getProduction() >= maxProd)
        		{
        			maxProd = iter->getProduction();
        			year = iter->getCropYear();
        		}
        	}
        	
    	}
    	
    	return year;
} 
template <typename T>
T cropdb::maxProductionDistrict(T year,T crop)
{
	std::list<cropchild> :: iterator iter;
	std::string district;
	int maxProd=0;
   	for(iter=crop_list.begin();iter!=crop_list.end();++iter)
    	{
        	if(  (iter->getCropYear()==year)  && !(iter->getCrop().compare(crop)) )  
        	{	
        		if(iter->getProduction() >= maxProd)
        		{
        			maxProd = iter->getProduction();
        			district=iter->getDistrictName();;
        		}
        	}
        	
    	}
    	
    	return district;
}

std::string cropdb::maxProductionDistrict(int year,std::string crop)
{
	std::list<cropchild> :: iterator iter;
	std::string district;
	int maxProd=0;
   	for(iter=crop_list.begin();iter!=crop_list.end();++iter)
    	{
        	if(  (iter->getCropYear()==year)  && !(iter->getCrop().compare(crop)) )  
        	{	
        		if(iter->getProduction() >= maxProd)
        		{
        			maxProd = iter->getProduction();
        			district=iter->getDistrictName();;
        		}
        	}
        	
    	}
    	
    	return district;
}

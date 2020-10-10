#include "cropparent.h"
#include <string>
#include<iostream>
cropparent::cropparent():m_statename(""){}
cropparent::cropparent(std::string state):m_statename(state){}
cropparent::cropparent(const cropparent& obj):m_statename(obj.m_statename){}

 std::string cropparent::getStateName()
{
	return m_statename;
}

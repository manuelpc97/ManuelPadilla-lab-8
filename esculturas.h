#pragma once
#include "obrasArte.h"
#include <string>

using std::string;

class esculturas:public obrasArte{
	double peso;
	string material;

	public:
		esculturas(string,string,string,double,string);
		~esculturas();
		string toString()const;

}; 

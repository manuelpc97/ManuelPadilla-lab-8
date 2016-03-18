#pragma once
#include "obrasArte.h"
#include <string>

using std::string;

class pinturas:public obrasArte{
	string material;
	string tecnica;

	public:
		pinturas(string,string,string,string,string);
		~pinturas();
		string toString()const;

}; 

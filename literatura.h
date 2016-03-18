#pragma once
#include "obrasArte.h"
#include <string>

using std::string;

class literatura:public obrasArte{
	string genero;
	string epoca;

	public:
		literatura(string,string,string,string,string);
		~literatura();
		string toString()const;

}; 

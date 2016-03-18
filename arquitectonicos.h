#pragma once
#include "obrasArte.h"
#include <string>

using std::string;

class arquitectonicos:public obrasArte{
	string terreno;

	public:
		arquitectonicos(string,string,string,string);
		~arquitectonicos();
		string toString()const;

}; 

#pragma once
#include <string>

using std::string;

class obrasArte{
	string nombre;
	string autor;
	string fecha;

	public:
		obrasArte(string, string, string);
		virtual ~obrasArte();
		string toString()const;
};

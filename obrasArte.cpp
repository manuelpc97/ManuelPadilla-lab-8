#include "obrasArte.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;


obrasArte::obrasArte(string name, string aut, string date): nombre(name), autor(aut), fecha(date) {

}

obrasArte::~obrasArte(){

}

string toString()const{
	stringstream ss;
	ss << "Nombre: " << name << "\n";
	ss << "Autor: " << autor << "\n";
	ss << "Fecha: " << fecha << "\n";
	return ss.str();
}

#include "obrasArte.h"
#include "esculturas.h"
#include <string>
#include <sstream> 

using std::string;
using std::stringstream;

esculturas::esculturas(string name,string autor,string date,double mat,string tec):obrasArte(name,autor,date) , peso(mat), material(tec){

}
		
esculturas::~esculturas(){

}

string esculturas::toString()const{
	stringstream ss;
	ss << "Escultura: \n";
	ss << obrasArte::toString();
	return ss.str();

}

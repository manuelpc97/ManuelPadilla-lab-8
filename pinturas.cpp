#include "obrasArte.h"
#include "pinturas.h"
#include <string>
#include <sstream> 

using std::string;
using std::stringstream;

pinturas::pinturas(string name,string autor,string date,string mat,string tec):obrasArte(name,autor,date) , material(mat), tecnica(tec){

}
		
pinturas::~pinturas(){

}

string pinturas::toString()const{
	stringstream ss;
	ss << "Pintura: \n";
	ss << obrasArte::toString();
	return ss.str();

}

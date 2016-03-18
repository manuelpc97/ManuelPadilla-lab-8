#include "obrasArte.h"
#include "arquitectonicos.h"
#include <string>
#include <sstream> 

using std::string;
using std::stringstream;

arquitectonicos::arquitectonicos(string name,string autor,string date,string mat):obrasArte(name,autor,date) , terreno(mat){

}
		
arquitectonicos::~arquitectonicos(){

}

string arquitectonicos::toString()const{
	stringstream ss;
	ss << "Diseños Arquitectonicos: \n";
	ss << obrasArte::toString();
	return ss.str();

}

#include "obrasArte.h"
#include "literatura.h"
#include <string>
#include <sstream> 

using std::string;
using std::stringstream;

literatura::literatura(string name,string autor,string date,string mat,string tec):obrasArte(name,autor,date) , genero(mat), epoca(tec){

}
		
literatura::~literatura(){

}

string literatura::toString()const{
	stringstream ss;
	ss << "Literatura: \n";
	ss << obrasArte::toString();
	return ss.str();

}

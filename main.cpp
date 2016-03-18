#include "obrasArte.h"
#include "pinturas.h"
#include "esculturas.h"
#include "literatura.h"
#include "arquitectonicos.h"
#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::endl;
using std::cin;
using std::cout;
using std::vector;

void mostrarObras(vector<obrasArte>&);

int main(int argc, char*argv[]){
	vector <obrasArte>inventario;
	vector <obrasArte>transferencias;
	bool seguir = true;
	string nombre, autor,fecha;
	double peso;
	
	
	return 0;
}

void mostrarObras(vector<obrasArte>& lista){
	for(int i = 0; i < lista.size(); i++){
		cout << lista[i].toString();
	}
}

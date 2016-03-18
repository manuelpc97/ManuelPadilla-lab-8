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
int desplegarMenu();
int desplegarMenu2();

int main(int argc, char*argv[]){
	vector <obrasArte>inventario;
	vector <obrasArte>transferencias;
	bool seguir = true;
	int opcion, opcion2, pos;
	string nombre, autor,fecha, material, tecnica;
	double peso;
	
	while(seguir){
		opcion = desplegarMenu();
		
		if(opcion == 1){
			opcion2  = desplegarMenu2();
			if(opcion2 == 1){
				cout << "------Pinturas-------" << endl;
				cout << "Ingrese el nombre de la obra: " ;
				cin >> nombre;
				cout << "Ingrese el autor de la obra: ";
				cin >> autor;
				cout << "Ingrese la fecha de creacion: ";
				cin >> fecha;
				cout << "Ingrese el material de la pintura: ";
				cin >> material;
				cout << "Ingrese la tecnica de la pintura: ";
				cin >> tecnica;
				inventario.push_back(pinturas(nombre,autor,fecha,material,tecnica));
			}else if(opcion2 == 2){	
				cout << "------Esculturas-------" << endl;
				cout << "Ingrese el nombre de la obra: " ;
				cin >> nombre;
				cout << "Ingrese el autor de la obra: ";
				cin >> autor;
				cout << "Ingrese la fecha de creacion: ";
				cin >> fecha;
				cout << "Ingrese el peso de la escultura: ";
				cin >> peso;
				cout << "Ingrese el material del qu esta hecho la escultura: ";
				cin >> tecnica;
				inventario.push_back(esculturas(nombre,autor,fecha,peso,tecnica));
			}else if(opcion2 == 3){	
				cout << "------Literatura-------" << endl;
				cout << "Ingrese el nombre de la obra: " ;
				cin >> nombre;
				cout << "Ingrese el autor de la obra: ";
				cin >> autor;
				cout << "Ingrese la fecha de creacion: ";
				cin >> fecha;
				cout << "Ingrese el genero literario: ";
				cin >> material;
				cout << "Ingrese la epoca: ";
				cin >> tecnica;
				inventario.push_back(literatura(nombre,autor,fecha,material,tecnica));
			}else if(opcion2 == 4){	
				cout << "------Diseños Arquitectonicos-------" << endl;
				cout << "Ingrese el nombre de la obra: " ;
				cin >> nombre;
				cout << "Ingrese el autor de la obra: ";
				cin >> autor;
				cout << "Ingrese la fecha de creacion: ";
				cin >> fecha;
				cout << "Ingrese el tipo de terreno: ";
				cin >> material;
				inventario.push_back(arquitectonicos(nombre,autor,fecha,material));
			}else{
				cout << "Opcion invalida" << endl;
			}			
		}else if(opcion == 2){
			mostrarObras(inventario);
			cout << "Ingrese el numero de la obra que desea transferir: ";
			cin >> pos;
			
			if(pos <= 0 || pos > inventario.size()){
				cout << "Esta posicion no existe." << endl;
			}else{
				transferencias.push_back(inventario[pos - 1]);
				inventario.erase(inventario.begin() + pos-1);
			}			
		}else if(opcion == 3){
			cout << "-------------Inventario----------" << endl;
			mostrarObras(inventario);
		}else if(opcion == 4){

		}else if(opcion == 5){
			seguir = false;
		}else{
			cout << "Opcion invalida, ingrese de nuevo." << endl; 
		}	
		
	}
	
	return 0;
}

void mostrarObras(vector<obrasArte>& lista){
	for(int i = 0; i < lista.size(); i++){
		cout << i+1 << ". "<< lista[i].toString();
		cout << "****************************************" << endl;
	}
}


int desplegarMenu(){
	int retorno;
	cout << "---------------------Museo Britanico------------------"<< endl;
	cout << "1.- Agregar obra de Arte." << endl;
	cout << "2. Transferir obras de arte. " << endl;
	cout << "3. Mostrar obras en inventario " << endl;
	cout << "4. Mostrar obras transferidas. " << endl;
	cout << "5. Salir. " << endl;
	cout << "Ingrese una opcion: ";
	cin >> retorno;
	return retorno;
}


int desplegarMenu2(){
	int retorno;
	cout << "-----Tipo de Obra-----" << endl;
	cout << "1. Pinturas" << endl;
	cout << "2. Esculturas " << endl;
	cout << "3. LIteratura" << endl;
	cout << "4. Diseños Arquitectonicos" << endl;
	cin >> retorno;
	return retorno;	
}

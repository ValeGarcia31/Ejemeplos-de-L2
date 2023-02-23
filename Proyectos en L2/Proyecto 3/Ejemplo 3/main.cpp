#include <iostream>
#include<stdlib.h>

using namespace std;

class Registro{
	private://Atributos
	
	//Especificación de la característica noc = numero de cuenta
	int noc; 
	
	public://Métodos son los que pueden acceder a los atributos
	    Registro(int); //constructor
	    
	    //Aquí se dará la instrucción de imprimir el número de cuenta
		void nocuenta();
		
};

//El constructor nos sirve para inicializar los atributos y tiene el mismo nombre de la clase
//Registro:: tipo de constructor y para inicializar el constructor se coloca variables diferentes y en este caso colocamos guion bajo para ello
Registro::Registro(int _noc){
	
	noc = _noc;
}

//El void pertenece a la clase persona y declaramos la acción a realizar en ella
void Registro::nocuenta(){
	cout<<"El numero de cuenta ingresado del cliente es: "<<noc<<endl;
}

class Cuentas{
	private://Atributos
	string cliente;
	int valor;
	
	public://Métodos
	    Cuentas(string, int);
		void deposito();
		void retira();
		
};

//El constructor nos sirve para inicializar los atributos y tiene el mismo nombre de la clase
Cuentas::Cuentas(string _cliente, int _valor){
	
	cliente = _cliente;
	valor = _valor;
}

//El void pertenece a la clase persona y declaramos la acción a realizar en ella
void Cuentas::deposito(){
	cout<<"El cliente "<<cliente<<" deposito la cantidad de "<<valor<<" Lempiras en la cuenta de 2021202589 \n"<<endl;
}

void Cuentas::retira(){
	cout<<"El cliente "<<cliente<<" retiro la cantidad de "<<valor<<" Lempiras en la cuenta de 2021202589 \n"<<endl;
}

int main(int argc, char** argv) {
	
	Registro pe1=Registro(2020);
	pe1.nocuenta();
	Cuentas per1=Cuentas("Kevin Rivas", 20);
	per1.deposito();
	
	Registro pe2=Registro(2021);
	pe2.nocuenta();
	Cuentas per2=Cuentas("Yoseph Castillo", 25);
	per2.retira();
	
	
	return 0;
}

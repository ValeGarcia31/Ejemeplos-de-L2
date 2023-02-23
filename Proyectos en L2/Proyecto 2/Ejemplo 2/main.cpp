#include <iostream>
#include<stdlib.h>

using namespace std;

class Vehiculo{
	private://Atributos
	string color;
	string marca;
	
	public://Métodos son los que pueden acceder a los atributos
	    Vehiculo(string, string);
		void acelerar();
		void frenar();
};

//El constructor nos sirve para inicializar los atributos y tiene el mismo nombre de la clase
//Registro:: tipo de constructor y para inicializar el constructor se coloca variables diferentes y en este caso colocamos guion bajo para ello
Vehiculo::Vehiculo(string _color, string _marca){
	
	color = _color;
	marca = _marca;
}

//El void pertenece a la clase persona y declaramos la acción a realizar en ella
void Vehiculo::acelerar(){
	cout<<"El color del vehiculo es "<<color<<" de la marca "<<marca<<" esta a velocidad 0\n"<<endl;
}

void Vehiculo::frenar(){
	cout<<"El color del vehiculo es "<<color<<" de la marca "<<marca<<" freno frente al estacionamiento del mercado\n"<<endl;
}

int main(int argc, char** argv) {
	
	Vehiculo v1=Vehiculo("rojo", "Chevrolet");
	v1.acelerar();

	Vehiculo v2=Vehiculo("azul", "Nissan");
	v2.frenar();
	return 0;
}

#include <iostream>
#include<stdlib.h>

using namespace std;

class Jugador{
	private://Atributos
	string nom;
	float velo;
	
	public:
		Jugador(string, float);
		void tirar_arco();
		void quitar_balon();
		void pase();
};

Jugador::Jugador(string _nom, float _velo){
	
	nom = _nom;
	velo = _velo;
}

	void Jugador::tirar_arco(){
		
		cout<<"El jugador "<<nom<<" va en direccion hacia al arco con una velocidad de "<<velo<<"\n"<<endl;
	}
	
		void Jugador::quitar_balon(){

		cout<<"El jugador "<<nom<<" le quita el balon a su oponente"<<"\n"<<endl;
	}
	
		void Jugador::pase(){

		cout<<"El jugador "<<nom<<" realiza un pase largo a su companero de equipo"<<"\n"<<endl;
	}

int main(int argc, char** argv) {
	
	Jugador op1 = Jugador("Jose",36.5);
	op1.tirar_arco();
	
	Jugador op2 = Jugador("Martin",' ');
	op2.quitar_balon();
	
	Jugador op4 = Jugador("Cristian", ' ');
	op4.pase();

	return 0;
}

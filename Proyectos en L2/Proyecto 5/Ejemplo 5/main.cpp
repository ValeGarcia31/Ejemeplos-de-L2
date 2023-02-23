#include <iostream>
#include<stdlib.h>

using namespace std;

class BuenEstudiante{
	private://Atributos
	string nom;
	int edad;
	string cole;
	
	public:
		BuenEstudiante(string, int, string);
		void investiga();
		void participa();
		void entrega_trabajos();
};

BuenEstudiante::BuenEstudiante(string _nom, int _edad, string _cole){
	
	nom = _nom;
	edad = _edad;
	cole = _cole;
}

void BuenEstudiante::investiga(){
	
	cout<<" La alumna "<<nom<<" de "<<edad<<" anos de edad investiga diariamente los temas que ve en su colegio "<<cole<<"\n"<<endl;
}

void BuenEstudiante::participa(){
	
	cout<<" El alumno "<<nom<<" de "<<edad<<" anos de edad participa diariamente en todas las clases de su colegio "<<cole<<"\n"<<endl;
}

void BuenEstudiante::entrega_trabajos(){
	
	cout<<" El alumno "<<nom<<" de "<<edad<<" anos de edad es el primero en entregar los trabajos en su colegio "<<cole<<"\n"<<endl;
}

int main(int argc, char** argv) {
	BuenEstudiante est1=BuenEstudiante("Martina", 15, "LUIS LANDA");
	est1.investiga();
	
	BuenEstudiante est2=BuenEstudiante("Manuel", 16, "SAN ANTONIO");
	est2.participa();
	
	BuenEstudiante est3=BuenEstudiante("Allan", 18, "LA MILAGROSA");
	est3.entrega_trabajos();
	
	return 0;
}

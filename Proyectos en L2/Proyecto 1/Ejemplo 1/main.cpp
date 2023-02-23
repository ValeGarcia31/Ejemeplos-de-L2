#include <iostream>
#include<stdlib.h>

using namespace std;

class Operaciones1{
	public://Atributos
	int var1;
	int var2;
	int result;
	
	void sumar(){
		result = var1 + var2;
		cout<<"El resultado de la suma es: "<<result<<endl;
	}
	
		void restar(){
		result = var1 - var2;
		cout<<"El resultado de la resta es: "<<result<<endl;
	}
	
	Operaciones1(int, int);
};

Operaciones1::Operaciones1(int dato1, int dato2){
	
	var1 = dato1;
	var2 = dato2;
}

class Operaciones2{
	public://Atributos
	int var1;
	int var2;
	int result;
	
	void multiplicacion(){
		result = var1 * var2;
		cout<<"El resultado de la multiplicacion es: "<<result<<endl;
	}
	
		void division(){
		result = var1 / var2;
		cout<<"El resultado de la division es: "<<result<<endl;
	}
	
	Operaciones2(int, int);
};

Operaciones2::Operaciones2(int dato1, int dato2){
	
	var1 = dato1;
	var2 = dato2;
}
int main(int argc, char** argv) {
	
	Operaciones1 op1 = Operaciones1(25,30);
	op1.sumar();
	
	Operaciones1 op2 = Operaciones1(45,30);
	op2.restar();
	
	Operaciones2 op3 = Operaciones2(2,30);
	op3.multiplicacion();
	
	Operaciones2 op4 = Operaciones2(45,5);
	op4.division();

	return 0;
}

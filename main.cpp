#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
using namespace std;


int main(int argc, char** argv) {
	int a;
	int b;
	int par=0;
	int impar=0;
	int poblacion;
	float relacion_ip;
	while(1){
		cout<<endl<<endl<<endl<<"Poblacion: ";
		fflush(stdin);
		cin>>poblacion;
		for(int i=0; i<poblacion; i++){
			//a=rand();
			//b=rand();
			//cout<<endl<<a<<" x "<<b<<" = "<<(a*b);
			//if(((a*b)%2)==0) par++;
			if(((rand()*rand())%2)==0) par++;
			//else impar++;
		}
		cout<<endl<<endl<<"Pares: "<<par;
		impar=poblacion-par;
		cout<<endl<<"Impares: "<<impar;
		relacion_ip=(((float)par)/((float)impar));
		cout<<endl<<"Pares / impares: "<<relacion_ip<<endl<<endl;
		cout<<endl<<endl<<"Ingrese '1' para realizar una nueva busqueda, o cualquier otro numero para salir... ";
		fflush(stdin);
		cin>>poblacion;
		if(poblacion!=1) break;
		impar=0;
		par=0;
	}
	return 0;
}

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
#include <Metodo.hpp>
#include <Rainbow.hpp>
using namespace :: std;


void Metodo::LeerIntervalos(){
	print_colored("Hola, calcularemos la integral de raiz((x^3)+1), \n con los valores que nos des usaremos fix 8 \n ingresa el valor a \n",CYAN,BG_BLACK);
	cin>>a;
	print_colored("Ingresa el valor b\n",CYAN,BG_BLACK);
	cin>>b;
	print_colored("Ingresa el valor de n\n",CYAN,BG_BLACK);
	cin>>n;

	cout<<" 	      "<<b<<endl;
	cout<<"	    n"<<endl;
	cout<<"	   |"<<endl;
	cout<<"   	   | raiz((x^3)+1)"<<endl;
	cout<<"	  |"<<endl;
	cout<<"	  |"<<endl;
	cout<<"	 u  "<<endl;
	cout<<" 	   "<<a<<endl;
	}
float Metodo::DesarrollarFuncion(float x){
	return  sqrt(pow(x,3)+1);
}

void Metodo::CalcularH(){
	h=(b-a)/n;
}
void Metodo::ObtenerNoIntervalos(){
	g = ((b-a)/h);
}

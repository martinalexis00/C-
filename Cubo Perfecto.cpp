/*
Cubo Perfecto
Elaborado por Martín Alexis Samán Arata
Ejemplo:
Un número es cubo perfecto si al sumar los cubos de sus digitos dan el mismo número:
153 = 1^3 + 5^3 + 3^3
*/
#include <wchar.h>			// Incluye un soporte para amplios tipos de caracteres
#include <locale.h>			// Incluye el soporte para distintos tipos de formatos de fecha, moneda, texto, etc.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");	// Funcion para las librerias wchar.h y locale.h
	int t,d,s=0,n;
	cout<<"Ingrese el número: "; cin>>n;cout<<endl;
	t=n;
	while(t>0){
		d= t%10;
		t/=10;
		s=(int)(s+pow((double)d, 3.0));
	}
	if(n==s){
		cout<<"El número "<<n<<" es Cubo Perfecto"<<endl;
	}else{
		cout<<"El número "<<n<<" no es Cubo Perfecto"<<endl;
	}
}

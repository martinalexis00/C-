/*
Cubo Perfecto
Elaborado por Mart�n Alexis Sam�n Arata
Ejemplo:
Un n�mero es cubo perfecto si al sumar los cubos de sus digitos dan el mismo n�mero:
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
	cout<<"Ingrese el n�mero: "; cin>>n;cout<<endl;
	t=n;
	while(t>0){
		d= t%10;
		t/=10;
		s=(int)(s+pow((double)d, 3.0));
	}
	if(n==s){
		cout<<"El n�mero "<<n<<" es Cubo Perfecto"<<endl;
	}else{
		cout<<"El n�mero "<<n<<" no es Cubo Perfecto"<<endl;
	}
}

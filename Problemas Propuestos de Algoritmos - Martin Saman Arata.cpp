// 1.cpp: define el punto de entrada de la aplicación de consola.
/*Elaborado por Martín Alexis Samán Arata, estudiante de la carrera Análisis de Sistemas I, en Valle Grande
  Monitor: Giancarlo Valencia Sotomayor
*/
#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int i;
	double a, b, c, d, e, f;
	bool v;
	cout<<"\tPROBLEMAS PROPUESTOS DE ALGORITMOS"<<endl;
	for (i = 1; i <= 47; i++) {
		cout << "Ejercicio #" << i << endl;
	}
	cout << "Seleccione ->";
	cin >> i;
	system("cls");
	switch (i) {
	case 1:
		cout << "Dadas dos variables numericas A y B, que el usuario debe teclear, se pide realizar un algoritmo que intercambie los valores de ambas variables y muestre cuanto valen al final las dos variables" << endl;
		cout << "Ingresar A y B" << endl;
		cin >> a >> b;
		c = a;
		a = b;
		b = c;
		cout <<"A ahora vale: "<<a<<endl<<"B ahora vale: "<<b<<endl;
		break;
	case 2:
		cout << "Algoritmo que lea dos números, calculando y escribiendo su suma, resta, producto y division" << endl;
		cout << "Ingresa el valor de A y B" << endl;
		cin >> a >> b;
		c = a + b;
		d = a - b;
		e = a * b;
		f = a / b;
		cout << "La suma es: " << c << endl << "La resta es: " << d << endl << "El producto es: " << e << endl << "La division es: " << f << endl;
		break;
	case 3:
		cout << "Algoritmo que lea dos numeros y nos diga cual de ellos es mayor o bien si son iguales." << endl;
		cout << "Ingrese A y B" << endl;
		cin >> a >> b;
		if(a==b){cout << "Ambos son iguales." << endl;}
		else {
			if (a > b) {cout << "A es mayor." << endl;}
			else{ cout << "B es mayor." << endl;}
		}
		break;
	case 4:
		cout << "Algoritmo que lea tres numeros distintos y nos diga cual de ellos es el mayor" << endl;
		cout << "Ingresar A, B y C" << endl;
		cin >> a >> b >> c;
		if (a == b && b == c) { cout << "Todos son iguales" << endl; }
		else{
		if (a > b&&a > c) { cout << "El mayor es A" << endl; }
		if (b > a&&b > c) { cout << "El mayor es B" << endl; }
		if (c > a&&c > b) { cout << "El mayor es C" << endl; }
		}
		break;
	case 5:
		cout << "Algoritmo que pida por teclado tres numeros; si el primero es negativo, debe imprimir el producto de los tres y si no lo es, imprimira la suma" << endl;
		cout << "Ingresar A, B y C" << endl;
		cin >> a >> b >> c;
		if (a < 0) { d = a * b*c; cout << "El producto es: " << d << endl; }
		else { d = a + b + c; cout << "La suma es: " << d << endl; }
		break;
	case 6:
		cout << "Algoritmo que lea un numero. En caso de que ese numero sea 0 o menor que 0, se saldra el programa, imprimiendo antes un mensaje de error. Si es mayor que 0, se debera calcular su cuadrado y la raiz cuadrada del mismo, visualizando el numero que se ingreso y el resultado" << endl;
		cout << "Ingresar numero" << endl;
		cin >> a;
		if (a == 0 || a < 0) { cout << "Error" << endl; system("exit"); }
		else { b =pow(a,2); c = sqrt(a); cout << "Del numero " << a << ", su potencia es " << b << ", y su raiz " << c << endl; }
		break;
	case 7:
		cout << "Un colegio desea saber que porcentaje de niños y niñas hay en el curso actual. Diseñar un algoritmo para este proposito" << endl;
		
		break;
	case 8:
		cout << "Una tienda ofrece un descuento del 15% sobre el total de la compra durante el mes de octubre. Dado un mes y un importe, calcular cual es la cantidad que se debe cobrar al cliente" << endl;
		break;
	case 9:
		cout << "Realizar un algoritmo que dado un numero, me diga si es par o impar, si es 0: El numero no es par ni impar" << endl;
		cout << "Ingresa el numero" << endl;
		cin >> i;
		if (i == 0) { cout << "El numero no es par ni impar" << endl; }
		else{
		if (i % 2 == 0) { cout << "El numero es par" << endl; }
		else { cout << "El numero es impar" << endl; }
		}
		break;
	case 10:
		cout << "Modificar el algoritmo anterior, de forma que, si se teclea un 0, se vuelva a pedir el numero por teclado, asi hasta que se teclee un numero mayor que 0" << endl;
		do{cout << "Ingresa el numero" << endl;
		cin >> i;
		if (i == 0) { cout << "El numero no es par ni impar" << endl; }
		else {
			if (i % 2 == 0) { cout << "El numero es par" << endl; }
			else { cout << "El numero es impar" << endl; }
		}
		} while (i == 0||i<0);
		break;
	case 11:
		cout<<"Algoritmo que nos diga si una persona puede acceder a cursar un ciclo formativo de grado superior o no, para acceder se tiene que tener un titulo de bachiller, en caso de no tenerlo, se puede acceder si hemos superado una prueba de acceso"<<endl;
		cout<<"¿Posee Bachiller? Responda 1 si posee, o 0 si no posee"<<endl;
		cin >> v;
		if (v == 1) {
			cout << "Bienvenido.." << endl;
		}
		else {
			cout << "Si tenemos 4 manzanas y nos comemos 2. ¿Cuantas manzanas me quedan?" << endl;
			cin >> a;
			if (a == 2) { cout << "Bienvenido.." << endl; }
			else { cout << "Usted no ha sido admitido" << endl; }
		}
		break;
	case 12:
		cout << "Desarrollar un algoritmo que nos calcule el cuadrado de los 9 primero numeros naturales" << endl;
		for (i =1; i <= 9; i++) {
			a = pow(i, 2);
			cout << a << endl;
		}
		break;
	case 13:
		cout << "Se pide representar el algoritmo que nos calcule la suma de los N primeros numeros naturales, N se leera por teclado" << endl;
		cin >> a;
		int s = 0;
		for (i = 1; i <= a; i++) {
			s=s+i;
		}
		cout << "La suma de los "<<a<<" numeros es "<<s << endl;
		break;
	case 14:
		int s = 0;
		cout << "Algoritmo que nos calcule la suma de los N primeros numeros pares" << endl;
		cout << "Ingrese N" << endl;
		cin >> a;
		for (i = 1; i <= a * 2) {
			if(i%2==0){
				s = s + i;
			}
		}
		cout << "La suma de los " << a << " numeros pares es " << s << endl;
		break;
	}
	system("pause");
    return 0;
}


//Elaborado por Martín Alexis Samán Arata
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,x,x1,x2,d;
	char v;
	bool z;
	do{
	cout<<"ALGORITMO DE LA ECUACION DE SEGUNDO GRADO:\n"<<"a x^2 + bx + c = 0\n"<<"Ingrese los coeficientes\n";
    cin>>a;
	if(a==0){cout<<"La ecuacion no existe";
			return 0;} 	
    cin>>b>>c;
	d=(b*b)-4*a*c;
	if (d>0){
		x1=(-b-sqrt(d))/2*a;
		x2=(-b+sqrt(d))/2*a;
		if(x1==-0){x1=0;}
		if(x2==-0){x2=0;}
		if(x2<x1){cout<<"La solucion de esta ecuacion es: "<<x2<<" y "<<x1;}		
		else{cout<<"La solucion de esta ecuacion es: "<<x1<<" y "<<x2;}
	 }
	if(d<0){cout<<"No existe solucion Real";} 
	if(d==0){x=-b/(2*a);
		if(x==-0){x=0;}
		cout<<"La solucion de esta ecuacion es: "<<x;} 
cout<<"\n";
cout<<"Desea continuar? y/n \n";
cin>>v;
 if(v=='y'){system("cls");z=1;}
 if(v=='n'){z=0;}else{cout<<"Error\n";}
}while(z==1);
system("exit");
}

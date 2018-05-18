//Elaborado por Martín Alexis Samán Arata
//La inecuación de 1° está siendo mejorada
#include<iostream>
#include<math.h>
int s;
float a,b,c,disc,x1,x2,x;
char v;
bool z;
using namespace std;
int main(){
do{
	cout<<"INECUACION DE 2DO GRADO\n";
	cout<<"Seleccione la desigualdad"<<endl;
	cout<<"1)>\n2)<\n3)>=\n4)<="<<endl;// <-- Las desigualdades toman el valor de s
	cin>>s;
	if(s>0&&s<5){
	cout<<"Ingresa los coeficientes\n";
	cin>>a>>b>>c;
	disc=(b*b)-4*a*c;
	if(disc>0){
		x1=-b-sqrt(disc)/2*a;
		x2=-b+sqrt(disc)/2*a;
		if(s==1){cout<<"C.S=<-infinito;"<<x1<<"> U <"<<x2<<", +infinito>"<<endl;}
		if(s==2){cout<<"C.S=<"<<x1<<";"<<x2<<">"<<endl;}
		if(s==3){cout<<"C.S=<-infinito,"<<x1<<"] U ["<<x2<<", +infinito>"<<endl;}
		if(s==4){cout<<"C.S=["<<x1<<";"<<x2<<"]"<<endl;}
	}
	if(disc<0){
	    if(s==1||s==3){cout<<"E |R"<<endl;}
		if(s==2||s==4){cout<<"Vacio"<<endl;}	
	}
	if(disc==0){
	 if(s==1){cout<<"C.S= |R - {"<<x<<" }";}
	 if(s==2){cout<<"Vacio";}
	 if(s==3){cout<<"|R";}
	 if(s==4){cout<<"C.S={"<<x<<" }o";}
	}}
	else{cout<<"Error!\n";
	}
cout<<"\n"<<"Desea continuar? y/n \n"; //modificado
cin>>v;
if(v=='n'){z=0;}else{cout<<"Error\n";}
if(v=='y'){system("cls");z=1;}
}while(z==1);
system("exit");
}

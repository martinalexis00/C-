//Elaborado por Martín Alexis Samán Arata
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
char i[]="ax+b",j='>',k='<',l[]=">=",m[]="<=",cs[]="C.S= ",v;
float a,b,c,x;
bool z;
int n;
int main(){
do{
	system("color 0f");
	cout<<"ECUACION DE PRIMER GRADO"<<endl;
	cout<<"Ingrese la desigualdad\n"<<"1) >"<<"\n"<<"2) <"<<"\n"<<"3) >="<<"\n"<<"4) <=\n";
	cin>>n;
	system("cls");
	if (n>0&&n<5){
		if(n==1){
			system ("color 5f");
			cout <<i<<j<<"c"<<"\n"<<"Ingrese los coeficientes"<<endl;
			cin>>a;
			if(a==0){cout<<"Error!"<<endl;
			  return 0;}
			else{if(a<0){
				 cin>>b>>c;
			     x=(c-b)/a;
			     cout<<cs<<"<-infinito,"<<x<<">"<<endl;
			     return 0;}
				else{cin>>b>>c;
			     x=(c-b)/a;
			     cout<<cs<<"x"<<j<<x<<"\n"<<endl;}}}
		if(n==2){
			system ("color 9f");
			cout <<"ax+b"<<k<<"c"<<"\n"<<"Ingrese los coeficientes"<<endl;
			cin>>a>>b>>c;
			x=(c-b)/a;
			cout<<cs<<"<-8,"<<x<<">"<<endl;}
		if(n==3){
			system ("color 2f");
			cout <<"ax+b"<<l<<"c"<<"\n"<<"Ingrese los coeficientes"<<endl;
			cin>>a>>b>>c;
			x=(c-b)/a;
			cout<<cs<<"x"<<l<<x;}
		if(n==4){
			system ("color 6f");
			cout <<"ax+b"<<m<<"c"<<"\n"<<"Ingrese los coeficientes"<<endl;
			cin>>a>>b>>c;
			x=(c-b)/a;
			cout<<cs<<"x"<<m<<x;}
	}
	else{system ("color 4f");cout<<"ERROR!";}
cout<<"\n"<<"Desea continuar? y/n \n";
cin>>v;
if(v=='n'){z=0;}else{cout<<"Error\n";}
if(v=='y'){system("cls");z=1;}
}while(z==1);
system("exit");}

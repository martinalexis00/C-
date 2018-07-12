#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n[10][10], f, c,fd,cd,m[10][10],t[10][10]; // Acá estaba probando la suma xd
	cout<<"Ingrese la cantidad de filas y columnas"<<endl;
	cin>>f>>c;
	for(int i=0;i<f;i++){//filas
		for(int j=0;j<c;j++){//columnas
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
			cin>>n[i][j];}//lees
	}
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<n[i][j]<<"\t";//imprimes
		}
		cout<<endl;//enter:v
	}
	cout<<"Ingrese la cantidad de filas y columnas"<<endl;//segunda matriz
	cin>>fd>>cd;
	for(int i=0;i<fd;i++){
		for(int j=0;j<cd;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
			cin>>m[i][j];}}
	for(int i=0;i<fd;i++){
		for(int j=0;j<cd;j++){
			cout<<m[i][j]<<"\t";}
		cout<<"\n";}
	if(c==cd&&f==fd){
	cout<<"Se puede sumar"<<endl;
	for(int i=0;i<f;i++){ 
			for(int j=0;j<cd;j++){
			t[i][j]=n[i][j] + m[i][j];
		}}
		for(int i=0;i<f;i++){
			for(int j=0;j<cd;j++){
			cout<<t[i][j]<<"\t";}
			cout<<endl;}		
	}else{cout<<"No se puede sumar"<<endl;}
	system("pause");
}

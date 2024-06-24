#include<iostream>
using namespace std;
void menu();
void depositar();
void retirar();
void mostsald();
int saldo = 0;
int main(){
	menu();
	return 0;
}
void menu(){
	int opcion;
	do{
		cout<<"///CAJERO AUTOMATICO///"<<endl;
		cout<<"1. Depositar 100"<<endl;
		cout<<"2. Retirar 100"<<endl;
		cout<<"3. Mostrar saldo"<<endl;
		cout<<"4. Salir"<<endl;
		cin>>opcion;
		cout<<endl;
		
		switch(opcion){
			case 1:
				depositar();
				break;
			case 2:
				retirar();
				break;
			case 3:
				mostsald();
				break;
			case 4:
				cout<<"Saliendo...";
				break;
			default:
				cout<<"Opcion no valida. Intente de nuevo..."<<endl;
				break;
		}
	} while(opcion != 4);
}

void depositar(){
	saldo += 100;
	cout<<"Se han depositado 100 unidades. NUevo saldo: "<<saldo<<endl;
}
void retirar(){
	if(saldo>=100){
		saldo -= 100;
		cout<<"Se han retirado 100 unidades. NUevo saldo: "<<saldo<<endl;
	}
	else{
		cout<<"Saldo insuficiente"<<endl;
	}
}

void mostsald(){
	cout<<"Saldo actual: "<<saldo<<endl;
}
//ejercicio 1

#include <iostream>

using namespace std;

int main(){
	
	float Saldo = 500;
	char key;
	int opcion;
	float retiro;
	float deposito;
	
	do{
	cout << "Presione el numero para elegir su opcion: " << endl << "1. Consultar saldo" << endl << "2. Retirar fondos" << endl << "3. Depositar fondos" << endl << endl;
	cin >> opcion;
	cout << endl;
	
	switch(opcion){
		
		case 1: 
	  cout << "Su saldo es de: " << Saldo << endl;
		break;
		
		case 2: 
		cout << "Ingrese cantidad a retirar: ";
		cin >> retiro;
		
		if (retiro <= Saldo) {
		Saldo = Saldo - retiro;
		cout << "Saldo retirado con exito" << endl;
	}
	
	else if (retiro > Saldo) {
		cout << "Operacion invalida" << endl;
	}
			break;
			
		case 3:
		cout << "Ingrese cantidad a depositar: ";
			cin >> deposito;
			Saldo = Saldo + deposito;
			cout << "Saldo depositado con exito" << endl;
			break;
			
			default: cout<<"opcion invalida"<<endl; break;
		
	}
	
	cout << "Presione Y si desea continuar, en otro caso, pulse cualquier tecla." << endl;
	cin >> key;
	
} while(key == 'Y' || key == 'y');

return 0;
}

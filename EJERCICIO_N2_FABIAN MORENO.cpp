//ejercicio 2

#include <iostream>

using namespace std;

int main(){
	
	char key;
	int opcion;
	float primeracifra = 0;
	float segundacifra = 0;
	float suma;
	float resta;
	float division;
	float multiplicacion;
	
	do{
	cout << "Que desea hacer?" << endl << "1. Sumar" << endl << "2. Restar" << endl << "3. Multiplicar" << endl << "4. Dividir" << endl << endl;
	cin >> opcion;
	
	switch(opcion){
		
		case 1:
			cout << "ingrese primera cifra: ";
			cin >> primeracifra;
			cout << "Ingrese segunda cifra: ";
			cin >> segundacifra;
			suma = primeracifra + segundacifra;
			cout << "La suma dio un total de: " << suma << endl;
			break;
			
			case 2:
			cout << "ingrese primera cifra: ";
			cin >> primeracifra;
			cout << "Ingrese segunda cifra: ";
			cin >> segundacifra;
			resta = primeracifra - segundacifra;
			cout << "La resta dio un total de: " << resta << endl;
			break;
		
		case 3:
			cout << "ingrese primera cifra: ";
			cin >> primeracifra;
			cout << "Ingrese segunda cifra: ";
			cin >> segundacifra;
			multiplicacion = primeracifra * segundacifra;
			cout << "La multiplicacion dio un total de: " << multiplicacion << endl;
			break;
			
			case 4:
			cout << "ingrese primera cifra: ";
			cin >> primeracifra;
			cout << "Ingrese segunda cifra: ";
			cin >> segundacifra;
			
			if (division > 0) {
			
			division = primeracifra / segundacifra;
			cout << "La division dio un total de: " << division << endl;
		}
		
			else if (division == 0){
				cout << primeracifra << " no es divisible entre " << segundacifra << endl;
			}
				break;
		}
		
			cout << "Presione Y si desea continuar, en otro caso, pulse cualquier tecla." << endl;
	cin >> key;
			
	} while(key == 'Y' || key == 'y');
	return 0;
}

//ejercicio 3

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	srand(time(NULL));
	
	int numero;
	int aleatorio = rand() % 20;
	char key;
	int contador = 0;
	int limite = 5;
	
do{ 
contador = 0;
while (contador < limite) {
	cout << "Adivine el numero del 1 al 20. Ingrese un numero y pruebe suerte (tiene 5 intentos): ";
	cin >> numero;
	
	int estimado = numero - aleatorio;
	
	if (estimado == aleatorio){
		cout << "Felicidades! has acertado." << endl;
		break;
	}
	
	else if (estimado < aleatorio) {
		cout << "No es el numero. Es muy bajo" << endl;
		contador++;
	}
		
		else if (estimado > aleatorio) {
		cout << "No es el numero. Es muy Alto" << endl;
		contador++;
	}
}
	cout << "Se han acabado los intentos. Presione Y si desea continuar, en otro caso, pulse cualquier tecla." << endl;
	cin >> key;
	
	} while (key == 'Y' || key == 'y');
	
	return 0;
		
	}

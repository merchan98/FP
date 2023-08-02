/* Definici�n de la clase y creaci�n de objetos

*/

#include <iostream> // Inclusi�n de los recursos de E/S

using namespace std;

class Recta{   // Introduccion de la clase recta
	public:
		int A = 0, B = 0, C = 0;
		int x, y;	
};

int main(){    // Programa Principal

	Recta primero, segundo; // Definicion devariables
	double pendiente1, pendiente2;
	
	cout << "Primera recta: \n ";
	cout << "Introduzca un valor para el primer par�metro(A): ";
	cin >> primero.A;
	cout << " Introduzca un valor para el segundo par�metro(B): ";
	cin >> primero.B;
	cout << " Introduzca un valor para el tercero par�metro(C): ";
	cin >> primero.C;
	
	cout << " Introduzca un valor para coordenada 'x': ";
	cin >> primero.x;
	cout << " Introduzca un valor para coordenada 'y': ";
	cin >> primero.y;	
	
	cout << " \n ";
	
	cout << "Segunda recta: \n ";
	cout << "Introduzca un valor para el primer par�metro(A): ";
	cin >> segundo.A;
	cout << " Introduzca un valor para el segundo par�metro(B): ";
	cin >> segundo.B;
	cout << " Introduzca un valor para el tercero par�metro(C): ";
	cin >> segundo.C;
	
	cout << " Introduzca un valor para coordenada 'x': ";
	cin >> segundo.x;
	cout << " Introduzca un valor para coordenada 'y': ";
	cin >> segundo.y;
	
	pendiente1 = - primero.A / primero.B;
	pendiente2 = - segundo.A / segundo.B;
	
	cout << "El valor de la pendiente de la primera recta es de: " << pendiente1 << "\n";
	cout << "El valor de la pendiente de la segunda recta es de: "<< pendiente2 ;
	
	   system("pause");
}

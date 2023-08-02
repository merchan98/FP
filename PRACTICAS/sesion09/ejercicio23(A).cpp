/* Definición de la clase y creación de objetos

*/

#include <iostream> // Inclusión de los recursos de E/S

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
	cout << "Introduzca un valor para el primer parámetro(A): ";
	cin >> primero.A;
	cout << " Introduzca un valor para el segundo parámetro(B): ";
	cin >> primero.B;
	cout << " Introduzca un valor para el tercero parámetro(C): ";
	cin >> primero.C;
	
	cout << " Introduzca un valor para coordenada 'x': ";
	cin >> primero.x;
	cout << " Introduzca un valor para coordenada 'y': ";
	cin >> primero.y;	
	
	cout << " \n ";
	
	cout << "Segunda recta: \n ";
	cout << "Introduzca un valor para el primer parámetro(A): ";
	cin >> segundo.A;
	cout << " Introduzca un valor para el segundo parámetro(B): ";
	cin >> segundo.B;
	cout << " Introduzca un valor para el tercero parámetro(C): ";
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

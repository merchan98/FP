/* Métodos públicos

*/

#include <iostream> // Inclusión de los recursos de E/S

using namespace std;

class Recta{   // Introduccion de la clase recta
	public:
		int A = 0, B = 0, C = 0;
		int x, y;
		
	double Pendiente(){
		double pendiente;
		
		pendiente = - A / B;	
		
		return pendiente;
	}
	
	double ObtenerOrdenada(double x){
		return (-C - x * A) / B;
	}
	
	double ObtenerAbcisa(double y){
		return (-C - y * B) / A;
	}
};

int main(){ // Programa Principal
	Recta primero, segundo;  // Definicion devariables
	double pendiente1, pendiente2;
	int x, y, ordenada, abcisa;
	
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
	
	pendiente1 = primero.Pendiente();
	pendiente2 = segundo.Pendiente();
	
	cout << "El valor de la pendiente de la primera recta es de: " << pendiente1 << "\n";
	cout << "El valor de la pendiente de la segunda recta es de: " << pendiente2 << "\n";
	
	cout << "Introduzca un valor para la ordenada: ";
	cin >> ordenada;
	cout << "Introduzca un valor para la abcisa: ";
	cin >> abcisa;
	
   x = primero.ObtenerAbcisa(ordenada);
	y = segundo.ObtenerOrdenada(abcisa);
	
	cout << "La abcisa de " << ordenada << " es: " << x << "\n El punto: (" << x << ", " << ordenada << ")";
	cout << "La ordenada de " << abcisa << " es: " << y << "\n El punto: (" << abcisa << ", " << y << ")\n";
	
	   system("pause");
}

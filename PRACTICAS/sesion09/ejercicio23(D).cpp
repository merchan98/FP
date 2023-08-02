/*  Política de acceso a los datos miembros

*/

#include <iostream> // Inclusión de los recursos de E/S

using namespace std;

class Recta{
	private:
		int A = 0, B = 0, C = 0;
		
		
	public:
		int x, y; // Me sale error al hacerlas porivadas y no se porque
		
	void SetA(int valorA){  //Asignacion A
		A = valorA;
	 }
	 
	void SetB(int valorB){  //Asignacion B
		B = valorB;
	 }
	 
	void SetC(int valorC){  //Asignacion C
		C = valorC;
	 }
	 
	void SetX(double valorX){   //Asignacion X
		x = valorX;
	 }
	 
	void SetY(double valorY){   //Asignacion Y
		y = valorY;
	 }
	 
	void SetCoeficientes(int valorA, int valorB, int valorC){     //Asignacion los tres a la vez
		SetA(valorA);
		SetB(valorB);
		SetC(valorC);
	}
	
	int GetX(){  //Mostrar el valor X
		return x;
	 }
	 
	int GetY(){  //Mostrar el valor Y
		return y;
	 }
	 
	int GetA(){  //Mostrar el valor A
		return A;
	 }
	 
	int GetB(){  //Mostrar el valor B
		return B;
	 }
	 
	int GetC(){  //Mostrar el valor C
		return C;
	 }
	 
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


int main(){    // Programa Principal
	Recta primero, segundo;   // Definicion devariables
	double pendiente1, pendiente2;
	int x, y, ordenada, abcisa, A, B, C;
	
	cout << "Primera recta: \n ";
	cout << "Introduzca un valor para el primer parámetro(A): ";
	cin >> A;
	cout << " Introduzca un valor para el segundo parámetro(B): ";
	cin >> B;
	cout << " Introduzca un valor para el tercero parámetro(C): ";
	cin >> C;
	
	primero.SetCoeficientes(A,B,C);
	
	cout << " Introduzca un valor para coordenada 'x': ";
	cin >> x;
	cout << " Introduzca un valor para coordenada 'y': ";
	cin >> y;	
	
	primero.SetX(x);
	primero.SetY(y);
	

   cout << "Segunda recta: \n ";
	cout << "Introduzca un valor para el primer parámetro(A): ";
	cin >> A;
	cout << " Introduzca un valor para el segundo parámetro(B): ";
	cin >> B;
	cout << " Introduzca un valor para el tercero parámetro(C): ";
	cin >> C;
	
	segundo.SetCoeficientes(A,B,C);
	
   cout << " Introduzca un valor para coordenada 'x': ";
	cin >> segundo.x;
	cout << " Introduzca un valor para coordenada 'y': ";
	cin >> segundo.y;	
	
	segundo.SetX(x);
	segundo.SetY(y);
	
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

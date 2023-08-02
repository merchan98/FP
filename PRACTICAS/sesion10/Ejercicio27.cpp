/* Programa para calcular la funcion gussiana
  Formula
      gaussiana(x) = ((1/(sigma(sqrt(2*PI)))))* e ^(-05*((x- nu)/sigma)^2)
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std;

class Gaussiana{
	private:
		double desviacion;
		double media;
		const double PI = 3.14159265359;
		const double EULER = 2.71828182846;

	public:
		Gaussiana(double desv, double med){
			desviacion = desv;
			media = med;
		}
		
		double getGaussiana (double abcisa){
			double parte1 = 1/(desviacion*sqrt(2*PI));
			double parte2 = exp( -0.5*pow((abcisa - media)/desviacion,2));
			return parte1*parte2;
		}
};

int main(){                    // Programa Principal

	double media, desv, min_x, max_x, incr;
	double acumulado; 
	
	cout << "Introducir media: ";
	cin >> media;
	
	do{
		cout << "Introducir Desviacion tipica (mayor que 0): ";
		cin >> desv;
	}
	while(desv <= 0);
	
	cout << "Introducir un valor MINIMO de X : ";
	cin >> min_x;
	
	do{
		cout << "Introducir un valor MAXIMO de X  (mayor o igual a " << min_x <<" ): ";
		cin >> max_x; 
	}
	while(max_x < min_x);
	
	do{
		cout << "Introducir el incremento a efectuar (mayor que 0 ) : ";
		cin >> incr;
	}
	while(incr <= 0);
		
	Gaussiana gaussi (desv , media);
	
	acumulado = min_x;
	
	while (acumulado <= max_x){
		cout << "\n X : " << acumulado << "\t Gaussiana : " << gaussi.getGaussiana(acumulado);
		acumulado += incr;
	}
		
   system("pause");
}

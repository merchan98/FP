/* Programa para calcular la longuitud de la circunferencia y el área del círculo dado el rádio
  Formulas:
    longitud circunferncia = 2 * pi * rádio;

    área círculo = pi * pow(radio,2);
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){   // Programa Principal
              
				     
double radio;                     // Definicion devariables
double longitud_circunferncia;
double area_circulo;
const double pi = 3.1416 ;

cout << " Introduce la longitud del radio de la circunferencia: ";  // Lectura de datos
cin >> radio ;

longitud_circunferncia = 2 * pi * radio;   //Cálculo de la longitud de la circunferencia

area_circulo = pi * pow(radio,2);    // Cálculo del área del círculo

cout << " \n La longitud de la circunferencia dada es de " << longitud_circunferncia << " u " ;

cout << " \n El área de la círculo " << area_circulo << " u^2. \n" ;


   system("pause");
}

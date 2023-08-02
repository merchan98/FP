/* Programa para calcular la longuitud de la circunferencia y el �rea del c�rculo dado el r�dio
  Formulas:
    longitud circunferncia = 2 * pi * r�dio;

    �rea c�rculo = pi * pow(radio,2);
*/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std; 

int main(){   // Programa Principal
              
				     
double radio;                     // Definicion devariables
double longitud_circunferncia;
double area_circulo;
const double pi = 3.1416 ;

cout << " Introduce la longitud del radio de la circunferencia: ";  // Lectura de datos
cin >> radio ;

longitud_circunferncia = 2 * pi * radio;   //C�lculo de la longitud de la circunferencia

area_circulo = pi * pow(radio,2);    // C�lculo del �rea del c�rculo

cout << " \n La longitud de la circunferencia dada es de " << longitud_circunferncia << " u " ;

cout << " \n El �rea de la c�rculo " << area_circulo << " u^2. \n" ;


   system("pause");
}

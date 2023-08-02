/* Programa para calcular la poblaci�n despues de 3 a�os dada la poblacio�n inical, las tasas de mortalidad. natalidad y migraci�n
  Las tasas son a tanto por mil, y se aplican cosecutivamente cada a�o 
*/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std; 

int main(){                    // Programa Principal

double pob_inicial;             // Defici�n de variables
double tasa_mortalidad;
double tasa_natalidad;
double tasa_migracion_pos;
double tasa_migracion_neg;
int long long total, total2, total3;

cout << "Introduce los datos necesarios sin signo ni simbolo de porcentaje.  \n Para la migracio�n introduce la tasa en donde corresponde si es negativa o positiva tal como indica, \n si es positiva pon un 0 en la negativa y viceversa si pasa lo contrario. \n" ; // Explicaion de la particularidad del programa

cout << "Introduce la poblaci�n inicial: "; // introducion de las variables
cin >> pob_inicial;

cout << "Introduce la tasa de natalidad: ";
cin >> tasa_natalidad;

cout << "Introduce la tasa de mortalidad: " ;
cin >> tasa_mortalidad;

cout << "Introduce la tasa de migraci�n (positva): " ;
cin >> tasa_migracion_pos;

cout << "Introduce la tasa de migraci�n (negtiva): " ;
cin >> tasa_migracion_neg;

total = pob_inicial + ((pob_inicial * tasa_natalidad )/1000) - ((pob_inicial * tasa_mortalidad )/1000) + ((pob_inicial * tasa_migracion_pos )/1000) - ((pob_inicial * tasa_migracion_neg )/1000) ;  //Poblaci�n primer a�o

total2 = total + ((total * tasa_natalidad )/1000) - ((total * tasa_mortalidad )/1000) + ((total * tasa_migracion_pos )/1000) - ((total * tasa_migracion_neg )/1000) ;                               // Pobalci�n segundo a�o

total3 = total2 + ((total2 * tasa_natalidad )/1000) - ((total2 * tasa_mortalidad )/1000) + ((total2 * tasa_migracion_pos )/1000) - ((total2 * tasa_migracion_neg )/1000) ;                         // Poblaci�n tercer a�o


cout << "La poblacion total en 3 a�os con las tasas impuestas anterior mente son de " << total3 << "\n" ;

   system("pause");
}

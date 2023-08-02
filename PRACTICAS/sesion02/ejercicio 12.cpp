/* Programa para calcular la población despues de 3 años dada la poblacioón inical, las tasas de mortalidad. natalidad y migración
  Las tasas son a tanto por mil, y se aplican cosecutivamente cada año 
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){                    // Programa Principal

double pob_inicial;             // Defición de variables
double tasa_mortalidad;
double tasa_natalidad;
double tasa_migracion_pos;
double tasa_migracion_neg;
int long long total, total2, total3;

cout << "Introduce los datos necesarios sin signo ni simbolo de porcentaje.  \n Para la migracioón introduce la tasa en donde corresponde si es negativa o positiva tal como indica, \n si es positiva pon un 0 en la negativa y viceversa si pasa lo contrario. \n" ; // Explicaion de la particularidad del programa

cout << "Introduce la población inicial: "; // introducion de las variables
cin >> pob_inicial;

cout << "Introduce la tasa de natalidad: ";
cin >> tasa_natalidad;

cout << "Introduce la tasa de mortalidad: " ;
cin >> tasa_mortalidad;

cout << "Introduce la tasa de migración (positva): " ;
cin >> tasa_migracion_pos;

cout << "Introduce la tasa de migración (negtiva): " ;
cin >> tasa_migracion_neg;

total = pob_inicial + ((pob_inicial * tasa_natalidad )/1000) - ((pob_inicial * tasa_mortalidad )/1000) + ((pob_inicial * tasa_migracion_pos )/1000) - ((pob_inicial * tasa_migracion_neg )/1000) ;  //Población primer año

total2 = total + ((total * tasa_natalidad )/1000) - ((total * tasa_mortalidad )/1000) + ((total * tasa_migracion_pos )/1000) - ((total * tasa_migracion_neg )/1000) ;                               // Pobalción segundo año

total3 = total2 + ((total2 * tasa_natalidad )/1000) - ((total2 * tasa_mortalidad )/1000) + ((total2 * tasa_migracion_pos )/1000) - ((total2 * tasa_migracion_neg )/1000) ;                         // Población tercer año


cout << "La poblacion total en 3 años con las tasas impuestas anterior mente son de " << total3 << "\n" ;

   system("pause");
}

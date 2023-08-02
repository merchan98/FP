/* Programa para calcular llos segundos que hay entre los dos intantes del mismo día
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){                    // Programa Principal

double horas1;  // definicion de variables
double minutos1;
double segundos1;
double horas2;
double minutos2;
double segundos2;
double segundos_diferencia;
const int CONVERHORAS = 3600 ;
const int CONVERMIN = 60 ;
 
cout << "Introduce las horas del primer tramo de tiempo: " ;
cin >> horas1 ;

cout << "Introduce los minutos del primer tramo de tiempo: " ;
cin >> minutos1 ;

cout << "Introduce los segundos del primer tramo de tiempo: " ;
cin >> segundos1 ;

cout << "Introduce las horas del segundo tramo de tiempo: " ;
cin >> horas2 ;

cout << "Introduce los minutos del segundo tramo de tiempo: " ;
cin >> minutos2 ;

cout << "Introduce los segundos del segundo tramo de tiempo:  " ;
cin >> segundos2 ;

segundos1 = segundos1 + (minutos1 * CONVERMIN) + (horas1 * CONVERHORAS) ;   //Conversión a segundos
segundos2 = segundos2 + (minutos2 * CONVERMIN) + (horas2 * CONVERHORAS) ;
segundos_diferencia = segundos2 - segundos1;


cout << "La diferencia de los tramos de tiempo en segundos es de " << segundos_diferencia << " segundos \n" ;

   system("pause");
}

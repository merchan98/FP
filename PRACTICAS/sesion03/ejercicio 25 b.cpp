/* Programa para cambiar de mayusculas a minusculas con char y int

*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){   // Programa Principal
              
				     

char mayus;                   // Definicion devariables
const int CONVERMAYUS = 32 ;


cout << "Introduce un caracter en mayúscula: ";  // Peticion del caracter
cin >> mayus;

int minus_num = mayus + CONVERMAYUS ;   // CAlculo de la mayúscula
char minus = minus_num;

cout << "El caracter introducido en minúscula es " << minus ;


   system("pause");
}

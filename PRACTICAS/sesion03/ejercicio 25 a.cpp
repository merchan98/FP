/* Programa para cambiar de mayusculas a minusculas con char y int

*/

#include <iostream>   // Inclusión de los recursos de E/S


using namespace std; 

int main(){   // Programa Principal
              
				     

char mayus;                   // Definicion devariables
const int CONVERMAYUS = 32 ;


cout << "Introduce un caracter en mayúscula: ";  // Peticion del caracter
cin >> mayus;

char minus = mayus + CONVERMAYUS ;   // CAlculo de la mayúscula

cout << "El caracter introducido en minúscula es " << minus << "\n" ;


   system("pause");
}

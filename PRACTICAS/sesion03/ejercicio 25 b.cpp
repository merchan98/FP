/* Programa para cambiar de mayusculas a minusculas con char y int

*/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std; 

int main(){   // Programa Principal
              
				     

char mayus;                   // Definicion devariables
const int CONVERMAYUS = 32 ;


cout << "Introduce un caracter en may�scula: ";  // Peticion del caracter
cin >> mayus;

int minus_num = mayus + CONVERMAYUS ;   // CAlculo de la may�scula
char minus = minus_num;

cout << "El caracter introducido en min�scula es " << minus ;


   system("pause");
}

/* Programa para calcular llos segundos que hay entre los dos intantes del mismo d�a
*/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std; 

int main(){                    // Programa Principal

int t;  // definicion de variables
int factorial= 0, sumfactorial =0, n, facto = 0;

 cout << "Introduce el n�mero:";
 cin >> t;
 
 
for (factorial=1; factorial<=t; factorial++){
	
	facto=1;
	
	for (n=1; n <= factorial; n++){
	
	
			facto = facto * n;
	}
		
	sumfactorial = facto + sumfactorial;
		
	}	
	


 cout << "\nEl factorial de " << t << " es " << sumfactorial ;

   system("pause");
}

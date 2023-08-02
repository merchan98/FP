/* Programa para calcular llos segundos que hay entre los dos intantes del mismo día
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){                    // Programa Principal

int t;  // definicion de variables
int factorial= 0, sumfactorial =0, n, facto = 0;

 cout << "Introduce el número:";
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

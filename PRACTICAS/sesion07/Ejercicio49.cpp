/* Programa para calcular llos segundos que hay entre los dos intantes del mismo d�a
*/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std; 

int main(){                    // Programa Principal

int n;  // definicion de variables
int sum=0;
int pantalla;
int descomposicion;
int inicial=1;


cout << "Introduzca el numero que necesitas descomponer: ";
cin >>n;

if (n >= 1){
	descomposicion = 1;
	while (descomposicion < n){
		
		sum += descomposicion;
		
		if (sum == n){
			cout << "\n La descomposicion de "<< n <<": ";
			for (pantalla = inicial; pantalla <= descomposicion; pantalla++){
				cout << pantalla << "  ";
				
			}
			cout << "\n";
			
			sum = 0;
			descomposicion = inicial;
			inicial++;
			
		}
		
			else if (sum > n){
				
				sum = 0;
				descomposicion = inicial;
				inicial++;
			}
			
			descomposicion++;
	}
	
}
else{
	cout << "Ninguno\n";
}
   system("pause");
}

/*30. En el ejercicio 13 de la Relación de Problemas I se pedía escribir un programa que
leyese un valor entero de tres dígitos e imprimiese los dígitos separados por un espacio
en blanco. Haga lo mismo pero para un número entero arbitrario. Por ejemplo, si el
número es 3519, la salida sería:
3 5 1 9 */

	#include <iostream>   // Inclusión de los recursos de E/S
	#include <cmath>      // Inclusión de los recursos matemáticos

	using namespace std;

	int main() {// Programa Principal
	int numero;  // Declara de variables y constantes
	
	cout << "Introduzca un numero hasta 6 digitos: " ;
	cin >> numero ;
	
	if(99999<numero<999999){ // 6 cifras
		cout << "\n"<< numero / 100000 << "   " << numero % 100000 / 10000 << "   " << numero % 10000 / 1000 << "   " << numero % 1000 / 100 << "   " << numero % 100 / 10 << "   " << numero % 10 << endl;}
	else 
	   if(9999<numero<99999){ // 5 cifras
		  cout << "\n" << numero / 10000 << "   " << numero % 10000 / 1000 << "   " << numero % 1000 / 100 << "   " << numero % 100 / 10 << "   " << numero % 10 << endl;}
	   else 
		   if(999<numero<9999){ // 4 cifras
		   cout << "\n" << numero / 1000 << "   " << numero % 1000 / 100 << "   " << numero % 100 / 10 << "   " << numero % 10 << endl;}
   	   else
			  if(99<numero<999){ // 3 cifras
	        cout << "\n" << numero / 100 << "   " << numero % 100 / 10 << "   " << numero % 10 << endl;}
	        else
			    if(9<numero<99){ // 2 cifras 
	          cout << "\n" << numero / 10 << "   " << numero % 10 << endl;}
         	 else 
				   if(0<numero<9){ // 1 cifra
		         cout << "\n" << numero % 10 << endl;}
	}


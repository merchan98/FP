/*30. En el ejercicio 13 de la Relaci�n de Problemas I se ped�a escribir un programa que
leyese un valor entero de tres d�gitos e imprimiese los d�gitos separados por un espacio
en blanco. Haga lo mismo pero para un n�mero entero arbitrario. Por ejemplo, si el
n�mero es 3519, la salida ser�a:
3 5 1 9 */

	#include <iostream>   // Inclusi�n de los recursos de E/S
	#include <cmath>      // Inclusi�n de los recursos matem�ticos

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


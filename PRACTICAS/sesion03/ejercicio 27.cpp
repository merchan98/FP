/* Programa para decir si es falso o verdadero lo introducido en csos:

  - letras  es mayúscula, verdadero
  - edad es menor 18 y mayor 65, verdadero
  - adivine esta entre 1 y 100, verdadero
  - año es bisiesto, veradero
  - 
*/

#include <iostream>   // Inclusión de los recursos de E/S

using namespace std; 

int main(){   // Programa Principal
              
				     

bool letra_b;                   // Definicion devariables
bool edad_b;
bool adivine_b;
bool ano_b;
char letra;
int edad;
int adivine;
int ano;




cout << "Introduce un caracter (letra en mayúscula o en minúscula):  ";  // Peticion caracter
cin >> letra;

cout << "Introduce una edad: ";  // Peticion edad
cin >> edad;

cout << "Introduce un número:  ";  // Peticion número
cin >> adivine;

cout << "Introduce un año: ";  // Peticion del año
cin >> ano;

letra_b = (letra >= 'a' && letra <= 'z') ;
edad_b = (edad < 18 || edad >65) ;
adivine_b = (adivine >= 1 && adivine <= 100) ;
ano_b = ((((ano % 4) ==0 ) && ((ano % 100 ) != 0)) || ((ano % 400 ) == 0)) ;


cout << "Las respuestas en el orden escrito son  " << letra_b << "  " << edad_b << "  " << adivine_b << "  " << ano_b << "\n";


   system("pause");
}

/* Programa para calcular dados unos datos temporales calcular el la unidad minima de tiempo
*/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std; 

int main(){   // Programa Principal
              
				     
int horas ;                    // Definicion devariables
int min ; 
int segundos ;
int dias ;
const int CONVERSEGUNDOS = 60 ;
const int CONVERHORAS = 24 ;


cout << "Introduce los d�as: ";  // Peticion de las variables
cin >> dias ;

cout << "Introduce las horas: " ;
cin >> horas ;

cout << "Introduce los minutos: " ;
cin >> min ;

cout << "Introduce los segundos:  ";
cin >> segundos ;


int resto_segundos = segundos % CONVERSEGUNDOS  ;  //calculos
segundos = segundos / CONVERSEGUNDOS ;

min = min + segundos ;
int resto_minutos = min % CONVERSEGUNDOS ;
min = min / CONVERSEGUNDOS ;

horas = min + horas ;
int resto_horas = horas % CONVERHORAS ;
horas = horas / CONVERHORAS ;

dias = horas + dias ;


cout << "La conversi�n de los datos introducidos es " << dias << " d�as "<< resto_horas << " horas " << resto_minutos << " minutos " << resto_segundos << " segundos \n" ;



   system("pause");
}

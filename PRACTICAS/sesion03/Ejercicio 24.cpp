/* Programa para cambiar de orden 3 variables
*/

#include <iostream>   // Inclusión de los recursos de E/S

using namespace std; 

int main(){   // Programa Principal
              
				     
int x ;                    // Definicion devariables
int y ; 
int z ;
int aux ;


cout << "Intoduce el valor x: ";  //peticion de los valores de las variables
cin >> x ;

cout << "Introduce el valor y: " ;
cin >> y ;

cout << "Introduce el valor z: " ;
cin >> z ;


aux = x ;  // CAmbios necesarios para cambiar de sitios las variables

x=y ;

y=z ;

z=aux ; 

cout << "El valor de las variables introducidas cambiadas de orden son \n x = " << x << " \n y =  "<< y << " \n z = " << z << " \n "  ;



   system("pause");
}

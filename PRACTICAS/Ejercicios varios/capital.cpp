/* Programa para calcular la hipotenusa de un tri�ngulo.
   Implementa el algoritmo de Pit�goras
   Necesita: los catetos de un tri�ngulo rect�ngulo
                lado1, lado2.
   Calcula:  la ley de ohm
*/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std; 

int main(){   
              
				     
double capital;   // Programa Principal
double interes;
double total;


cout << " Introduce el capital a ingresar: ";
cin >> capital ;

cout << " Introduce el interes: ";
cin >> interes ;

capital = capital + capital * (interes / 100) ;


cout << " \n El capital total al acabo de un a�o con un interes del " << interes <<" % es de " << capital << " � \n " ;




   system("pause");
}

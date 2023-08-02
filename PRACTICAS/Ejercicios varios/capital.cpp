/* Programa para calcular la hipotenusa de un triángulo.
   Implementa el algoritmo de Pitágoras
   Necesita: los catetos de un triángulo rectángulo
                lado1, lado2.
   Calcula:  la ley de ohm
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

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


cout << " \n El capital total al acabo de un año con un interes del " << interes <<" % es de " << capital << " € \n " ;




   system("pause");
}

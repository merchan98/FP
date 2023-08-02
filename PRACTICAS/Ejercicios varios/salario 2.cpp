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
              
				     
double salario_base;   // Programa Principal
double salario_final;



cout << " Introduce el salario base que se incrementara en un 2%: ";
cin >> salario_base ;

salario_final = 1.02 * salario_base ;


cout << " \n El salario final " << salario_final << " € \n " ;




   system("pause");
}

/* Construya un programa que calcule cu�ndo se produjo la mayor secuencia de d�as
consecutivos con temperaturas crecientes.*/

#include <iostream> // Inclusi�n de los recursos de E/S

using namespace std;    

int main(){         // Programa Principal
double anterior, actual;   // Declara de variables y constantes
int posic_sub = 0, posic_actual = 0, posic_maxima;
int long_maxima = 0, long_actual;
     
cout << "Secuencia de temperaturas: ";
cin >> anterior;
     
if(anterior != -1){
   cin >> actual;
   posic_maxima = posic_sub = posic_actual = 1;
   long_maxima = long_actual = 1;
   }
	
else
    
   actual = -1;
   
   while(actual != -1){
      posic_actual++;

      if(actual >= anterior){
         long_actual ++;
         if(posic_maxima == posic_sub)
             long_maxima++;
            else 
				  if(long_actual > long_maxima){
                 long_maxima = long_actual;
                 posic_maxima = posic_sub;
            }
        }
		else{
      long_actual = 1;
      posic_sub = posic_actual;
        }
         
        anterior = actual;
        cin >> actual;
    }
     
cout << "\nLa longitud de mayor tama�o de subsecuencia: "  << long_maxima;
cout << "\nComienza en la posicion: " << posic_maxima; 
    
	return 0;
}

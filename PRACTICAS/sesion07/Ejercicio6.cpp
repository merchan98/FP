/* Programa para calcular llos segundos que hay entre los dos intantes del mismo d�a
*/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std; 

int LeeIntRango (){
	bool condicion;
	int t;
	do{
		cout << "Introduce el n�mero para calcular su factrial: ";
		cin >> t;
		if (t <1  && t > 20 ){
			cout << "ERROR \n Introduce un n�mero entre 1 y 20.\n";
		}
		condicion = (t < 1 && t > 20);
	}
	while(condicion);
	return t;
}

long long SumaFactorial (int t){
	long long factorial,facto,n;
	long long sumfactorial = 0;
   for (factorial=1; factorial<=t; factorial++){
	
   	 facto=1;
	
   	 for (n=1; n <= factorial; n++){
   		facto = facto * n;
      }
	 	
   	sumfactorial = facto + sumfactorial;
		
  	}	
	
return sumfactorial;
}

int main(){                    // Programa Principal
int t;
long long sumfactorial;
t = LeeIntRango();
sumfactorial = SumaFactorial(t);

 cout << "\nEl factorial de " << t << " es " << sumfactorial ;

   system("pause");
}

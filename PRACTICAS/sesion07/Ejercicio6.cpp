/* Programa para calcular llos segundos que hay entre los dos intantes del mismo día
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int LeeIntRango (){
	bool condicion;
	int t;
	do{
		cout << "Introduce el número para calcular su factrial: ";
		cin >> t;
		if (t <1  && t > 20 ){
			cout << "ERROR \n Introduce un número entre 1 y 20.\n";
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

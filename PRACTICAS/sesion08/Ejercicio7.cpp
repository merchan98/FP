/* Programa para calcular la funcion gussiana
  Formula
      gaussiana(x) = ((1/(sigma(sqrt(2*PI)))))* e ^(-05*((x- nu)/sigma)^2)
*/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cmath>      // Inclusi�n de los recursos matem�ticos

using namespace std; 

double ParaEsperanza(){
	int esperanza;

		cout << "Introduce el valor de la espeanza(nu): ";   //Peticion de las variables
      cin >> esperanza;

   return esperanza; 
}

double ParaDesviacion(){
	int desviacion;
	bool condicion;
	do{
		cout << "Introduce el valor de la desviaci�n(sigma): ";
      cin >> desviacion;
      if (desviacion < 0){
      	cout << "Error. \nIntroduzca un n�mero positivo\n";
		}
		condicion = (desviacion < 0);
	}
	while (condicion);
	return desviacion;
}

int PrimeraOpcion(){
	int opcion1, esperanza, desviacion;
	do{
		cout << "1. Introducior parametros de la funcion (esperanza y desviaci�n)\n"<<"2. Salir del programa\n"<<"Introdice el numero de la opci�n: ";
		cin >> opcion1;
		if (opcion1 !=1 && opcion1 !=2){
      	cout << "Error. \nIntroduzca un n�mero del 1 al 2\n";
		}
	
	}
	while(opcion1 !=1 && opcion1 !=2);
	return opcion1;
}

int Min(){
	int min;

	cout << "Introduce el valor minimo: ";   //Peticion de las variables
   cin >> min;
   return min; 
}

int Max(int min){
   int max;
   bool condicion;
   do{
   	cout << "Introduce el valor m�ximo: ";   //Peticion de las variables
      cin >> max;
      if (max < min){
      	cout << "Error.\n Introduce un valor mayor que el min \n";
		}
	 condicion = (min > max);             
	}
   while (condicion);
	
   return max; 
	
}

double Incremento(){
		double incremento;

		cout << "Introduce el incemento: ";   //Peticion de las variables
      cin >> incremento;

   return incremento; 
	
}
         
int SegundaOpcion(){
	int opcion2,min,max;
	double incremento;
	do{
		cout << "1. Introducior rango de valores de abcisas\n"<<
		"2. Volver al men� anterior (el men� principal)\n"<<
		"Introdice el numero de la opci�n: ";
		cin >> opcion2;
		if (opcion2 !=1 && opcion2 !=2){
      cout << "Error. \nIntroduzca un n�mero del 1 al 2\n";
     }
	}
	while(opcion2 !=1 && opcion2 !=2);

return opcion2;
}

int Gaussiana(int min,int max,int incremento,int esperanza,int desviacion){
	double x;
	long double fraccion_exponente, exponente, parte2, parte1, total =0 ;
	const double PI = 3.1416;
	for(x=min ;total >= max; x + incremento){
	                                                         //Operaciones para la ecuaci�n
	fraccion_exponente = ((x-esperanza)/desviacion);         //Fraci�n del exponente
	exponente = -0.5 * (pow(fraccion_exponente,2)) ;         // Exponente entero
	parte2 = exp(exponente) ;                                // Exponencial de n�mero e
	parte1 = 1/(desviacion * (sqrt(2*PI))) ;                 // Fracion que multiplica al n� e
	total = parte1*parte2 ;                                  // Multiplicaci�n de la exponencial con la fraci�n
	cout << "x = " << total << "\n" ;
}
	return 1;
	
}

int main(){                    // Programa Principal
int opcion1, opcion2, esperanza, desviacion, min, max, incremento,guss;

opcion1 = PrimeraOpcion();

while (opcion1 == 1){
	
	if(opcion1==1){
		esperanza = ParaEsperanza();
		desviacion = ParaDesviacion();
   }
   opcion2 = SegundaOpcion();

	while (opcion2 == 1){
		
	  if(opcion2==1){
	     min = Min();
	     max = Max(min);
	     incremento =Incremento();
	     guss = Gaussiana(min,max,incremento,esperanza,desviacion); 
		  
	    }
   if (opcion2==2){
	   	opcion1 = PrimeraOpcion();
	   	opcion2 =1;
	   	
      	}
      	  opcion2 = SegundaOpcion();
      }

   }
   system("pause");
}

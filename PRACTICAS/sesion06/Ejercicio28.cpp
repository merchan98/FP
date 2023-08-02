/* Programa para calcular el el sario de un centro de atención 
   telefónica con la inclusion de varios valores
*/


#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std; 

int main(){                    // Programa Principal
double precio_horas;    // Declara de variables y constantes
int codigo_empleado, caso_resuelto, tiempo_conversacion, grado_satis, casos_totales, caso_resuelto_contador, tiempo_de_conversacion;
int empleado1 = 1 ;
int empleado2 = 2 ;
int empleado3 = 3 ;
int grado_satis1, grado_satis2, grado_satis3;
int caso_resuelto1, caso_resuelto2, caso_resuelto3 ;
int casos_totales1, casos_totales2, casos_totales3 ;
int  media_satisf_1, media_satisf_2, media_satisf_3 ;
int empleado_satis_numero , empleado_satis_persona ;
int tiempo_de_conversacion1,tiempo_de_conversacion2,tiempo_de_conversacion3;
double media_satisf1, media_satisf2, media_satisf3;	
	
cout << "Introduce el precio de la hora trabajadas "; //Introdcion de horas trabajadas
cin >> precio_horas;
                                                      //Inicializamos las variables
do { 
	
cout << "Introduce el codigo de empleado (1 - 3): ";
cin >> codigo_empleado;
}
while (codigo_empleado != empleado1 && codigo_empleado != empleado2 && codigo_empleado != empleado3);

cout << "Introduce los segundos que ha durado la conversacion: ";
cin >> tiempo_conversacion;

do { 
cout << "Introduce el caso de ha resuelto (0 si es asi/ 1 si es que no): ";
cin >> caso_resuelto;

caso_resuelto_contador++;
}
while (caso_resuelto !=1 && caso_resuelto !=0);

do { 
cout << "Introduce el grado de satisfacion(0 - 5): ";
cin >> grado_satis;
}
while (grado_satis < 0 && grado_satis > 5);

                                        //Introducion de los datos obtenidos en la inicializacion para su posterior calculo
switch (codigo_empleado){
	

	case 1:
		tiempo_de_conversacion1 += tiempo_de_conversacion;
      grado_satis1 += grado_satis;
      casos_totales1++;
      if(caso_resuelto) {
 	      caso_resuelto1++;
         }
      break;
      
   case 2:
		tiempo_de_conversacion2 += tiempo_de_conversacion;
      grado_satis2 += grado_satis;
      casos_totales2++;
      if(caso_resuelto) {
 	      caso_resuelto2++;
         }
      break;
      
   case 3:
   		tiempo_de_conversacion3 += tiempo_de_conversacion;
      grado_satis3 += grado_satis;
      casos_totales3++;
      if(caso_resuelto) {
 	      caso_resuelto3++;
         }
      break;
}
 



while (codigo_empleado > 0 ){ ;     //Bucle para repetir los datos

 do {
	
   cout << "Introduce el codigo de empleado (1 - 3/ o -1 para salir): "; //Introducimos los datos
   cin >> codigo_empleado;
  }
 while (codigo_empleado != empleado1 && codigo_empleado != empleado2 && codigo_empleado != empleado3 && codigo_empleado != -1);
	
	if (codigo_empleado > 0 ){ //Detector del centinela
		
      cout << "Introduce los segundos que ha durado la conversacion ";
      cin >> tiempo_conversacion;

      do { 
      cout << "Introduce el caso de ha resuelto (0 si es asi/ 1 si es que no): ";
      cin >> caso_resuelto;
      caso_resuelto_contador++;
      }
      while (caso_resuelto !=1 && caso_resuelto !=0);

      do { 
      cout << "Introduce el grado de satisfacion(0 - 5): ";
      cin >> grado_satis;
      }
      while (grado_satis < 0 && grado_satis > 5);
 		
			
 	 switch (codigo_empleado){   //casos empleados
	
   	case 1:
   		tiempo_de_conversacion1 += tiempo_de_conversacion;
         grado_satis1 += grado_satis;
         casos_totales1++;
         if(caso_resuelto) {
    	      caso_resuelto1++;
           }
       break;
      
       case 2:
	   	tiempo_de_conversacion2 += tiempo_de_conversacion;
         grado_satis2 += grado_satis;
         casos_totales2++;
         if(caso_resuelto) {
 	        caso_resuelto2++;
           }
         break;
      
       case 3:
   		tiempo_de_conversacion3 += tiempo_de_conversacion;
         grado_satis3 += grado_satis;
         casos_totales3++;
         if(caso_resuelto) {
   	      caso_resuelto3++;
            }
         break;
     }	
	}		
}



casos_totales = casos_totales1 + casos_totales2 + casos_totales3 ;


if (caso_resuelto_contador == 0 ){
	cout << "No se introdujo ningún caso "<< "\n";
}

else {
	   if (caso_resuelto1 > 0)
	     media_satisf1= grado_satis1/casos_totales1;
	   if (caso_resuelto2 > 0)
	     media_satisf2= grado_satis2/casos_totales2; 
	   if (caso_resuelto3 > 0)
	     media_satisf3= grado_satis3/casos_totales3;  
	     
	     
}



empleado_satis_numero = media_satisf1 ; //Inicializacion de la comparacion
empleado_satis_persona = 1;

if (media_satisf2 > media_satisf1){  //Comparacion
	empleado_satis_numero = media_satisf2;
	empleado_satis_persona = 2;
}

else {
	if (media_satisf3 > media_satisf2){
		 empleado_satis_numero = media_satisf3;
		 empleado_satis_persona = 3;
	}
}
 
 
cout << "El total de casos es " << casos_totales << "\n";
cout << "El empleado con la satisfacción media mas alta es el " << empleado_satis_persona << "\n";
cout << "Dicho grado de satisfación medio es: " << empleado_satis_numero << "\n";
system("pause");
}

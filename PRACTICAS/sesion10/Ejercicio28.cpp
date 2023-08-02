/* Programa para calcular la funcion gussiana
  Formula
      gaussiana(x) = ((1/(sigma(sqrt(2*PI)))))* e ^(-05*((x- nu)/sigma)^2)
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std;

class Poblacion{   //Clase poblacion
	private:
		static const int LIMITE_SUPERIOR_TASA = 1000;  //definicion de variables y constantes
		static const int LIMITE_INFERIOR_TASA = 0;
		static const int PORCENTAJE_MIL = 1000;
		static const int FACTOR_MULTIPLICIDAD = 2;
		long long poblacion_futura;
		long long poblacion_actual;
		long long poblacion_objetivo;
		double tasa_natalidad;
		double tasa_mortalidad;
		double tasa_migracion;
		double tasa_global;
      int numero_anios;
      int numero_anios2;

	public:
		int poblacion_futura2;  //Excecpcion
		int LeeIntRango(int min, int max, string mensaje){  // Función para leer el rango
			
   		int a_leer;
   		do{
			   cout << mensaje;
				cin >> a_leer;
			}
			while (min > a_leer || max < a_leer);
			return a_leer;
		}
		
		int LeeIntMayorIgualQue(int minimo, string mensaje){ // Función para leer el rango
			int a_leer;
			do{
				cout << mensaje;
				cin >> a_leer;
			}
			while (minimo > a_leer);
			return a_leer;
		}
		
		long long PoblacionActual(){ // Función para leer la poblacion actual
			
			const string mensaje= "Introduce la poblacion actual: ";
			
			poblacion_actual = LeeIntMayorIgualQue(LIMITE_INFERIOR_TASA, mensaje);
			
		}
		
		double TasaNatalidad(){    // Función para leer la tasa de natalidad
			const string mensaje= "Introduce la tasa de natalidad: ";
			
			tasa_natalidad = LeeIntRango(LIMITE_INFERIOR_TASA, LIMITE_SUPERIOR_TASA,  mensaje);
			
			
		}
		
		double TasaMortalidad(){  // Función para leer la tasa de mortalidad
			const string mensaje= "Introduce la tasa de mortalidad: ";
			
			tasa_mortalidad = LeeIntRango(LIMITE_INFERIOR_TASA, LIMITE_SUPERIOR_TASA,  mensaje);
			
			
		}
		double TasaMigracion(){  // Función para leer la tasa de migracion
			const string mensaje= "Introduce la tasa de migracion(se pueden poner nº negativos): ";
			
			tasa_migracion = LeeIntRango(-LIMITE_SUPERIOR_TASA, LIMITE_SUPERIOR_TASA,  mensaje);
			
			
		}
		
		double TasaGlobal(){  // Función para calcular la suma tasas total
			tasa_global = ((tasa_natalidad - tasa_mortalidad + tasa_migracion)/1000);	
		}
		
		void PoblacionObjaetivo(){  // Función para calcular la poblacion a la que se desea llegar
			
			poblacion_objetivo = FACTOR_MULTIPLICIDAD * poblacion_actual;
			
		}
		
		int NumerosAnios(){  // Función para leer el numero de años
			const string mensaje = "Introduce el numero de años: ";
			
			numero_anios = LeeIntMayorIgualQue(LIMITE_INFERIOR_TASA, mensaje);
			
			return numero_anios;
		}
		
		long long PoblacionFutura(){// Función para calcular la poblacion en el año elegido
			
			double factor_multiplicativo_tasa_global;
			
			factor_multiplicativo_tasa_global = tasa_global + 1;
			
			poblacion_futura = poblacion_actual;
			
			for (int anio = 0; anio < numero_anios; anio++){
				
				poblacion_futura = poblacion_futura * factor_multiplicativo_tasa_global;
			}
			return poblacion_futura;
		}
		
		int NumeroAniosPoblacionObjetivo(){ // Función para calcular los años en conseguir la poblacion objetivo
			double factor_multiplicativo_tasa_global;
			factor_multiplicativo_tasa_global = tasa_global + 1;
			
			poblacion_futura2 = poblacion_actual;
			PoblacionObjaetivo();
			numero_anios2 = 0;
			
			while (poblacion_objetivo > poblacion_futura2){
				poblacion_futura2 = poblacion_futura2 * factor_multiplicativo_tasa_global;
				numero_anios2++;
			}
			return numero_anios2;
		}
		
};

int main(){                    // Programa Principal

	Poblacion pueblo1; //creacion del objeto 
	int numero_anios,poblacion_futura,numero_anios2;  // Declaracion de variables

	numero_anios = pueblo1.NumerosAnios();  // Lllamadas para leer los datos
	pueblo1.PoblacionActual();
	pueblo1.TasaMigracion();
	pueblo1.TasaMortalidad();
	pueblo1.TasaNatalidad();
	pueblo1.TasaGlobal();

																			//Calculo
	poblacion_futura = pueblo1.PoblacionFutura(); 
	numero_anios2 = pueblo1.NumeroAniosPoblacionObjetivo();


   cout << "Población futura pasados " << numero_anios << " años es de" << poblacion_futura << "\n";
        
        
   cout << "Pasarán " << numero_anios2 << " años hasta llegar al doble de la población actual.\n";
	cout << "La población a la que se llegará es de " << pueblo1.poblacion_futura2 << " habitantes";
	
		
   system("pause");
}

/* Programa para saber la moda de una sucesion
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>      // Inclusión de los recursos matemáticos

using namespace std;

struct contador{
	char letra;
	int frecuencia=0;
};

int main(){
	
	const char TERMINADOR = '*';  // Defincion de variables y constantes
	char entrada;
	int frecuencia_maxima = 0;
	int pos_maxima = 0;
	const int TAMANIO = 256;
	contador V[TAMANIO]; //Definicion del struct
	


	for(int i=0;i<TAMANIO;i++){  //Inicialicacion del struct
		V[i].letra = i;
	}
	
	entrada = cin.get();

	while(entrada != TERMINADOR){
		V[entrada].frecuencia++;
		
		if(V[entrada].frecuencia > frecuencia_maxima){
			
			frecuencia_maxima = V[entrada].frecuencia;
			pos_maxima = entrada;
		}
		entrada = cin.get();

	}

	cout << "El caracter mas repetido ha sido " << V[pos_maxima].letra << " con una frecuencia de " << frecuencia_maxima << " veces";

   system("pause");
}

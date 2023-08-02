/*
Examen Febrero 2015
*/

#include <iostream>   // Inclusión de los recursos de E/S
#include<cmath>       //Incursion de los recusos matematicos

using namespace std;

int main(){   // Programa Principal

	const int TAMANIO1 = 50, TAMANIO2 = 30;   // Definicion devariables
	const int CIFRAS = 4, CIFRAS1 = 3, CIFRAS2 = 2;
	double m_original[TAMANIO1][TAMANIO1];
	double m_suavizada[TAMANIO1][TAMANIO1];
	double numero, media = 0;
	double cifra1, cifra2, cifra3, cifra4;
	
	
	for( int i = 0 ; i <= TAMANIO1 ; i++ ){   // Rellenamos la matriz 
  		for( int j = i ; j < TAMANIO1 ; j++  ){ 
			cout << " Escribe un número para introducirlo en la matriz:    ";
			cin >> numero;
			if( i == j )
				original[j][i] = numero;
			else{
				original[i][j] = numero;
				original[j][i] = numero;
			}
		}

}
		
	for( int i = 0 ; i <= TAMANIO1 ; i++ ){   // Calculamos la matriz suavizada
  		for( int j = i ; j < TAMANIO1 ; j++  ){ 

			if( i == j )
				m_suavizada[i][j] = m_original[i][j];
			
			else if ( i == 0 && ( j != ( TAMANIO1 - 1 ) ) ){
				cifra1 = m_original[i][j-1];
				cifra2 = m_original[i][j+1];
				cifra3 = m_original[i+1][j];
				
				media = ( cifra1 + cifra2 + cifra3 ) / CIFRAS1;
				
				m_suavizada[i][j] = media;
				m_suavizada[j][i] = media;
			}
			
			else if ( j == TAMANIO1- 1 && ( i != 0 ) ) {
				cifra1 = m_original[i][j-1];
				cifra2 = m_original[i+1][j];
				cifra3 = m_original[i-1][j];
				
				media = ( cifra1 + cifra2 + cifra3 ) / CIFRAS1;
				
				m_suavizada[i][j] = media;
				m_suavizada[j][i] = media;
			}
			
			else if ( ( j == TAMANIO1 - 1 ) && ( i == 0 ) ) {
				cifra1 = m_original[i][j-1];
				cifra2 = m_original[i+1][j];
				
				media = ( cifra1 + cifra2 ) / CIFRAS2;
				
				m_suavizada[i][j] = media;
				m_suavizada[j][i] = media;
			}
			
			else if ( ( j != TAMANIO1 - 1 ) && ( i != 0 ) ){
				cifra1 = m_original[i][j-1];
				cifra2 = m_original[i][j+1];
				cifra3 = m_original[i+1][j];
				cifra4 = m_original[i-1][j];
				
				media = ( cifra1 + cifra2 + cifra3 + cifra4 ) / CIFRAS;
				
				m_suavizada[i][j] = media;
				m_suavizada[j][i] = media;
			}
		
			
		}

}
	cout << "\n"; 
	
	for( int i = 0 ; i <= TAMANIO1 - 1 ; i++ ){ // Mostramos la raiz
		for( int j = 0 ; j <= TAMANIO1 - 1 ; j++ )
		cout << m_suavizada[i][j] << "  " ;
	cout << "\n";
	}
	
   system("pause");
}

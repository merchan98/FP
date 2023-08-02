/*
Examen Septiembre 2015
*/

#include<iostream>  // Inclusión de los recursos de E/S

using namespace std;



	class TableroBuscaMinas{
		
		static const int TAM_FILAS = 50;  // // Definicion devariables estaticas
		static const int TAM_COLUMNAS = 30;
		bool Tablero[TAM_FILAS][TAM_COLUMNAS];
		
		
		
		public:     //Publico
		TableroBuscaMinas(){  // Definicion del tablero
			for(int i = 0; i < TAM_FILAS; i++){
				for (int j = 0; j < TAM_COLUMNAS; j++){
					Tablero[i][j] = false;
				}
			}
		}
		
		
		void IncluirMina(int fila, int columna){  //Incluir Mina
			Tablero[fila][columna] = true;
			for( int i = 0; i < TAM_FILAS; i++){
				for( int j = 0; j < TAM_COLUMNAS; j++){
					cout << Tablero[i][j] << " " ;
				}
				cout << "\n";
			}
		}
		
		int NumMinas(int fil, int col){ 
			int solucion = 0;
			
			
			if(Tablero[fil][col] == true){
				solucion = -1;
			}
			else{
				if(fil != 0 || fil != 4 || col != 0 || col != 4){
					
						
						for(int i = fil - 1; i <= fil + 1; i++ ){
							for(int j = col -1 ; j <= col + 1; j++){
								if(Tablero[i][j] == true){
									solucion++;
								}
							}
						}
					
				}
				
				else{
				
						if(fil == 0 && col == 0){
							for(int i = 0; i <= 1; i++){
								for(int j = 0; j <= 1; j++){
									if(Tablero[i][j]== true){
										solucion++;
									}
								}
							}
						}
						
						else if(fil == TAM_FILAS - 1 && col == TAM_COLUMNAS - 1){
							for(int i = fil -1; i < TAM_FILAS; i++){
								for(int j = col - 1; j < TAM_COLUMNAS; j++){
									if(Tablero[i][j] == true){
										solucion++;
									}
								}
							}
						}
						else if(fil == TAM_FILAS -1 && col == 0){
							for(int i = fil - 1; i < TAM_FILAS; i++){
								for(int j = 0; j <= col + 1; j++){
									if(Tablero[i][j]== true){
										solucion++;
									}
								}
							}
						}
						
						else if(fil == 0 && col == TAM_COLUMNAS - 1){
							for(int i = 0; i <= 1; i++){
								for(int j = fil - 1; j < TAM_COLUMNAS; j++){
									if(Tablero[i][j]== true){
										solucion++;
									}
								}
							}
						}
					
						
						
								if(fil == 0 ){
									for(int i = 0; i <= 1; i++){
										for(int j = col - 1; j <= col + 1; j++){
											if(Tablero[i][j]== true){
												solucion++;
											}
										}
									}
							}
						
							else if(col == 0 ){
								for(int i = fil - 1; i <= fil + 1; i++){
									for(int j = 0; j <= 1; j++){
										if(Tablero[i][j]== true){
											solucion++;
										}
									}
								}
							}
							else if(fil == TAM_FILAS - 1){
									for(int i = fil - 1; i < TAM_FILAS; i++){
										for(int j = col - 1; j <= col + 1; j++){
											if(Tablero[i][j]== true){
												solucion++;
											}
										}
									}
							}
							
							else if(col == TAM_COLUMNAS - 1){
								
									for(int i = fil - 1; i <= fil + 1; i++){
										for(int j = col - 1; j < TAM_COLUMNAS; j++){
											if(Tablero[i][j]== true){
												solucion++;
											}
										}
									}
							}
			}
		}
		return solucion;
	}
	};
	
	int main(){  // Programa Principal
		
		TableroBuscaMinas tablero;  // Definicion de la clase
		int fila, columna;   // Definicion devariables
		int opcion = 0;
		int seleccion =0;
		int num_minas = 0;
		
		cout << "\n Desea introducir una mina? " ;
		cin >> opcion;
		
		while(opcion == 1){
			
			cout << "\n FILA : " ;
			cin >> fila;
			
			cout << "\n Columna: " ;
			cin >> columna;
			
			tablero.IncluirMina(fila, columna);
			
			
			cout << "\n Desea introducir una mina? ";
			cin >> opcion;
		
			
		}
		cout << "\n Desea ver cuantas minas hay al rededor de una posicion? " ;
		cin >> seleccion;
		
		while(seleccion == 1){
			cout << "FILA : " ;
			cin >> fila;
			
			cout << "COLUMNA: " ;
			cin >> columna;
			
			num_minas = tablero.NumMinas(fila, columna);
			
			cout << "----------------------------------> " << num_minas << endl; 
			cout << "\n Desea ver cuantas minas hay al rededor de una posicion?" ;
			cin >> seleccion;
			
		}
		
		
	   system("pause");
}

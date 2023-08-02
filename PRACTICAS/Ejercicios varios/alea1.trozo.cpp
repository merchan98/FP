#include<ctime>
#include<cstdlib>
#include <iostream>   // Inclusión de los recursos de E/S

using namespace std;

int main(){
 const int MIN = 1, MAX=100, NUM_VALORES = MAX-MIN+1;
 int incognita; 	// Valor a adivinar (se genera aleatoriamente) 
 int posible_numero;
 time_t t;
 srand ((int) time(&t)); // Inicializa el generador, solo 1 vez
			    // con el reloj del sistema
 incognita = (rand() % NUM_VALORES) + MIN; // MIN <= incognita <= MAX
 
cout << "Introduce el número negaivo -1 para salir \n \n";
do {
	
cout << "Introduce el número a adivinar: ";
cin >> posible_numero;

bool mayor = (posible_numero < incognita);
bool menor = (posible_numero > incognita);
	
if (mayor){

cout << "El número correcto es mayor que " << posible_numero << "\n" ;
	
}	
else {
	
	if (menor){
			
		cout << "El número correcto es menor que " << posible_numero << "\n" ;
	
	}
}	
	
}
while (incognita != posible_numero && posible_numero != -1);

if (posible_numero <= -1 ){

cout << "Grácias por jugar \n Adios \n";

}
else {


cout << "Has acertado el número.\n ENHORABUENA \n" ;
}


   system("pause");
}

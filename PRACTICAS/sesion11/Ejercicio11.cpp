#include <iostream>
#include <iostream>
using namespace std;
int i;
class Cadena{
	private:
		int contador = 0;
		int contador2 = 0;
		int repeticiones = 0;
		int contador3 = 0;
		int contador_TEMP;
		int borrar;
		char moda = 0;
		char compara = 0;
		char letra_TEMP;
		int repeticiones_TEMP;
		int static const capacidad = CHAR_MAX;
		char espacios [capacidad];
		int util;

	public:
		Cadena(){
			util = 0;
		}
	
		int Utilizados(){
			return util;
		}
	
		void Aniade(char a = ' '){
			espacios[util] = a;
			util++;
		}
	
	char Ver(int a = -1){
		if (a == -1)
			cerr << "\033[1;31mERROR: Uso correcto: \"objeto.Ver(posición)\"\033[0m" << endl;
		else
			return espacios[a];
	}

	void Borrar(char a = -1){
		if (a == -1)
			cerr << "\033[1;31mERROR: Uso correcto: \"objeto.Borrar(posición)\"\033[0m" << endl;
		else{
			int posicion = 0;
			int eliminado;
			while (posicion < util){
				if (espacios[posicion] == a){
					eliminado = posicion;
					for (i=eliminado;i<util;i++){
						espacios[i] = espacios[i+1];
						}
					util--;
				}
				else
					posicion++;
			}
		}
	}
	void Moda(){
		contador_TEMP = util;
		while (contador < contador_TEMP and espacios[contador] != 0){
			compara = espacios[contador2];
	
			while (contador3 < contador_TEMP){
		
				if (espacios[contador3] == compara){
					repeticiones++;
					contador3++;
			
					if (repeticiones > repeticiones_TEMP){
						moda = espacios[contador2];
						repeticiones_TEMP = repeticiones;
					}
				}
			
				else{
					contador3++;
				}
			}

		repeticiones = 0;
		contador3 = 0;
		contador++;
		contador2++;
		if (moda == 0){
			moda = espacios[0];
			repeticiones_TEMP = 1;
		}
	}
		cout << "Moda: " << moda << " Veces que se repite: " << repeticiones_TEMP << endl;
}

	void EliminarBloqueIneficiente(int a = 0, int b = 0){
		if (a == 0 xor b == 0){
			cerr << "\033[1;31mERROR: Introduzca el argumento de la forma (inicio, fin) empezando a contar desde la posición 1\033[0m" << endl;
		}
		else{
			cout << "Borrando elementos entre las posiciones " << a << " y " << b << endl;
			borrar = b - a;
			for (i=a-1;i<b;i++)
				espacios[i] = 0;
			contador = 0;
			for (i=a-1;i<util;i++){
				espacios[i] = espacios[b+contador];
				contador++;
			}
			util -= borrar+1;
		}
	}
	void EliminarBloqueEficiente(int a = 0, int b = 0){
		if (a == 0 xor b == 0){
			cerr << "\033[1;31mERROR: Introduzca el argumento de la forma (inicio, fin) empezando a contar desde la posición 1\033[0m" << endl;
		}
		else{
			cout << "Borrando elementos entre las posiciones " << a << " y " << b << endl;
			borrar = b-a+1;
			for (i=borrar+1;i<util;i++)
				espacios[i-borrar] = espacios[i];
		}
	}
	
};


int main(){
	char ch;
	Cadena cadena = Cadena();
	cout << "Introduzca un vector de 15 elementos" << endl;
	for (i=0;i<15;i++){
		ch = cin.get();
		if (ch == ' '){
			ch = cin.get();
		}
	else
		cadena.Aniade(ch);
	}

	for (i=0;i<cadena.Utilizados();i++){
		cout << cadena.Ver(i);
		cout << " ";
	}
	cout << endl;
	cadena.Borrar('a');

	for (i=0;i<cadena.Utilizados();i++){
		cout << cadena.Ver(i);
		cout << " ";
	}
	
	cout << endl;
	cadena.Moda();
	cadena.EliminarBloqueIneficiente(2,3);
	for (i=0;i<cadena.Utilizados();i++){
		cout << cadena.Ver(i);
		cout << " ";
	}
	cout << endl;
	cadena.EliminarBloqueEficiente(2,3);
	for (i=0;i<cadena.Utilizados();i++){
		cout << cadena.Ver(i);
		cout << " ";
	}
	cout << endl;
	return 0;
	}

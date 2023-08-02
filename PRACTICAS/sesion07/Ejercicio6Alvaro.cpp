/*Programa que calcula la suma de los primeros T factoriales de un número que esté en el intervalo [1,20], ejericio 6*/

#include <iostream>
#include <cmath>
 
using namespace std;

int LeeIntRango(int a){
int const MIN = 0;
int const MAX = 20;
while (a < MIN or a >= MAX){ 
    cout << "Introduce un número en el intervalo [1, 20): " << endl;
    cin >> a;
}
return a;
}
 

int factorial(int a){
int contador;
int fact;
fact = a;
contador = a - 1;
while (contador > 1){
    fact = fact * contador;
    contador--;
}
return fact;
}
 
int SumaFactoriales (int a){
int sumatoria = 0;
if (a == 0 or a == 1){
    sumatoria = 1;
    a = -1;
}
else{
    while (a > 0){
    sumatoria += factorial(a);
    a--;
}
}
return sumatoria;
}
 

int main(){
int a;
a = -1;
a = LeeIntRango(a);
 
cout << "La sumatoria del factorial es: " << SumaFactoriales(a) << endl;
}

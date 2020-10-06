
/*
Ejercicio 22. Escriba un programa que pida una cantidad entera de segundos y la imprima en
formato horas:minutos:segundos.
Ej: si se ingresa 7777 se debe imprimir:
2:9:37
*/

#include <iostream>

using namespace std;

int main(){

    int numero_segundos;
    int segundos = 0;
    int minutos = 0;
    int horas = 0;

    cout << "ingrese un numero de segundos: ";
    cin >> numero_segundos;

    int contador = 0;
    while (contador < numero_segundos) {

        contador += 1;
        segundos += 1;

        if(segundos == 60){
            minutos += 1;
            segundos = 0;
        }

        else if(minutos == 60){
            horas += 1;
            minutos = 0;
        }

        else {
        }
    }

    cout<< horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}

#include <iostream>
#include "tp1.h"

using namespace std;

float superficieCirculo(int radio);
long suma (int desde, int hasta);
long potencia(int base, int exponente);
long factorial(int numero);
int edad(int dia, int mes, int anio);
string romanos(int numero);
bool esPrimo(int numero);
bool contrasena(string evaluar, string correcta);
void tablaDel(int n, int *tabla);
void fibonacci(int n, int *sucesion);


int main()
{

    int ejercitacion;
    cout << "Que ejercicio desea comprobar? (1 al 10)"<< endl;
    cin >> ejercitacion;

    switch(ejercitacion){
        case 1:
//ejercicio 1
    {
    int radio;
    cout << "Ingrese el radio: ";
    cin >> radio;
    if (radio > 0){
    cout << "Superficie = ";
    cout << superficieCirculo(radio);
   }
    else
    cout << "El numero ingresado no es valido";
    }
    break;

    case 2:
//ejercicio 2
{
    int desde, hasta;
    cout << "Ingrese desde: ";
    cin >> desde;
    cin.sync();

    cout << "Ingrese hasta: ";
    cin >> hasta;
    cin.sync();

    suma(desde, hasta);

    cout << "La suma entre " << desde << " y " << hasta << " es: ";
    cout << suma(desde, hasta);
}
    break;

    case 3:
//ejercicio 3
{
    int base, exponente;
    cout << "Ingrese base: ";
    cin >> base;
    cin.sync();

    cout << "Ingrese exponente: ";
    cin >> exponente;
    cin.sync();

    cout << "La potencia entre " << base << " y " << exponente << " es: ";
    cout << potencia(base, exponente);
    }
    break;

    case 4:
//ejercicio 4
{
    int numero;
    cout << "ingrese un valor para hallar el factorial: " << endl;
    cin >> numero;
    cout << "el factorial de "<< numero << " es " << factorial(numero) << endl;
}
    break;

    case 5:
//ejercicio 5
{
    int dia, mes, anio;
    cout << "dia de nacimiento" << endl;
    cin >> dia;
    cout << "mes de nacimiento(en numero)" << endl;
    cin >> mes;
    cout << "anio de nacimiento" << endl;
    cin >> anio;
    cout << "usted tiene " << edad(dia ,mes ,anio) << " anios." << endl;
    }
    break;

    case 6:
//EJERCICIO 6
{
    int numero;
    cout << "Ingrese numero en decimal (1 a 3999): " << endl;
    cin >> numero;
    cout << "Su numero en notacion romana es " << romanos(numero) << endl;
}
    break;

    case 7:
//ejercicio 7
{

    int numero;
    cout << "ingrese un numero para evaluar si es primo" <<endl;
    cin >> numero;
    if(esPrimo(numero) == true){
        cout << "el numero es primo";
}
    else {
        cout << "el numero no es primo";
    }
    }
    break;

    case 8:
//ejercicio 8
{

    string evaluar, correcta;
    cout << "contrasenia: " << endl;
    cin >> evaluar;
    cout << "confirmar contrasenia: " << endl;
    cin >> correcta;
    if(contrasena(evaluar, correcta) == true){
        cout << "Son iguales.";
}
    else {
        cout << "No son iguales.";
    }
    }
    break;

    case 9:{

//ejercicio 9

    int vector[10], n;
    cout << "ingrese numero para hacer la tabla:" << endl;
    cin >> n;
    tablaDel(n, vector);
    for(int i = 0; i < 10; i ++)
        cout << "[" << i << "]" << vector[i] << endl;
    }
    break;

    case 10:
//ejercicio 10

    int vector[60], n;
    cout << "ingrese numero de terminos que desea ver:" << endl;
    cin >> n;
    fibonacci(n, vector);
    for (int i = 0; i < n; i++)
        cout << "[" << i << "]" << vector[i] << endl;
    break;
}
    return 0;

}

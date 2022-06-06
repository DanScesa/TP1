#ifndef TP1_H_INCLUDED
#define TP1_H_INCLUDED
#define PI 3.1416
#include <string.h>

using std::string;

//ejercicio 1
float superficieCirculo(int radio)
{
    return (PI * radio * radio);
}

//ejercicio 2
long suma (int desde, int hasta)
{
    int i;
    long aux = 0;

    for(i = desde ; i <= hasta; i++){
        aux = aux + i;
    }
    return aux;
}

//ejercicio 3
long potencia(int base, int exponente)
{
    long aux = 1;

    for(int i = 0; i < exponente; i++)
    aux = aux * base;

    return aux;
}

//ejercicio 4
long factorial(int numero)
{
    long aux = 1;
    for(int i = 1; i <= numero; i++)
        aux = aux * i;

    return aux;
}

//ejercicio 5
int edad(int dia, int mes, int anio)
{
    int aux;
    if(mes < 5){
        aux = 2022 - anio;
    }
    else{
        if(dia<=30){
            aux = 2022 - anio;
        }
        else{
            aux = 2021 - anio;
        }
    }
    return aux;
}

//EJERCICIO 6
 string romanos(int numero)
{
    int unidad, decena, centena, millar;
    string uno, diez, cien, mil;

    unidad = numero % 10;
    numero /= 10;
    decena = numero % 10;
    numero /= 10;
    centena = numero % 10;
    numero /= 10;
    millar = numero % 10;
    numero /= 10;

    switch(millar){
        case 1: mil = "M"; break;
        case 2: mil = "MM"; break;
        case 3: mil = "MMM"; break;
    }

    switch(centena){
        case 1: cien = "C"; break;
        case 2: cien = "CC"; break;
        case 3: cien = "CCC"; break;
        case 4: cien = "CD"; break;
        case 5: cien = "D"; break;
        case 6: cien = "DC"; break;
        case 7: cien = "DCC"; break;
        case 8: cien = "DCCC"; break;
        case 9: cien = "CM"; break;
    }

    switch(decena){
        case 1: diez = "X"; break;
        case 2: diez = "XX"; break;
        case 3: diez = "X"; break;
        case 4: diez = "XL"; break;
        case 5: diez = "L"; break;
        case 6: diez = "LX"; break;
        case 7: diez = "LXX"; break;
        case 8: diez = "LXXX"; break;
        case 9: diez = "XC"; break;
    }

    switch(unidad){
        case 1: uno = "I"; break;
        case 2: uno = "II"; break;
        case 3: uno = "III"; break;
        case 4: uno = "IV"; break;
        case 5: uno = "V"; break;
        case 6: uno = "VI"; break;
        case 7: uno = "VII"; break;
        case 8: uno = "VIII"; break;
        case 9: uno = "IX"; break;
    }

  return (mil + cien +  diez + uno);
}

//ejercicio 7
bool esPrimo(int numero)
{
    bool aux;
    if(numero <= 1){
    aux = false;
}
    else{
        aux = true;
        for(int i = 2 ; i < numero; i++)
            if(numero % i == 0) aux = false;
    }
    return aux;
}

//ejercico 8
bool contrasena(string evaluar, string correcta)
{
    bool aux;
    if(evaluar.compare(correcta) == 0){
        aux = true;
    }
    else {
        aux = false;
    }
    return aux;
}

//ejercicio 9
void tablaDel(int n, int *tabla)
{
    for(int i = 0; i < 10; ++i)
        tabla [i] = n * (i +1);
}

//ejercicio 10
void fibonacci(int n, int *sucesion)
{
    int i, a = 0, b = 1;
    sucesion [0] = 1;
    for(i = 0; i < n; ++i){
    sucesion[i+1] = a + b;
    a = b;
    b = sucesion[i+1];
}
}

#endif // TP1_H_INCLUDED

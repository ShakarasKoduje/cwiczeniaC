#include<stdio.h>
#include<stdlib.h>
#define _USE_MATH_DEFINES //https://stackoverflow.com/questions/1727881/how-to-use-the-pi-constant-in-c/1727896
#include<math.h>
#include<conio.h> //Po to by użyć dunkcji getch() do pauzowania programu.
#include"inputdanych.h" //plik nagłówkowy do pliku z funkcja do wprowadzania danych dla x,y,z;


double wzor(double x);


int main(){

/*
*Wprowadzanie danych przez użytkownika. Deklaracja zmiennych.
*/

    double x,y,z,m;
    wprowadzXYZ(&x, &y, &z);
    printf("\nWartosc x: %lf, y: %lf, z: %lf", x ,y ,z);

/*
*Obliczanie parametru m.
*/
    m = ((minimalna(x,y) - maksymalna(y,z)))/2.0;
    printf("\nWartosc m: %lf ",m);

    wprowadzX(&x);
    printf("\nX: %lf", x);
    y = wzor(x);  
    printf("\nWynik operacji : y=%lf", y);  
    getch();

    return 0;
}

double wzor(double x){
    double b = -1.6, m = 0.9, n = -1.4, abm=abs(b*m), tmp;
    double potega2X = pow(x, 2);
    if( abm > potega2X){
        tmp = cos(n*x);
        tmp = b * m + tmp;
        tmp = sin(tmp);
        return tmp;
    }
    else if(abm< potega2X){
        tmp = sin(x);
        tmp = b*m-tmp;
        tmp = cos(tmp);
        return tmp;
    }
    else if(abm==potega2X){
        tmp = abs(b*m*x);
        tmp = sqrt(tmp);
        tmp = pow(M_E, abs(cos(x))) + tmp;
        tmp = sqrt(tmp);
        return tmp;
    }
    else printf("Zle dane.");

    return 0;
}
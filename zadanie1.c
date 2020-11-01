#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include"inputdanych.h" //plik nagłówkowy do pliku z funkcja do wprowadzania danych dla x,y,z;




int main(){

    double x,y,z;
    wprowadzXYZ(&x, &y, &z);
    printf("\nWartosc x: %lf, y: %lf, z: %lf", x ,y ,z);

    double minimum = mniejsza(x,y,z);
    printf("\nMniejsza : %lf ", minimum);
    double maks = maksymalna(x,y);
    printf("\nWieksza : %lf ", maks);    
    if (maks == 0){
        printf("Nie dzielimy przez 0");
    }
    else
    {
        double m = minimum/maks;
        printf("m = %lf", m);
    }
    
    
    return 0;
}


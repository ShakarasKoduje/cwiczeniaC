#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include"inputdanych.h" //plik nagłówkowy do pliku z funkcja do wprowadzania danych dla x,y,z;




int main(){

    double x,y,z;
    wprowadzXYZ(&x, &y, &z);
    printf("\nWartosc x: %lf, y: %lf, z: %lf", x ,y ,z);
    
    return 0;
}



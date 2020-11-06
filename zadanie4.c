#include<stdio.h>
#include<stdlib.h>
#define _USE_MATH_DEFINES //https://stackoverflow.com/questions/1727881/how-to-use-the-pi-constant-in-c/1727896
#include<math.h>
#include<conio.h> //Po to by użyć dunkcji getch() do pauzowania programu.
#include"inputdanych.h" //plik nagłówkowy do pliku z funkcja do wprowadzania danych dla x,y,z;


double wzor(double x);

int main(){
    printf("Wprowadz wartosci dla zmiennych X, Y, Z.\n");
    double x,y,z,r;
    wprowadzXYZ(&x, &y, &z);
    printf("\nWartosc x: %lf, y: %lf, z: %lf", x ,y ,z);


    r = maksymalna(minimalna(x,y),x)/3;

    printf("\nWartosc m: %lf ",r);

    wprowadzX(&x);
    printf("\nX: %lf", x);
    y = wzor(x);  
    printf("\nWynik operacji : y=%lf", y); 
    
    getch();
    return EXIT_SUCCESS;
}

double wzor(double x){
    double a = 4.2, b = 5.3,  c = 1.5, tmp;
    double eab = pow(M_E, a+b);
    double ex = pow(M_E, x);
    if(eab > ex ){
        tmp = sin(eab) + pow(x,2);
        return tmp;
    }
    else if (eab == ex){
        tmp = atan(a*b*c) + cbrt(x);
        return tmp;
    }
    else if(eab < ex){
        tmp = sqrt(fabs(x+(a*b*c)));
        tmp = cos(tmp);
        return tmp;
    }
    else printf("Nieprawidlowe dane.");

    return 0.0;
}
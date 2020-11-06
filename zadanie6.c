#include<stdio.h>
#include<stdlib.h>
#define _USE_MATH_DEFINES //https://stackoverflow.com/questions/1727881/how-to-use-the-pi-constant-in-c/1727896
#include<math.h>
#include<conio.h> //Po to by użyć dunkcji getch() do pauzowania programu.
#include"inputdanych.h" //plik nagłówkowy do pliku z funkcja do wprowadzania danych dla x,y,z;


double wzor(double x);

int main(){
    printf("Wprowadz wartosci dla zmiennych X, Y, Z.\n");
    double x,y,t;
    wprowadzXY(&x, &y);
    printf("\nWartosc x: %lf, y: %lf", x ,y );


    t = maksymalna(minimalna(x,5), maksymalna(y,0))/5.0;


    printf("\nWartosc m: %lf ",t);

    wprowadzX(&x);
    printf("\nX: %lf", x);
    y = wzor(x);  
    printf("\nWynik operacji : y=%lf", y); 
    
    getch();
    return EXIT_SUCCESS;
}

double wzor(double x){
    double a = 3.2, b = -0.7,  c = 2.2, tmp;
    double warunek1 = fabs(1 - pow(x,2)), warunek2 = a + c;

    if(warunek1 == warunek2 ){
        tmp = x * pow(M_E,a) + pow(M_E, fabs(b*c));
        return tmp;
    }
    else if (warunek1 > warunek2 ){
        tmp = pow(sin(a*x),2) + cos(b*c);
        return tmp;
    }
    else if(warunek1 < warunek2 ){
        tmp = c * pow(x,2);
        tmp = pow(tmp, (1.0/5.0)) + a*pow(b,4); // pierwiastek 5 stopnia z x to x do potegi 1/5;
        tmp = sqrt(tmp);
        return tmp;
    }
    else printf("Nieprawidlowe dane.");

    return 0.0;
}
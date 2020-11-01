#include<stdio.h>
#include<stdlib.h>
#define _USE_MATH_DEFINES //https://stackoverflow.com/questions/1727881/how-to-use-the-pi-constant-in-c/1727896
#include<math.h>
#include<conio.h> //Po to by użyć dunkcji getch() do pauzowania programu.
#include"inputdanych.h" //plik nagłówkowy do pliku z funkcja do wprowadzania danych dla x,y,z;


double wzor(double x);

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
    wprowadzX(&x);
    printf("\nX: %lf", x);
    y = wzor(x);  
    printf("\nWynik operacji : y=%lf", y);  
    getch();  
    return 0;
}

double wzor(double x){
    double a = 0.4, b=2.3, wartosc, y;


    if (x <(a*3.5)){
        wartosc = x * pow(M_E, 2*x);
        wartosc = pow(cos(wartosc),2);
        y = (a * b * x) - wartosc;
        //printf("\n Warunek x<a*3.5 spelniony, y=%lf", y);
        return y;
    }
    else if(3.5*a <= x && x <= b){        
        wartosc = pow(M_E, 2*x);
        wartosc = wartosc + x;
        wartosc = log(wartosc);
        y = pow(a-x,2) - wartosc;
        //printf("\n Warunek 3.5*a<=x<=b spelniony, y=%lf", y);
        return y;
    }
    else if(x > b){
        wartosc = pow(M_E, 2*x);
        y = (b*x) - a + (wartosc * pow(x,2));
        y = sqrt(y);
        //printf("\n Warunek x>b spelniony, y=%lf", y);
        return y;
    }
    else printf("\nNie został spełniony żaden warunek...");
    return 0;

}
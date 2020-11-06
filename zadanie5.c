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


    r = minimalna(maksymalna(x,y), maksymalna(y,z))/maksymalna(y,z);


    printf("\nWartosc m: %lf ",r);

    wprowadzX(&x);
    printf("\nX: %lf", x);
    y = wzor(x);  
    printf("\nWynik operacji : y=%lf", y); 
    
    getch();
    return EXIT_SUCCESS;
}

double wzor(double x){
    double a = -5, b = 2.5,  z = log(b*pow(x,3)), tmp;


    if(x < a ){
        tmp = 2.8*pow(sin(a*x),2) - (b*pow(x,3)*z);
        return tmp;
    }
    else if (a <= x && x <= pow(b,2)){
        tmp = 2* pow(cos(a*x*pow(b,2)),2);
        tmp += log(z);
        return tmp;
    }
    else if(x > pow(b,2)){
        double ep = pow(M_E, 2.5*a*x);
        tmp = ep + 2 * a *b*x;
        return tmp;
    }
    else printf("Nieprawidlowe dane.");

    return 0.0;
}
#include<stdio.h>
#include<stdlib.h>

#include<math.h>
#include<conio.h> //Po to by użyć dunkcji getch() do pauzowania programu.
#include"inputdanych.h" //plik nagłówkowy do pliku z funkcja do wprowadzania danych dla x,y,z;


double wzor(double x, double z);

int main(){
    printf("Wprowadz wartosci dla zmiennych x, y, z.\n");
    double x,y,z,q;
    wprowadzXYZ(&x, &y, &z);
    printf("\nWartosc x: %lf, y: %lf, z: %lf", x ,y ,z);


    q = maksymalna(x+y+x, x*y*z) / minimalna(x+y+x, x*y*z);

    printf("\nWartosc m: %lf ",q);

    wprowadzX(&x);
    printf("\nX: %lf", x);
    y = wzor(x,z);  
    printf("\nWynik operacji : y=%lf", y); 
    
    getch();
    return EXIT_SUCCESS;
}

double wzor(double x, double z){
    double a = 0.2, b = 0.5, warunek = (-log(a)), tmp;
    
    if(x < warunek ){
        tmp = (a * pow(sin(x),2));
        tmp = b * cos(z*x) + tmp;
        return tmp;
    }
    else if (warunek <= x && x <=b){
        tmp = pow(cos(a+z*x),3);
        tmp =pow(a,b) - tmp;
        return tmp;
    }
    else if(x > b){
        tmp = b - z * pow(x,2);
        tmp = pow(tmp,6);
        tmp = 2.5*pow(a,3) + tmp;
        tmp = sqrt(tmp);
        return tmp;
    }
    else printf("Nieprawidlowe dane.");

    return 0.0;
}
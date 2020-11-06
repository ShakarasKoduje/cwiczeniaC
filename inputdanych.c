#include<stdlib.h>
#include<stdio.h>


void wprowadzXYZ(double *px, double *py, double *pz){
    double x, y, z;
    printf("\nWprowadz Wartosc dla X: \n");
    scanf("%lf", &x);
    *px = x;
    printf("\nWprowadz Wartosc dla Y: \n");
    scanf("%lf", &y);
    *py = y;
    printf("\nWprowadz Wartosc dla Z: \n");
    scanf("%lf", &z);
    *pz = z;
}

void wprowadzXY(double *px, double *py){
    double x, y, z;
    printf("\nWprowadz Wartosc dla X: \n");
    scanf("%lf", &x);
    *px = x;
    printf("\nWprowadz Wartosc dla Y: \n");
    scanf("%lf", &y);
    *py = y;
}


void wprowadzX(double *px){
    double x;
    printf("\nWprowadz Wartosc dla X: \n");
    scanf("%lf", &x);
    *px = x;
}
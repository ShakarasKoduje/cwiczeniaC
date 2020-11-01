#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void wprowadzXYZ(double *, double *, double *);

int main(){

    double x,y,z;
    wprowadzXYZ(&x, &y, &z);
    printf("\nWartosc x: %lf, y: %lf, z: %lf", x ,y ,z);
    
    return 0;
}

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

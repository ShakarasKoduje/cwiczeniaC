#include<stdlib.h>
#include<stdio.h>

double minimalna(double a, double b){

    if(a< b){
        printf("\n%lf, jest mniejsze od %lf", a,b);
        return a;
    }
    else if (a>b)
    {
        printf("\n%lf, jest mniejsze od %lf", b,a);
        return b;
    }
    else if (a == b)
    {
        printf("\n%lf, jest rowne %lf",a,b);
        return a;
    }
    else printf("\nNieprawidlowe dane");

    return 0.0;
}
double maksymalna(double x, double y){
    if (x>y) return x;
    else if (y>x) return y;
    else if (x==y) return x;
    else if (x==0 && y==0) return 0;     
}
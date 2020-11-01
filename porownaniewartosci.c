#include<stdlib.h>
#include<stdio.h>



double mniejsza(double x, double y, double z){

    if(x+y < y-z){
        printf("\n%lf + %lf, jest mniejsze od %lf - %lf", x,y,y,z);
        return x+y;
    }
    else if (x+y>y-z)
    {
        printf("\n%lf - %lf, jest mniejsze od %lf + %lf", y,z,x,y);
        return y-z;
    }
    else if (x+y == y-z)
    {
        printf("\n%lf + %lf, jest rowne %lf - %lf", x,y,y,z);
        return x+y;
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
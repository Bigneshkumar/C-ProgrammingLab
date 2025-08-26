#include <stdio.h>
#include <math.h>

int main() {
    float pn,nn,c,c1,f,f1;

    printf("Enter a postivie number: ");
    scanf("%f", &pn);
    printf("Enter a negative number: ");
    scanf ("%f",&nn);
    c=ceil(pn);
    c1=ceil(nn);
    f=floor(pn);
    f1=floor(nn);
    printf ("ceiling value for postive number:%f",c);
    printf ("\n ceiling value for negative number:%f",c1);
    printf ("\n floor value for postive number:%f",f);
    printf ("\n floor value for negative number:%f",f1);
    return 0;
}
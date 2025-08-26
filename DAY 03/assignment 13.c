#include<stdio.h>
int main()
{
    float l,b,a,p;
    printf("enter length:");
    scanf("%f",&l);
    printf("enter breadth:");
    scanf("%f",&b);
    a=l*b;
    p=2*(l+b);
    printf("area=%.f",a);
    printf("\n perimeter=%.f",p);
    return 0;
}
#include<stdio.h>

int main(){

int a,ld;

printf("enter value for a:");

scanf("%d",&a);

ld=a-(a/10)*10;

printf("without using modulus operator");

printf("\n last digit:%d", ld);

printf("\n enter value for a:");

scanf("%d",&a);

ld=a%10;

printf("using modulus operator");

printf("\n last digit:%d",ld);

return 0;

} 
#include <stdio.h>

int main() 
{
   float c,f,temp;
   printf ("Enter temperature in celcius: ");
   scanf ("%f", &c);
   f=(c*(9/5)+32);
   printf ("temperate to fahrenheit=%.2f\n", f);
   printf ("Enter temperature in fahrenheit: ");
   scanf ("%f", &c);
   c=((f-32)*5/9);
   printf ("temperate to celcius=%.2f", c);
   return 0;
}

#include <stdio.h>
int main (){
    int i,j,n=4;
    for (i=0; i<n; i++){
        for (j=1; j<=n-i; j++){
            printf ("%d", j);
        }
        for (j=1; j<=2*i-1; j++){
            printf (" ");
        }
        for (j=n-i; j>=1; j--){
            printf ("%d",j);
        }
            printf ("\n");
        }
    return 0;
}
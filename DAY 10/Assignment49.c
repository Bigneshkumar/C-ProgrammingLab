#include<stdio.h>
int main()
{
    int n, rev=0, org, dig;
    printf("Enter Any Number:- ");
    scanf("%d", &n);
    org = n;
    while(n!=0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    if(org==rev)
        printf("%d is a Palindrome Number", org);
    else
        printf("%d is not a Palindrome Number", org);
    return 0;
}
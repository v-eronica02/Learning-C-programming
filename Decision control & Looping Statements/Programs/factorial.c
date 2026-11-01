//program to calculate the factorial of given number
#include <stdio.h>
int main()
{
    int n,fact=1;

    printf("Enter a positive integer:");
    scanf("%d",&n);

    if(n<1)//for invalid input when entered input is not positive 
    {
        printf("Invalid input! Enter a positive integer");
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial=%d",fact);
    return 0;
}

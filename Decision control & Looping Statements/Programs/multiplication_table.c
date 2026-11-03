//program to generate multiplication table of a number entered by user
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("MULTIPLICATION TABLE");
    for(int i=1;i<=12;i++)
    {
        printf("\n %d X %d = %d",n ,i, (n*i));
    }
    return 0;
}

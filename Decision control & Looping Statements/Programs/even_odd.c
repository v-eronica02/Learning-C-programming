// program to check whether a number is even or odd
# include<stdio.h>
# include<conio.h>
int main()
{
    int n;
    printf("\n Enter a number:");
    scanf("%d",&n);

    if(n%2==0)
    printf("The number is even");
    else 
    printf("The number is odd");

    return 0;
}

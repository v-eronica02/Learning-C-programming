//program to print the largest of two numbers
# include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of first number:");
    scanf("%d",&a);
    printf("Enter the value of second number:");
    scanf("%d",&b);

    if(a>b)
    printf("The larger number is a: %d",a);
    else
    printf("The larger number is b: %d",b);
    return 0;
}

// program to demonstrate arithmetic operators
# include<stdio.h>

int main()
{
    int a,b;
    float fdiv;
    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);
    
    printf("\nAddition: %d",a+b);
    printf("\nSubtraction: %d", a-b);
    printf("\nMultiplication: %d",a*b);
    printf("\nInteger division: %d",a/b);
    printf("\nModulo division: %d",a%b);
    fdiv=(float)a/b;
    printf("\nDivision: %f", fdiv);

    return 0;
}

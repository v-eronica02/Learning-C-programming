//program to convert Fahrenheit to celsius
# include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&f);
    c=(0.56)*(f-32);
    printf("\nThe temperature in degree celsius is: %.2f",c);
    return 0;

}

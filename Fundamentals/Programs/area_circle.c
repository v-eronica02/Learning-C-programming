//program to calculate the area of a circle
#include <stdio.h>
#include <conio.h>
int main()
{
    float r;
    double a,c;
    printf("Enter radius of circle: ");
    scanf("%f",&r);

    a=3.14*r*r;
    c=2*3.14*r;

    printf("Area= %.4lf",a);
    printf("\nCircumference= %.4lf",c);
    return 0;
}

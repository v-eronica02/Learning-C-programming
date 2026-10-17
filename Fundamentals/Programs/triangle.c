// program to calculate the area of triangle using Hero's formula
# include<stdio.h>
# include<math.h>
int main()
{
    float a,b,c, area,S;
    printf("\n Enter the lengths of the three sides of triangle:");
    scanf("%f %f %f", &a, &b, &c);
    S= (a+b+c)/2;
    
    area= sqrt(S*(S-a)*(S-b)*(S-c));
    printf("\n Area = %f", area);
    return 0;
}

// program to calculate simple interest
# include<stdio.h>
int main()
{
    float p,t,r;
    printf("Enter your principle amount:");
    scanf("%f", &p);

    printf("Enter your time:");
    scanf("%f", &t);
    
    printf("Enter the rate of interest:");
    scanf("%f", &r);

    printf("Simple interest = %f", (p*t*r)/100);
    return 0;
}

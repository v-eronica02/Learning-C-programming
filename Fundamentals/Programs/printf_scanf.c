// program to demonstrate the use of printf and scanf statements to read and print values of variables of different data types
# include<stdio.h>
main()
{
    int n;
    float a;
    char c;
    double p;
    long int pop;
    char m[10];

    printf("\n Enter the value of n :");
    scanf("%d", &n);
    printf("\n Enter the value of a :");
    scanf("%f", &a);
    printf("\n Enter the value of c :");
    scanf("%c", &c);
    printf("\n Enter the value of p:");
    scanf("%e", &p);
    printf("\n Enter the population of india :");
    scanf("%ld", &pop);
    printf("\n Enter the message :");
    scanf("%s", &m);

    printf("\n NUM = %d \t AMT = %f  \t CODE = %c \n PI = %e \t POPULATION OF INDIA = %ld \n MESSAGE = %s", n, a, c, p, pop, m);
    return 0;
}

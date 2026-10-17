//program to find the largest of three numbers
# include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of first number:");
    scanf("%d",&a);
    printf("Enter the value of second number:");
    scanf("%d",&b);
    printf("Enter the value of third number:");
    scanf("%d",&c);
    //int a=10,b=5,c=50;

    if(a>b)
    {
        if(a>c)
        printf("The largest number is a: %d",a);

        else
        printf("The largest number is c: %d",c);
    }
    else
    {
        if(b>c)
        printf("The largest number is b: %d",b);

        else
        printf("The largest number is c: %d",c);
    }
    return 0;

}

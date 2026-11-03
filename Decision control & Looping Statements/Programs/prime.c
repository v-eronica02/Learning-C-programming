//program to check whether a number is prime or not 
#include <stdio.h>

int main()
{
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0 && num > 1)
        printf("%d is a Prime Number", num);
    else
        printf("%d is Not a Prime Number", num);

    return 0;
}

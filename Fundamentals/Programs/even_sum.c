//program to print the count of even numbers between 1 and 200. Also print their sum
#include <stdio.h>
int main()
{
    int c=0,sum=0;
    for(int i=1;i<=200;i++)
    {
        if (i%2==0)
        {
            sum=sum+i;
            c++;
            printf("%d\t",i);
        }
    }
    printf("\n");
    printf("The number of even numbers between 1 & 200 is=%d\n",c);
    printf("The sum of the even numbers=%d\n",sum);
    return 0;
}

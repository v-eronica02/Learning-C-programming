//program to print numbers from 1 to 10
# include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==9)
        continue;
        else
        printf("%d ",i);
    }
    return 0;
}

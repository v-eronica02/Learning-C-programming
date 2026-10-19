// password checker
# include<stdio.h>
int main()
{
    int password;
    printf("Enter the password:");
    scanf("%d", &password);

    if(password == 2300)
    printf("Welcome, ANWESHA");

    if(password != 2300)
    printf("Incorrect password ! TRY AGAIN");

    return 0;
}

//program to enter a character and determine whether it is a vowel or not
# include<stdio.h>
# include<conio.h>
main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    printf("\n%c is a vowel", ch);
    else
    printf("\n%c is a consonant",ch);
    return 0;
}

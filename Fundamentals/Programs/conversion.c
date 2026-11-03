//program to read an integer and display its value in decimal, binary, octal and hexadecimal notation
#include <stdio.h>

int main()
{
    int num, temp, binary[32], i = 0, j;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Decimal      = %d\n", num);
    printf("Octal        = %o\n", num);
    printf("Hexadecimal  = %x\n", num);

    temp = num;//copies original number into temp

    while(temp > 0)//loop continues until temp =0
    {
        binary[i] = temp % 2;// % gives the remainder and stores it in array
        temp = temp / 2;//updates the number for next division
        i++;//moves to next position in array
    }

    printf("Binary       = ");

    for(j = i - 1; j >= 0; j--)//printing the array in reverse order 
    {
        printf("%d", binary[j]);
    }

    return 0;
}
/*CONCEPT BEHIND BINARY CONVERSION 
STEP 1 -> divide number by 2
STEP 2 -> store the remainder (0 & 1)
STEP 3 -> divide the quotient again by 2 .
STEP 4 -> repeat until the quotient becomes 0
STEP 5 -> read the remainders in reverse order using array
*/

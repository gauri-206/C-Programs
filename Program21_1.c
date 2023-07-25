/* Write a program which display ASCII table. Table contains symbol, 
   Decimal, Hexadecimal and Octal representation of every member from 0 to 255
*/

#include<stdio.h>

void DisplayASCII()
{
    char cASCII ='\0';
    printf("enter character: \n");
    scanf("%c", &cASCII);
    printf("%d\n", cASCII);
}

int main()
{
    DisplayASCII();
    return 0;
}
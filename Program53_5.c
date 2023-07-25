// Write a recursive progarm which display below pattern
// Input : 5
// output:  a  b  c  d  e

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;
    static char ch = 'a';

    if(iCnt <= iNo)
    {
        printf("%c\t", ch);
        ch++;
        iCnt++;
        Display(iNo);
    } 
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
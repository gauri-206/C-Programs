// Write a recursive progarm which display below pattern
//  Input : 5
//  output : *  *  *  *  *

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt =1;

    if(iCnt <= iNo)
    {
        printf("*\t");
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
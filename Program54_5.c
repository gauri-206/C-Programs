// Write a recursive progarm which accept number from user and return product of its digits
// Input : 523
// Output :  30

#include<stdio.h>

int Multiplication(int iNo)
{
    int Digit =0;
    static int Mult =1;
    if(iNo != 0)
    {

        Digit = iNo%10;
        Mult = Mult * Digit;
        iNo = iNo/10;
        Multiplication(iNo);
    } 

    return Mult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = Multiplication(iValue);
    printf("Multiplication digits: %d\n", iRet);

    return 0;
}
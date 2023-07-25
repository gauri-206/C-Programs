// Write a recursive progarm which accept number from user and return summation of its digits
// Input : 879
// Output :  24

#include<stdio.h>

int Summation(int iNo)
{
    int Digit =0;
    static int Sum =0;
    if(iNo != 0)
    {

        Digit = iNo%10;
        Sum = Sum + Digit;
        iNo = iNo/10;
        Summation(iNo);
    } 

    return Sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = Summation(iValue);
    printf("Summation of digits: %d\n", iRet);

    return 0;
}
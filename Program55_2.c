/*
    Write a recursive program whichb accept number from user and 
    return largest digit
    Input : 87983
    Output : 9
*/

#include<stdio.h>

int LargestDigit(int iNo)
{
    static int iMax = 0;
    static int iDigit =0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMax< iDigit)
        {
            iMax = iDigit;
        }
        iNo = iNo/10;
        LargestDigit(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = LargestDigit(iValue);
    printf("Largest int the number is: %d\n", iRet);

    return 0;
}
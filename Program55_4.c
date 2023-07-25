/*
    Write a recursive program whichb accept number from user and 
    return smallest digit
    Input : 87983
    Output : 3
*/

#include<stdio.h>

int SmallestDigit(int iNo)
{
    static int iMin = 9;
    static int iDigit =0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMin> iDigit)
        {
            iMin = iDigit;
        }
        iNo = iNo/10;
        SmallestDigit(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = SmallestDigit(iValue);
    printf("Smallest int the number is: %d\n", iRet);

    return 0;
}
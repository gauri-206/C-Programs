/*
    Write a recursive program whichb accept number from user and 
    return smallest digit
    Input : 87983
    Output : 3
*/

#include<stdio.h>

int ReverseDigit(int iNo)
{
    static int iDigit =0;
    static int Rev =0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        Rev  = (10*Rev) + iDigit;
        iNo = iNo/10;
        ReverseDigit(iNo);
    }
    return Rev;
}

int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = ReverseDigit(iValue);
    printf("Reverse number is: %d\n", iRet);

    return 0;
}
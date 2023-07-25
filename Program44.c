// find factorial of given number

#include<stdio.h>

typedef unsigned long int ULONG;

ULONG CalculateFactorial(ULONG iNo)
{
    int iCnt = 0;
    ULONG iFact =1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = CalculateFactorial(iValue);
    
    printf("Result is: %ld\n ", iRet);
    return 0;
} 
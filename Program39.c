// find factorial of given number

#include<stdio.h>

int CalculateFactorial(int iNo)
{
    int iCnt = 0;
    int iFact =1;
    for(iCnt = iNo; iCnt>= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = CalculateFactorial(iValue);
    
    printf("Result is: %d\n ", iRet);
    return 0;
} 
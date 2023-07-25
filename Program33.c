// find factorial of given number

#include<stdio.h>

int CalculateFactorial(int iNo1)
{
    int iCnt = 0;
    int iFact =1;
    for(iCnt = 1; iCnt<= iNo1; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue1);

    iRet = CalculateFactorial(iValue1);
    
    printf("Result is: %ld\n ", iRet);
    return 0;
} 
// find factorial of given number

#include<stdio.h>

unsigned long int CalculateFactorial(unsigned long int iNo)
{
    int iCnt = 0;
    unsigned long int iFact =1;
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    unsigned long int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = CalculateFactorial(iValue);
    
    printf("Result is: %ld\n ", iRet);
    return 0;
} 
#include<stdio.h>

int CalculateFactorial(int iNo)
{
    int iCnt = 0;
    int iFact =1;

    iCnt = iNo;
    while( iCnt>= 1)
    {
        iFact = iFact * iCnt;
        iCnt--;
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
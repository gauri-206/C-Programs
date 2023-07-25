// find power of given numbers from user

#include<stdio.h>

int CalculatePower(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iResult =1;
    for(iCnt = 1; iCnt<= iNo2; iCnt++)
    {
        iResult = iResult * iNo1;
    }
    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2=0;
    int iRet = 0;

    printf("Enter base: \n");
    scanf("%d", &iValue1);

    printf("Enter power: \n");
    scanf("%d", &iValue2);

    iRet = CalculatePower(iValue1, iValue2);
    
    printf("Resultn is: %d\n ", iRet);
    return 0;
} 
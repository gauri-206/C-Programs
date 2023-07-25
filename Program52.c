#include<stdio.h>
int CountDigit(int iNo)
{
    int iCnt = 0;
    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);
    
    iRet = CountDigit(iValue);
    printf("Number of digit are : %d\n", iRet);

    return 0;
}
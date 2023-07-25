#include<stdio.h>
int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    
    iDigit =1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
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
// Write a program which accept numberv from uder and count frequency of 4 in it

#include<stdio.h>

int CountFour(int iNo)
{
    int iCount = 0;
    int iDigit = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return  iCount;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);
    iRet = CountFour(iValue);
    printf("Frequency of 4 is: %d\n", iRet);
}
// write a program which accept number from user an return the count of even digits

#include<stdio.h>
int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2)==0)
        {
            iCnt++;   
        }
        iNo = iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);
    printf("count of even digits in %d are: %d\n", iValue, iRet);

    return 0;
}
#include<stdio.h>
#include<stdbool.h>

int CountDigitsFrequency(int iNo1, int iNo2)
{   
    int iCnt = 0;
    int iDigit =0;
    
    if(iNo2<0)
    {
        iNo2 = -iNo2;
    }
    if(iNo1<0)
    {
        iNo1 = -iNo1;
    }
    if(iNo2>9 || iNo2<0)
    {
        printf("Enter number in between 0 to 9\n");
        return 0;
    }
    while (iNo1 != 0)
     {
        iDigit = iNo1%10;
        if(iDigit == iNo2)
        {
            iCnt++;
        }
        iNo1 = iNo1/10; 
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iFreq = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    printf("Enter digit which  you print: \n");
    scanf("%d", &iFreq);
    
    iRet = CountDigitsFrequency(iValue, iFreq);
    printf("Frequency of %d is in %d : %d\n", iFreq,iValue, iRet);
    
    return 0;
}
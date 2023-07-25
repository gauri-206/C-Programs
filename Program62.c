#include<stdio.h>
#include<stdbool.h>

bool CountDigitsFrequency(int iNo1, int iNo2)
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
        printf("Enter number in between 0 to 9");
    }
    while (iNo1 != 0)
     {
        iDigit = iNo1%10;
        if(iDigit == iNo2)
        {
            break;
        }
        iNo1 = iNo1/10; 
    }
    if(iDigit == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    } 
}

int main()
{
    int iValue = 0;
    int iFreq = 0;
    bool bRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    printf("Enter digit which  you print: \n");
    scanf("%d", &iFreq);
    
    bRet = CountDigitsFrequency(iValue, iFreq);

    if(bRet == true)
    {
        printf("%d is present in %d", iFreq, iValue);
    }
    else
    {
        printf("%d is not present in %d", iFreq, iValue);
    }
    return 0;
}
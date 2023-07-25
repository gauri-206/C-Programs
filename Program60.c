#include<stdio.h>
#include<stdbool.h>

int CountDigitsFrequency(int iNo)
{   
    int iCnt = 0;
    int iDigit =0;

    while (iNo != 0)
     {
        iDigit = iNo%10;
        if(iDigit == 8)
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
    
    iRet = CountDigitsFrequency(iValue);
    printf("Frequency of 8 is: %d\n", iRet);
    return 0;
}
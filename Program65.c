#include<stdio.h>
#include<stdbool.h>

int CountOddDigits(int iNo1)
{   
    int iCnt = 0;
    int iDigit =0;
      
    if(iNo1<0)
    {
        iNo1 = -iNo1;
    }
   
    while (iNo1 != 0)
     {
        iDigit = iNo1%10;
        if((iDigit %2) != 0)
        {
            iCnt++;
            printf("%d\n",iDigit);
        }
        iNo1 = iNo1/10; 
    }
    return iCnt;
}

int main()
{
    int iValue = 0;;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = CountOddDigits(iValue);
    printf("Frequency of Odd digit is in %d : %d\n",iValue, iRet);
    
    return 0;
}
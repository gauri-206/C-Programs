#include<stdio.h>
#include<stdbool.h>

int ReverseNumber(int iNo1)
{   
    int iCnt = 0;
    int iDigit =0;
    int ReverseNum =0;
      
    if(iNo1<0)
    {
        iNo1 = -iNo1;
    }
   
    while (iNo1 != 0)
     {
        iDigit = iNo1%10;
        ReverseNum = (ReverseNum * 10) + iDigit;
        iNo1 = iNo1/10; 
    }
    return ReverseNum;
}

int main()
{
    int iValue = 0;;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = ReverseNumber(iValue);
    printf("reverse number is %d\n",iRet);
    
    return 0;
}
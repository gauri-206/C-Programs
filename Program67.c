#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo1)
{   
    int iCnt = 0;
    int iDigit =0;
    int ReverseNum =0;
    int iNum = iNo1;
      
    while (iNo1 != 0)
     {
        iDigit = iNo1%10;
        ReverseNum = (ReverseNum * 10) + iDigit;
        iNo1 = iNo1/10; 
    }
    if(ReverseNum == iNum)
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
    int iValue = 0;;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    bRet = CheckPalindrome(iValue);    
    if(bRet == true)
    {
        printf("%d is Palindrome..\n", iValue);
    }
    else
    {
        printf("%d is not Palindrome..\n", iValue);
    }
    return 0;
}
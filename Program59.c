#include<stdio.h>
#include<stdbool.h>

bool DisplayDigits(int iNo)
{
    int iDigit =0;
    bool bFlag = false;
    iDigit =1;
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == 8)
        {
            bFlag = true;
            break;
        }
        iNo = iNo/10; 
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d", &iValue);
    
    bRet = DisplayDigits(iValue);
    if(bRet == true)
    {
        printf("Digit 8 is present in number..\n");
    }
    else
    {
        printf("Digit 8 is not present in number..\n");
    }
    
    return 0;
}
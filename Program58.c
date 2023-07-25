#include<stdio.h>
#include<stdbool.h>

bool DisplayDigits(int iNo)
{
    int iDigit =0;

    iDigit =1;
    while(iNo != 0)
    {
        iDigit = iNo%10;
        
        if(iDigit == 8)
        {
            break;
        }
        iNo = iNo/10; 
    }
    if(iNo == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
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
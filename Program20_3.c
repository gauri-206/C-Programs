// Accept character from user and check whether it is Digit or not (0-9)

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch >= 48) && (ch <= 57))
    {
        return TRUE;
    } 
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("it is Digit \n");
    }
    else
    {
        printf("it is not Digit \n");
    }

    return 0;
}
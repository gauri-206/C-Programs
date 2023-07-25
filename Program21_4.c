/*
    Accept character from user and checj whether it is special symbol
    or not (!, @, #, $, %, ^, &, *). 
*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef bool BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch >= 32) && (ch <= 47) || (ch >= 58) && (ch <= 64))
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("it is Special character \n");
    }
    else
    {
        printf("it is not Special Character \n");
    }

    return 0;
}

/*
    Write a program which accept string from user and check whether it contains
    vowels in it or not
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL bFlag = FALSE;

    for(int iCnt =0; str[iCnt] != 0; iCnt++)
    {
        if((str[iCnt] == 'A') || (str[iCnt] == 'E') || (str[iCnt] == 'I') || (str[iCnt] == 'O') || (str[iCnt] == 'U') || (str[iCnt] == 'a') || (str[iCnt] == 'e') || (str[iCnt] == 'i') || (str[iCnt] == 'o') || (str[iCnt] == 'u'))
        {
            bFlag =  TRUE;
        }
    }

    if(bFlag == TRUE)
    {
        return TRUE;
    }
    else
    {
        return  FALSE;
    }
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("It contains vowels....\n");
    }
    else
    {
        printf("There is no vowels....\n");
    }
}
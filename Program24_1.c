/*
      Write a program which accept string from user and accept one character.
      chaeck whether thet character is present in string or not
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int flag =0;
    for(int iCnt =0; str[iCnt] != '\0'; iCnt++ )
    {
        if(str[iCnt] == ch)
        {
            flag = 1;
        }
    }

    if(flag == 1)
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
    char Arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter the string: \n");
    scanf("%[^\n]s", Arr);

    getchar();

    printf("Enter the character: \n");
    scanf("%c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character is found....\n");
    }
    else
    {
        printf("Character is not found.....\n");
    }

    return 0;
}

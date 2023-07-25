/*
      Write a program which accept string from user and accept one character.
      Return index of Last occurence of that character
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int LastChar(char *str, char ch)
{
    int iCount =0;
    int Flag =0;
    for(int iCnt=0; str[iCnt] != '\0'; iCnt++)
    {
        if((str[iCnt] == ch))
        {
            Flag =1;
            iCount = iCnt;
        }
    }
    if(Flag)
    {
        return iCount;
    }
    else
    {
        iCount = -1;
        return iCount;
    }
}

int main()
{
    char Arr[20];
    char cValue;
    int bRet = FALSE;

    printf("Enter the string: \n");
    scanf("%[^\n]s", Arr);

    getchar();

    printf("Enter the character: \n");
    scanf("%c", &cValue);

    bRet = LastChar(Arr, cValue);

    printf("Last occurence of Character is: %d \n", bRet);
   
    return 0;
}

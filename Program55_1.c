/*
    Write a recursive program which accept string from user and count 
    white apaces.

    Input :    HE llo WOr lD
    output : 3
*/

#include<stdio.h>

int WhiteSpaces(char *str)
{
    static int iCount =0;
    static int iCnt =0;

    if(str[iCnt] != '\0')
    {  
        if(str[iCnt] == ' ')
        {
            iCount++;
        }
        iCnt++;
        WhiteSpaces(str);
    }
    
    return iCount;
}

int main()
{ 
    char Arr[20];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^\n]s", Arr);

    iRet = WhiteSpaces(Arr);
    printf("Count of white spaces are: %d\n", iRet);

    return 0;
}
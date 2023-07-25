// Write a recursive progarm which accept string from user and count number of character
// Input : Hello
// Output :  5 

#include<stdio.h>

int StrLen(char *str)
{
    static int iCnt =0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        StrLen(str);
    } 
    return iCnt;
}

int main()
{
    char Arr[20];

    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^\n]s", Arr);

    iRet = StrLen(Arr);

    printf("Length of string is: %d\n", iRet);

    return 0;
}
/*
    Write a program which accept string from user and count number of
    capital character
*/

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt =0;
    int iCount =0;

    while(str[iCnt] != '\0')
    {
        if((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
        {
            iCount++;
        }
        iCnt++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);

    printf("Count of Capital characters are: %d\n", iRet);

    return 0;
}
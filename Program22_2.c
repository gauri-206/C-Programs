/*
    Write a program which accept string from user and count number of
    small character
*/

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt =0;
    int iCount =0;

    while(str[iCnt] != '\0')
    {
        if((str[iCnt] >= 'a') && (str[iCnt] <= 'z'))
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

    iRet = CountSmall(Arr);

    printf("Count of Small characters are: %d\n", iRet);

    return 0;
}
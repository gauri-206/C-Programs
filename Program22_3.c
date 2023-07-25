/*
    Write a program which accept string from user and count number of
    capital character
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCnt =0;
    int iCaptal =0;
    int iSmall =0;
    int iCount =0;

    while(str[iCnt] != '\0')
    {
        if((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
        {
            iCaptal++;
        }
        if((str[iCnt] >= 'a') && (str[iCnt] <= 'z'))
        {
            iSmall++;
        }
        iCnt++;
    }
    iCount = iSmall - iCaptal;
    return (iCount);
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("Difference between Capital characters  and small characters are: %d\n", iRet);

    return 0;
}
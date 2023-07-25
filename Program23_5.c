/*
    Write a program which accept string from user and count number of white spaces
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt =0;
    int iCount = 0;
    for(iCnt  =0; str[iCnt] != '\0'; iCnt++)
    {
        if((str[iCnt]== ' '))
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet =0;

    printf("Enter the String: \n");
    scanf(" %[^'\n']s", Arr);

    iRet = CountWhite(Arr);

    printf("Number of spaces are: %d\n", iRet);

    return 0;

}
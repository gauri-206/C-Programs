/*
    Write a program which accept string from user and toggle case
*/

#include<stdio.h>

void Strtogglex(char *str)
{
    int iCnt =0;
    for(iCnt  =0; str[iCnt] != '\0'; iCnt++)
    {
        if((str[iCnt]>='A') && (str[iCnt] <= 'Z'))
        {
            str[iCnt] = str[iCnt] + 32;
        }

        else if((str[iCnt]>='a') && (str[iCnt] <= 'z'))
        {
            str[iCnt] = str[iCnt] - 32;
        }
    }
}

int main()
{
    char Arr[20];

    printf("Enter the String: \n");
    scanf(" %[^'\n']s", Arr);

    Strtogglex(Arr);

    printf("Modified string is: %s\n", Arr);

    return 0;
}
/*
    Write a program which accept string from user and display it in reverse order
*/

#include<stdio.h>

void StrRev(char *str)
{
    int i, j;
    char temp;
    int iCnt =0;

    while(str[iCnt] != 0)
    {
        iCnt++;
    } 

    for(i=0, j= iCnt-1;   i<j;   i++, j-- )
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char Arr[20];
    
    printf("Enter the string: \n");
    scanf(" %[^'\n']s", Arr);

    StrRev(Arr);

    printf("Modified string is: %s\n",Arr);

    return 0;
}
/*
    Write a recursive program which accept string from user and count 
    number of small characters.

    Input :    HElloWOrlD
    output : 5
*/

#include<stdio.h>

int SmallChar(char *str)
{
    static int iCount =0;
    static int iCnt =0;

    if(str[iCnt] != '\0')
    {  
        if((str[iCnt] >= 'a') && (str[iCnt] <= 'z'))
        {
            iCount++;
        }
        iCnt++;
        SmallChar(str);
    }
    
    return iCount;
}

int main()
{ 
    char Arr[20];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^\n]s", Arr);

    iRet = SmallChar(Arr);
    printf("Count of small characters are: %d\n", iRet);

    return 0;
}
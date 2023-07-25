/*
    Write a program which accept string from user and display only digits from that string
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    int iCnt =0;
    char idigit;
    for(iCnt  =0; str[iCnt] != '\0'; iCnt++)
    {
        if((str[iCnt]>= '0') && (str[iCnt] <= '9'))
        {
            idigit = str[iCnt];
            printf("%c ", idigit);
             
        }
    }
    printf("\n");
}

int main()
{
    char Arr[20];

    printf("Enter the String: \n");
    scanf(" %[^'\n']s", Arr);

    DisplayDigit(Arr);

    return 0;

}
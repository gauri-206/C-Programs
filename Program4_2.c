// Write a program which accept number from user and check whether that number is greater than 100 or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   ChkGreater
//    Input :           Integer
//    Output :          Greater or Smaller
//    Discription:      To check given number is greater than 100 or smaller than 100
//    Author :          Kajal Mahadev Jadhav
//    Date :            4/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

BOOL ChkGreater(BOOL iNo)
{
    if(iNo>100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number: ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == 1)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }
    return 0;
}
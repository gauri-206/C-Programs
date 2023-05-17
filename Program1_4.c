#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   Display
//    Input :           Integer
//    Output :          Divisible by 5 or Not Divisible by 5
//    Discription:      Display number is divisible by 5 or not
//    Author :          Kajal Mahadev Jadhav
//    Date :            23/04/2023
//
////////////////////////////////////////////////////////////////////////////////////

int Check (int iNo)
{
    if ((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if (bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}
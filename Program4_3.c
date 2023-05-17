// Write a program which accept two numbers and check whether numbers are equal or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   ChkEqual
//    Input :           Integer, Integer
//    Output :          Equal or Not Equal 
//    Discription:      Check given numbers are Equal or Not
//    Author :          Kajal Mahadev Jadhav
//    Date :            4/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == 1)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    return 0;
}
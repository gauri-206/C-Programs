#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   Display
//    Input :           Integer
//    Output :          *
//    Discription:      Display 5 times * on the Screen
//    Author :          Kajal Mahadev Jadhav
//    Date :            23/04/2023
//
////////////////////////////////////////////////////////////////////////////////////


void Accept (int iNo)
{
    int iCnt = 0;

    for (iCnt=0; iCnt<iNo; iCnt++)
    {
        printf("*");
    }
}

////////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function
////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}
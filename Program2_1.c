#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   Display
//    Input :           Integer
//    Output :          *
//    Discription:      Display * on the Screen
//    Author :          Kajal Mahadev Jadhav
//    Date :            23/04/2023
//
////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iNo; iCnt++)
    {
        printf("*");
    }
    printf("\n");
}

////////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function
////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}
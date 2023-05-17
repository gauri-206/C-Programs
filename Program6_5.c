// Write a program which accept number from user and display its table in reverse order.

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   TableRev
//    Input :           Integer
//    Output :          Integer
//    Discription:      Display Table of given number in reverse order
//    Author :          Kajal Mahadev Jadhav
//    Date :            4/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    iCnt = 10;
    while (iCnt>=1)
    {
        printf(" %d ", iNo*iCnt);
        iCnt--;
    }
}
////////////////////////////////////////////////////////////////////////////////////
//    Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    TableRev(iValue);
    return 0;
}
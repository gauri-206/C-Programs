// Write a program which accept number from user and display its table

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   Table
//    Input :           Integer
//    Output :          Integer
//    Discription:      Display Table of given number
//    Author :          Kajal Mahadev Jadhav
//    Date :            4/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    iCnt = 1;
    while (iCnt<=10)
    {
        printf(" %d ", iNo*iCnt);
        iCnt++;
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

    Table(iValue);
    return 0;
}
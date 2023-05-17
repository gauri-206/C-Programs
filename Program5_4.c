// Write a program which accept N number from user and print all odd numbers up to N.

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   OddDisplay
//    Input :           Integer
//    Output :          Integer
//    Discription:      Display all odd numbers up to given number
//    Author :          Kajal Mahadev Jadhav
//    Date :            4/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;
    
    iCnt= 1; 
    while(iCnt<=iNo)
    {
        if((iCnt % 2) != 0)
        {
           printf("%d ", iCnt);
        }
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

    OddDisplay(iValue);

    return 0;
}
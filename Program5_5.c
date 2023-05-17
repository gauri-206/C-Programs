// Write a program which accept N number and print first 5 multiples N.

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   MultipleDisplay
//    Input :           Integer
//    Output :          Integer
//    Discription:      Display first 5 Multiples of given number 
//    Author :          Kajal Mahadev Jadhav
//    Date :            4/05/2023
//
////////////////////////////////////////////////////////////////////////////////////


void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    
    iCnt= 1;
    while( iCnt<=5)
    {
        printf("%d ", iCnt*iNo); 
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

    MultipleDisplay(iValue);

    return 0;
}
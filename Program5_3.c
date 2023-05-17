// Write a program which accept number from user and print its numbers line.

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   Display
//    Input :           Integer
//    Output :          Integer
//    Discription:      Display numbers line of given number
//    Author :          Kajal Mahadev Jadhav
//    Date :            4/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    
    iCnt= -iNo; 
    while(iCnt<=iNo)
    {
        printf("%d ", iCnt);
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

    Display(iValue);

    return 0;
}
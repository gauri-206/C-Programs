// Write a program which accept number from user and print that number of $ and * on screen

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   MultFact
//    Input :           Integer
//    Output :          $ *
//    Discription:      Display $ & * on Screen upto given number of time
//    Author :          Kajal Mahadev Jadhav
//    Date :            4/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("$ * ");
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

    Pattern(iValue);

    return 0;
}
// Write a program which accept number from user and display all its non factors.

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   NonFact
//    Input :           Integer
//    Output :          Display Non Factors
//    Discription:      Display all non factors of given number 
//    Author :          Kajal Mahadev Jadhav
//    Date :            3/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d ", iCnt);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
/*
Write a program which accept number from user and if number is less than 50
then print small, if it is greater than 50 and less than 100 then print medium, if 
it is greater than 100 then print large
*/

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   Number
//    Input :           Integer
//    Output :          Small or medium or large
//    Discription:      Display given number is less than 50 or in between 50 and 100 or greater then 100
//    Author :          Kajal Mahadev Jadhav
//    Date :            4/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo<= 50)
    {
        printf("Small \n");
    }
    else if ((iNo>50) && (iNo<=100))
    {
        printf("medium \n");
    }
    else
    {
        printf("Large \n");
    }
    
}
////////////////////////////////////////////////////////////////////////////////////
//    Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}
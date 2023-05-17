// Write a program to find factorial of given number

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   Factorial
//    Input :           Integer
//    Output :          Integer
//    Discription:      Find the factorial of given number
//    Author :          Kajal Mahadev Jadhav
//    Date :            4/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    iCnt=iNo;
    while( iCnt>=1)
    {
        iFact = iFact*iCnt;
        iCnt--;
    }
    return iFact;
}
////////////////////////////////////////////////////////////////////////////////////
//    Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is: %d\n", iRet);
    return 0;
}
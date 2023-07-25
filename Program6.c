// Write a program which checks whether number is Even or Odd.

#include<stdio.h>      // for printf and Scanf
#include<stdbool.h>    //for bool data type

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   CheckEvenOdd
//    Input :           Integer
//    Output :          Boolean
//    Discription:      Cheks whether input is Even or Odd
//    Author :          Kajal Mahadev Jadhav
//    Date :            25/04/2023
//
////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{  
    if((iNo%2) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{ 
    int iValue = 0;
    bool bRet = 0;

    printf("Please Enter a number to whether it is even or odd :\n");
    scanf("%d", &iValue);
    
    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("Number is Enen..\n");
    }
    else
    {
        printf("Number is odd..\n");
    }

    return 0;
}
// Write a program which checks whether number is divisible by 3 and 5.

#include<stdio.h>      // for printf and Scanf
#include<stdbool.h>    //for bool data type

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   CheckDivisible
//    Input :           Integer
//    Output :          Boolean
//    Discription:      Cheks whether input is divisible by 3 and 5
//    Author :          Kajal Mahadev Jadhav
//    Date :            25/04/2023
//
////////////////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{  
    if(((iNo%3)==0) && ((iNo%5)==0))
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

    printf("Please Enter a number to whether it is divisible by 3 and 5 :\n");
    scanf("%d", &iValue);
    
    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf(" %d is completely divisible by 3 and 5..\n", iValue);
    }
    else
    {
        printf(" %d is not completely divisible by 3 and 5..\n", iValue);
    }    

    return 0;
}
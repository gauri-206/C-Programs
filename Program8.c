// Write a program which accepts the marks and display the class accordingly.
//0 to 34       Fail
// 35 to 49     Pass Class
// 50 to 59     Second Class
// 60 to 74     First class
// 75 to 100    First class with Distinction

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

void DisplayClass(float fMarks)
{   
    if((fMarks<0.0f) || (fMarks > 100.00f))
    {
        printf("Invalid Input\n");
        printf("Please enter the marks in between 0 to 100\n");
    }

    if((fMarks >= 0.0f) && (fMarks< 35.00f ))
    {
        printf("You are Fail\n");
    }
    else if((fMarks >= 35.00f) && (fMarks< 50.00f ))
    {
        printf("You got pass class\n");
    }
     else if((fMarks >= 50.00f) && (fMarks< 60.00f ))
    {
        printf("You got second class\n");
    }
     else if((fMarks >= 60.00f) && (fMarks< 75.00f ))
    {
        printf("You got First class\n");
    }
     else if((fMarks >= 75.00f) && (fMarks< 100.00f ))
    {
        printf("You got first class with Distinction\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{ 
    float fValue = 0.0;
    bool bRet = 0;

    printf("Please Enter your percentage :\n");
    scanf("%f", &fValue);
    
    DisplayClass(fValue);

    return 0;
}
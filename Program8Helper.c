#include "Program8Header.h"

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

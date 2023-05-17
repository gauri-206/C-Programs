#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   Display
//    Input :           Integer
//    Output :          Hello or Demo
//    Discription:      If number is less than 10 then Display Hello Otherwise Demo
//    Author :          Kajal Mahadev Jadhav
//    Date :            23/04/2023
//
////////////////////////////////////////////////////////////////////////////////////

int Dipllay(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello ");
    }
    else
    {
        printf("Demo");
    }
}
////////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int  main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d", &iValue);

    Dipllay(iValue);
    return 0;
}
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   Display
//    Input :           Integer, Integer
//    Output :          Integer
//    Discription:      Display first number in second number of times
//    Author :          Kajal Mahadev Jadhav
//    Date :            23/04/2023
//
////////////////////////////////////////////////////////////////////////////////////

int Display(int iNo, int iFrequency)
{
    int iNt = 0;

    for(iNt =0 ; iNt<iFrequency; iNt++)
    {
        printf("%d ", iNo);
    }
    printf("\n");
}

////////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter Frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);
    return 0;
}
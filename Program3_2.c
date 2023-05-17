// Write a program which accept number from user and display its factors in decreasing order

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   FactRev
//    Input :           Integer
//    Output :          Display Factors
//    Discription:      Display factors of given number in decreasing order
//    Author :          Kajal Mahadev Jadhav
//    Date :            3/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt=(iNo/2); iCnt>=1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    FactRev(iValue);

    return 0;
}
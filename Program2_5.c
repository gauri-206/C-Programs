#include<stdio.h>

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   EvenOdd
//    Input :           Integer
//    Output :          even or odd
//    Discription:      Display Number is Even or Odd
//    Author :          Kajal Mahadev Jadhav
//    Date :            23/04/2023
//
////////////////////////////////////////////////////////////////////////////////////

int EvenOdd(int iNo)
{
    if((iNo%2)==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
////////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = EvenOdd(iValue);

    if(iRet == TRUE)
    {
        printf("Even\n");
    }
    else
    {
        printf("odd\n");
    }
}
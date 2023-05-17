// Write a program which accept three  numbers and print its multiplication

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   Multiply
//    Input :           Integer
//    Output :          Integer
//    Discription:      Display Multplication of factors 
//    Author :          Kajal Mahadev Jadhav
//    Date :            5/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 ==0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }
    if((iNo2 == 0) && (iNo3 == 0))
    {
        return iNo1;
    }
    if((iNo2 == 0))
    {
        return (iNo1*iNo3);
    }
    else
    {
        return (iNo1*iNo2*iNo3);
    }
}
////////////////////////////////////////////////////////////////////////////////////
//    Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 =0, iValue2 = 0, iValue3 =0, iRet =0;
    
    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d\n", iRet);
}
// Write a program which accept number from user and return summation of all its non factors

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   SumNonFact
//    Input :           Integer
//    Output :          Integer
//    Discription:      Display sum of all non factors of given number 
//    Author :          Kajal Mahadev Jadhav
//    Date :            3/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum =0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

////////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);
    printf("%d\n", iRet);

    return 0;
}
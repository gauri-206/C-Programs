// Write a program which accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   FactDiff
//    Input :           Integer
//    Output :          Integer
//    Discription:      Display Difference between sum of all factors & non factors of given number 
//    Author :          Kajal Mahadev Jadhav
//    Date :            3/05/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFSum =0;
    int iNSum = 0;
    int iRes = 0;

     for(iCnt=1; iCnt<=iNo; iCnt++)
     {
         if((iNo % iCnt) != 0)
         {
            iNSum = iNSum + iCnt;
         }
     }
    
    for(iCnt=1; iCnt<=iNo/2; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iFSum = iFSum + iCnt;
        }
    }
    
    iRes = iFSum - iNSum;
    return iRes;
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

    iRet = FactDiff(iValue);
    printf("%d\n", iRet);

    return 0;
}
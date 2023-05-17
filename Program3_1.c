// Write a program which accepts number from user and display its multiplication of factors

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   MultFact
//    Input :           Integer
//    Output :          Integer
//    Discription:      Display Multplication of factors 
//    Author :          Kajal Mahadev Jadhav
//    Date :            3/05/2023
//
////////////////////////////////////////////////////////////////////////////////////


int MultFact(int iNo)
{
    int iCnt =0;
    int iRes = 1;

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iRes = iRes*iCnt;
        }
    }
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

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}
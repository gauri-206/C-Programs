// Write a program which accept total marks & obtained marks from user and calculate percentage
#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :   Percentage
//    Input :           Integer
//    Output :          float
//    Discription:      Display Marks into Percentage
//    Author :          Kajal Mahadev Jadhav
//    Date :            5/05/2023
//
////////////////////////////////////////////////////////////////////////////////////

float Percentage(float iNo1, float iNo2)
{
    float fRes = (iNo2/iNo1)*100; 
    return fRes;
}
////////////////////////////////////////////////////////////////////////////////////
//    Entry Point Function
////////////////////////////////////////////////////////////////////////////////////

int main()
{
   int iValue1 =0, iValue2 = 0;
   float fRet = 0.0;

   printf("Please enter total Marks: ");
   scanf("%f", &iValue1);


   printf("Please enter Obtained Marks: ");
   scanf("%f", &iValue2);
   
   Percentage(iValue1, iValue2);
   fRet = Percentage(iValue1, iValue2);
   
   printf("Your Percentage are: %f \n", fRet);
   return 0;
}
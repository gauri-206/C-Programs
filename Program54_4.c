// Write a recursive progarm which accept number from user and return its factorial
// Input : 5
// Output :  120

#include<stdio.h>

int Factoral(int iNo)
{
    static int Fact =1;

    if(iNo > 0)
    {
        Fact = Fact * iNo;
        Factoral(iNo-1);
    } 

    return Fact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = Factoral(iValue);
    printf("Factoial of number is: %d\n", iRet);

    return 0;
}
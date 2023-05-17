/*
       Design application for hotel. According to the management team of hotel they are giving 
       discount on total bill amount of customer.
       If bill amount is less than 500 then there is no discount, if amount is less than 1500 
       and more than 500 they give 10% discount. 
       And if the bill amount is more than 1500 they give 15% discount.
       Our application should accept total bill amount and depends on the discount policy we have
       to return the amount after applying discount.
*/

#include<stdio.h>
float CalculateBill(int iAmount)
{   
    float fAns;

    if(iAmount<=500)
    {
        printf("Sorry, There is no discount...\n");
        fAns = iAmount;
    }
    else if((iAmount>500) && (iAmount<=1500))
    {
        float f1 = (float)iAmount * (float)10/100;
        fAns = iAmount -f1;
    }
    else
    {
        float f2 = (float)iAmount * (float)15/100;
        fAns = iAmount -f2;
    }

    return fAns;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0;

    printf("Enter your amount: \n");
    scanf("%d", &iValue);

    fRet = CalculateBill(iValue);
    printf("Your amount after applying discount: %f\n", fRet);
    return 0;
}
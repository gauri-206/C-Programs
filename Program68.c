#include<stdio.h>

float DigitsAverage(int iNo)
{   
    int iCount = 0;
    int iDigit =0;
    int iSum =0;

    if(iNo<0)
    {
        iNo = -iNo;
    } 
    while (iNo != 0)
     {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo/10; 
    }
    return ((float)iSum/(float)iCount);
}

int main()
{
    int iValue = 0;;
    float fAvg = 0.0f;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    fAvg = DigitsAverage(iValue);   
    printf("Average is: %f\n", fAvg);
    
    return 0;
}
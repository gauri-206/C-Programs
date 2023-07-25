#include<stdio.h>

int MinimumDigit(int iNo)
{   
    int iDigit =0;
    int iMin =9;

    if(iNo<0)
    {
        iNo = -iNo;
    } 
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit<iMin)
        {
            iMin = iDigit;
        }
        if(iMin == 0)
        {
            break;
        }
        iNo = iNo/10;
    }
    return iMin;
}

int main()
{
    int iValue = 0;;
    int iSmall = 0.0f;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iSmall = MinimumDigit(iValue);   
    printf("Smallest digit is: %d\n", iSmall);
    
    return 0;
}
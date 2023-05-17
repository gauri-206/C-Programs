// write a program which accept number from user and return difference between summation pf even digits and summation of odd digit

#include<stdio.h>
int CountDiff(int iNo)
{
    int iDigit =0;
    int EvenSum =0;
    int OddSum =0;
    int iAns =0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit%2)==0)
        {
            EvenSum = EvenSum + iDigit;
        }
        if((iDigit%2) != 0)
        {
            OddSum = OddSum + iDigit;
        }
        iNo = iNo/10;
    }
    iAns = EvenSum - OddSum;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("Difference are: %d\n", iRet);

    return 0;
}

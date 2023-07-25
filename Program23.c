#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt<= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enetr number: \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);
    return 0;
}


// Time complexity : o(N)
// where N is the input (natural Number)
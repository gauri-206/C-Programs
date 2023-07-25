// input : 7
// # # # # # # #

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("#\t");
    } 
}

int main()
{
    int iFrequency = 0;
    
    printf("Enter th Frequency of symbol: \n");
    scanf("%d ",&iFrequency);

    Display(iFrequency);
    return 0;
}

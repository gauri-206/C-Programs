//Display n numbers on Screen
#include<stdio.h>

// Example of Iteration
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo<0)    // Filter
    {
        printf("Please enter the positive number\n");
        return;
    }

    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}
int main()
{ 
    int iValue= 0;

    printf("Enter the Frequency: ");
    scanf("%d", &iValue);
    Display(iValue);
    
    return 0;
}
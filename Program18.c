//Display n numbers on Screen
#include<stdio.h>

// Example of Iteration
void Display(int iNo)
{
     int iCnt = 0;

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
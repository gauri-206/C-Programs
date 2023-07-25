//Display "Jay Ganesh " n times on Screen
#include<stdio.h>

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
        printf("Jay Ganesh..\n");
    }
}

int main()
{ 
    int iValue = 0;

    printf("Enter Number how many times you repeated the Sentence: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
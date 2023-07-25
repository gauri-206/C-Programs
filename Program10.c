//Display "Jay Ganesh " 5 times on Screen
#include<stdio.h>

// Example of Iteration

int main()
{ 
    int iNo = 0;
    int iCnt = 0;
    printf("Enter Number how many times you repeated: ");
    scanf("%d", &iNo);

    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        printf("Jay Ganesh..\n");
    }
}
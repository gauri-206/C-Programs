#include<stdio.h>  //IO
#include<stdlib.h>  // Memory Management

int main() //Entry point
{
    int iSize = 0; //To store size of array
    int *ptr = NULL; // to store address of array
    int iCnt = 0; //Loop counter

    //Step1 : Accept the number of elements from user
    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    // step2 : Allocate memory dynamically
    ptr = (int *) malloc(iSize * sizeof(int));

    // Step3: Accept the values from user
    printf("Enter the elements: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++);
    {
        scanf("%d", &ptr[iCnt]);
    }
    printf("Elements of array are: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++);
    {
        printf("%d\n",ptr[iCnt]);
    }
    return 0;  //Return success to OS

}
#include<stdio.h>
#include<stdlib.h>
void Fun(int Arr[], int iLength)
{
     // Logic
}
int main()
{
    int iSize=0, iCnt =0;
    int *ptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to connect....");
        return -1;
    } 

    printf("Enter the elements..: ");
    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        printf("enter the elements %d : ",iCnt);
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of the array are: ");
     for(iCnt =0; iCnt<iSize; iCnt++)
    {
        printf("%d\n ", ptr[iCnt]);
    }
    Fun(ptr, iSize);
    free(ptr);
    return 0;
}
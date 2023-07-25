#include<stdio.h>
#include<stdlib.h>
void MaximumMinimum(int Arr[], int iLength)
{
    int iCount =0;
    int iMin =Arr[0];
    int iMax =Arr[0];

    for(iCount =0; iCount< iLength; iCount++)
    {
        if(iMin > Arr[iCount])
        {
            iMin = Arr[iCount];
        }
        if(iMax < Arr[iCount])
        {
            iMax = Arr[iCount];
        }
    }
    printf("Smallest value: %d\n", iMin);
    printf("Largest value: %d\n", iMax);

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

    printf("Enter the elements: \n");
    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of the array are: \n");
    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        printf("%d\n ", ptr[iCnt]);
    }
    MaximumMinimum(ptr, iSize);

    free(ptr);
    return 0;
}
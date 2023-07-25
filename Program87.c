#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[], int iLength)
{
    int iCount =0;
    int iMin =Arr[0];
    for(iCount =0; iCount< iLength; iCount++)
    {
        if(iMin > Arr[iCount])
        {
            iMin = Arr[iCount];
        }
    }
    return iMin;
}

int Maximum(int Arr[], int iLength)
{
    int iCount =0;
    int iMax =Arr[0];
    for(iCount =0; iCount< iLength; iCount++)
    {
        if(iMax < Arr[iCount])
        {
            iMax = Arr[iCount];
        }
    }
    return iMax;
}

int main()
{
    int iSize=0, iCnt =0;
    int *ptr = NULL;
    int iRet =0;

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
    iRet = Minimum(ptr, iSize);
    printf("Smallest number is: %d\n", iRet);

    iRet = Maximum(ptr, iSize);
    printf("Largest number is: %d\n", iRet);

    free(ptr);
    return 0;
}
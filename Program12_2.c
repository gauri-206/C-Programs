// Accept N numbers from user and return the smallest number

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCount = 0;
    int iMin = Arr[iCount];
    for(iCount=1; iCount<iLength; iCount++)
    {
        if(iMin>Arr[iCount])
        {
            iMin = Arr[iCount];
        }
    } 
    return iMin;
}

int main()
{
    int iSize =0, iCnt =0;
    int *p =NULL;
    int iRet =0;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements: \n", iSize);
    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        printf("Enter element:%d ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Minimum(p, iSize);
    printf("Smallest Number is %d\n", iRet);
    
    free(p);
    return 0;
}
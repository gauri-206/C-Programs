// Accept N numbers from user and return frequency of even numbers.

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCount =0; 
    int even =0;

    for(iCount=0; iCount<iLength; iCount++)
    {
        if((Arr[iCount]%2) == 0)
        {
           even++;
        }
    }  
    return even;
}

int main()
{
    int iSize =0, iRet =0, iCnt =0;
    int *p =NULL;

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

    iRet = CountEven(p, iSize);
    printf("Frequency of even numbers: %d\n", iRet);
    free(p);
    return 0;
}
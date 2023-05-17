// Accept N numbers from user and accept Range, Display all elements from that range.

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCount =0; 

    for(iCount=0; iCount<iLength; iCount++)
    {
        if( (Arr[iCount]>=iStart) && (Arr[iCount]<=iEnd) )
        {
            printf("%d ", Arr[iCount]);
        }
    }  
}

int main()
{
    int iSize =0, iCnt =0, iValue1 =0, iValue2=0;
    int *p =NULL;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    printf("Enter the starting point: ");
    scanf("%d", &iValue1);

    printf("Enter the ending point: ");
    scanf("%d", &iValue2);

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

    Range(p, iSize, iValue1, iValue2);

    
    free(p);
    return 0;
}
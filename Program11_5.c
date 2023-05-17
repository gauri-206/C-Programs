// Accept N numbers from user and return Product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCount =0; 
    int iMult =1;

    for(iCount=0; iCount<iLength; iCount++)
    {
        if((Arr[iCount]%2) != 0)
        {
           iMult = iMult * Arr[iCount];
        }
    }  
    return iMult;
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

    iRet = Product(p, iSize);
    printf("Product  odd elements is: %d\n", iRet);
    free(p);
    return 0;
}
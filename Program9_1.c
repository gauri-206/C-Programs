// Accept N numbers from user and return difference between summation of even elementsand summation of odd elements

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCount =0; 
    int iEven=0;
    int iOdd =0;
    int iDiff =0;

    for(iCount=0; iCount<iLength; iCount++)
    {
        if((Arr[iCount]%2)==0)
        {
            iEven =iEven+Arr[iCount];
        }
        if((Arr[iCount]%2) != 0)
        {
            iOdd =iOdd+Arr[iCount];
        }
    }
    iDiff = iEven - iOdd;
    return iDiff;
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
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf("Result is %d\n", iRet);
    free(p);
    return 0;
}
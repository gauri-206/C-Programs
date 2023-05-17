// Accept N numbers from user and return the largest number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCount = 0;
    int iMax = 0;
    for(iCount=1; iCount<iLength; iCount++)
    {
        if(iMax<Arr[iCount])
        {
            iMax = Arr[iCount];
        }
    } 
    return iMax;
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

    iRet = Maximum(p, iSize);
    printf("Largest Number is %d\n", iRet);
    
    free(p);
    return 0;
}
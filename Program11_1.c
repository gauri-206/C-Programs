// Accept N numbers from user and accept one another one another number as NO,  check whether NO is Present or not.

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCount =0; 

    for(iCount=0; iCount<iLength; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
           break;
        }
    }  
    if(Arr[iCount] == iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iSize =0, iCnt =0, iValue =0;
    int *p =NULL;
    BOOL bRet =FALSE;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    printf("Enter number: ");
    scanf("%d", &iValue);

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

    bRet = Check(p, iSize, iValue);
    if(bRet == TRUE)
    {
        printf("%d is present..\n", iValue);
    }
    else
    {
        printf("%d is absent..\n", iValue);
    }
    free(p);
    return 0;
}
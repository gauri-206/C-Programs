// Accept N numbers from user and accept one another one another number as NO, and return index of first occurence of that NO.

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCount =0; 

    for(iCount=0; iCount<iLength; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
           break;
        }
    }  
    if(iCount == iLength)
    {
        return -1;
    }
    else
    {
        return iCount;
    }
}

int main()
{
    int iSize =0, iCnt =0, iValue =0;
    int *p =NULL;
    int iRet =0;

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

    iRet = FirstOcc(p, iSize, iValue);
    if(iRet == -1)
    {
        printf("There is no such member..\n");
    }
    else
    {
        printf("First occurence of number is: %d..\n", iRet);
    }
    free(p);
    return 0;
}
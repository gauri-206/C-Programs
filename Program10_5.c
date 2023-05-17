// Accept N numbers from user and accept one another number as NO, return frequency of NO from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCount =0; 
    int iFreq =0;

    for(iCount=0; iCount<iLength; iCount++)
    {
        if(Arr[iCount]== iNo)
        {
           iFreq++;
        }
    }  
   return iFreq;
}

int main()
{
    int iSize =0, iRet =0, iCnt =0, iValue=0;
    int *p =NULL;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);
    
    printf("Enter the number: ");
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

    iRet = Frequency(p, iSize, iValue);
    printf("Frequency of %d is: %d\n",iValue, iRet);
    free(p);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

int SearchLastOccurance(int Arr[], int iLength, int iNo)
{
    int iCount =0;
    
    for(iCount =iLength-1; iCount>=0; iCount--)
    {
        if(Arr[iCount] == iNo)
        {
            break;
        }
    }
    return iCount;
    
}

int main()
{
    int iSize=0, iCnt =0, iValue =0;
    int *ptr = NULL;
    int iRet = 0;

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
    
    printf("Enter the elements that you want to search: \n");
    scanf("%d", &iValue);

    printf("Elements of the array are: \n");
    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        printf("%d\n ", ptr[iCnt]);
    }

    iRet = SearchLastOccurance(ptr, iSize, iValue);
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element..\n");
    }
    else
    {
        printf("%d occured at index %d\n",iValue, iRet);
    }


    free(ptr);
    return 0;
}
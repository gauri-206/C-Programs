#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
    int iCount =0;
    for(iCount =0; iCount<iLength; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
            break;
        }
    }
    if(iCount == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iSize=0, iCnt =0, iValue =0;
    int *ptr = NULL;
    bool bRet = false;


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

    bRet = Search(ptr, iSize, iValue);
    if(bRet == true)
    {
        printf("%d is present in the array..\n", iValue);
    }
    else
    {
        printf("%d is not present in the array..\n", iValue);
    }

    free(ptr);
    return 0;
}
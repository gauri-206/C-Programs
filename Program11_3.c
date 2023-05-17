// Accept N numbers from user and accept one another number as NO, and return index of last occurence of that NO.

#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1

int FirstOcc(int Arr[], int iLength, int iNo)
{

    int res = ERR_NOTFOUND;
    int iCount =0; 

    for(iCount=iLength-1; iCount>=0; iCount--)
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
    int iSize =0, iCnt =0, iValue =0;
    int *p =NULL;
    int iRet =0;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    printf("Enter number: ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));
    int n = sizeof(p)/sizeof(int);
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

    iRet = FirstOcc(p,iSize, iValue);
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such member..\n");
    }
    else
    {
        printf("Last occurence of number is: %d..\n", iRet);
    }
    free(p);
    return 0;
}
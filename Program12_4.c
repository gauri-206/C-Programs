//  Accept N numbers from user and display all such numbers which contains 3 digits in it

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCount = 0;
    int iDigit =0;

    for(iCount=0; iCount<iLength; iCount++)
    {
       if((Arr[iCount]>99) && (Arr[iCount]<1000))
       {
           printf("%d ", Arr[iCount]);
       }
    }
}

int main()
{
    int iSize =0, iCnt =0;
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

    Digits(p, iSize);
    
    free(p);
    return 0;
}
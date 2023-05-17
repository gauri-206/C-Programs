// Accept N numbers from user and display all such elements which are divisible by 5.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCount =0; 

    for(iCount=0; iCount<iLength; iCount++)
    {
        if((Arr[iCount]%5) == 0)
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

    Display(p, iSize);
    free(p);
    return 0;
}
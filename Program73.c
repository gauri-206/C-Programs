#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the number of elements: \n");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Memory allocated successfully..\n");
    return 0;
}
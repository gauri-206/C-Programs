#include<stdio.h>

int strlenSmall(char *str)
{
    int iCount =0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    iRet = strlenSmall(Arr);       // strlenX(100);

    printf("Length of small character is: %d\n", iRet);

    return 0;
}
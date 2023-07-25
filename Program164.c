#include<stdio.h>

int strlenCapital(char *str)
{
    int iCount =0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = strlenCapital(Arr);       // strlenX(100);

    printf("Length of capital character is: %d\n", iRet);

    return 0;
}
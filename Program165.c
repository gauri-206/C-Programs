#include<stdio.h>

int strlenDigit(char *str)
{
    int iCount =0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
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

    iRet = strlenDigit(Arr);       // strlenX(100);

    printf("Number of digit is: %d\n", iRet);

    return 0;
}
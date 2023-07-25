#include<stdio.h>

int CountChar(char *str, char cValue)
{
    int iCount =0;

    while(*str != '\0')
    {
        if((*str == cValue))
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
    char ch = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character: \n");
    scanf(" %c", &ch);

    iRet = CountChar(Arr, ch);      

    printf("Number of occurence are: %d\n", iRet);

    return 0;
}
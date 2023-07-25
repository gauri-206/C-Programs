#include<stdio.h>

void Frequency(char *str)
{
    int iSmalliCnt =0; 
    int iCapCnt =0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmalliCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }
        str++;
    }
    printf("Small case character count: %d\n", iSmalliCnt);
    printf("Capital case character count: %d\n", iCapCnt);
}

int main()
{
    char Arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    Frequency(Arr);      

    return 0;
}
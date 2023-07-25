#include<stdio.h>

int FirstOccurence(char *str, char cValue)
{
    int iCnt =1; 
    int iPos =0;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
           iPos = iCnt;
           break;
        }
        str++;
        iCnt++;
    }
    return iPos;
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

    iRet = FirstOccurence(Arr, ch);      

    printf("First occurence of that character is at: %d\n", iRet);

    return 0;
}
#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurence(char *str, char cValue)
{
    int iCnt =1; 
    int iPos = ERR_NOTFOUND;

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
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character: \n");
    scanf(" %c", &ch);

    iRet = FirstOccurence(Arr, ch);  
    if(iRet == ERR_NOTFOUND)
    {
        printf("there is no such character\n");
    }    
    else
    {
        printf("First occurence of that character is at: %d\n", iRet);
    }

    return 0;
}
/*
    Accept character from user, If character is small display its
    corresponding capital character, and if it small then diaplay its
    corresponding capital. In other cases display as it is.   

    Input : Q                Output : q
    Input : m                Output : M
    Input : 4                Output : 4
    Input : %                Output : %

*/
#include<stdio.h>

void Disply(char ch)
{
    int iAscii =0;

    if((ch>='a') || (ch<='z'))
    {
        iAscii = ch;
        printf("%c\n", iAscii-32);
    }
    else
    {
        iAscii = ch;
        printf("%c\n", iAscii+32);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter the character: ");
    scanf("%c", &cValue);

    Disply(cValue);
    return 0;
}
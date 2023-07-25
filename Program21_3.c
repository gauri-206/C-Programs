/*
    Accept character from user, If it is capital then display all the 
    Character from the input characters till z. If input character is small
    then print all the characters in reverse order till a. In other cases 
    return directly.  
*/
#include<stdio.h>

void Disply(char ch)
{
    char ASCII = 0;
    if((ASCII>='A') || (ASCII<='Z'))
    {
        for(ASCII =ch; ASCII<='Z'; ASCII++)
        {
            printf("%c\t", ASCII);
        }
    }
    printf("\n");

    if((ASCII>='a') || (ASCII<='z'))
    {
        for(ASCII =ch; ASCII>='a'; ASCII--)
        {
            printf("%c\t", ASCII);
        }
    }
    else
    {
        return;
    }
    printf("\n");

}
int main()
{
    char cValue = '\0';
    printf("Enter the character: ");
    scanf("%c", &cValue);

    Disply(cValue);
    return 0;
}
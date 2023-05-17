// Write a program which accept name from user and print that name

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter your full name: ");
    scanf("%[^\n]*c",&Name);

    printf("Your name is: %s \n", Name);

    return 0;
} 
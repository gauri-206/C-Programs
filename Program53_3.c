// Write a recursive progarm which display below pattern
// Input : 5
// Output :  5  4  3  2  1

#include<stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\t", iNo);
        Display(iNo-1);
    } 

}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i =0, j =0;
    char ch = '\0';

    if(iRow != iCol)
    {
        printf("Invalid input...\n");
        return;
    }
    
    for(i = 1; i<=iRow; i++)
    {
        for(j=1, ch='A'; j<=i; j++, ch++)
        { 
          printf("%c\t", ch);
        }
        printf(" \n");
    }
}
int main()
{
    int iValue1 =0, iValue2 =0;

    printf("Enter number of rows: \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns: \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);
    return 0;
}
/* Accept number of rows and number of columns from user and display below pattern
    Input : iRow = 4    iCol = 3
    
    Output : A   A   A    
             B   B   B
             C   C   C
             D   D   D
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i =0, j =0;
   char ch = '\0';
   for(i =1, ch='A'; i<=iRow; i++)
   {
      for(j=1; j<= iCol; j++)
      {
          printf("%c\t", ch);
      }
      ch++;
      printf("\n");
   }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}
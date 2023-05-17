/* Accept number of rows and number of columns from user and display below pattern
    Input : iRow = 4    iCol = 3
    
    Output : A   B   C    
             a   b   c
             A   B   C
             a   b   c
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i =0, j =0;
   char ch = '\0', c= '\0';

   for(i =1; i<=iRow; i++, ch++)
   {
      for(j=1, c='a', ch='A'; j<= iCol; j++)
      {
          if((i%2)==0)
          {
             printf("%c\t",c++);
          }
          else
          {
             printf("%c\t",ch++);
          }
      }
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
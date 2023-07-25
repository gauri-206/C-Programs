#include<stdio.h>
#include<stdlib.h>

int main()
{
   int Arr[5];   //Static memory
   printf("Enter the elements: \n");

  for(int iCnt =0; iCnt<5; iCnt++)
  {
    scanf("%d", &Arr[iCnt]);
  }

    
   printf("Elements of array are: \n");
   for(int iCnt =0; iCnt<5; iCnt++)
  {
    printf("%d\n",Arr[iCnt]);
  }

   return 0;
}
/*
     Write a program which reverse each element of singly linked list
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
     int Data;
     struct node *Next;
}NODE, *PNODE, **PPNODE;

void InsertFirst (PPNODE Head, int iNo)
{
     PNODE newn = NULL;
     newn = (PNODE) malloc (sizeof(NODE));

     newn ->Data = iNo;
     newn->Next = NULL;

     if(*Head == NULL)
     {
          *Head = newn;
     }
     else
     {
          newn ->Next = *Head;
          *Head = newn;
     }
}

void Display (PNODE Head)
{
     printf("elements in Linked List are: \n");
     while(Head != NULL)
     {
          printf(" |%d| ->", Head->Data);
          Head = Head->Next;
     }
     printf(" NULL\n");
}

void DisplayPalindrome (PNODE Head)
{
   int iDigit = 0;
   int iNum = 0;
   PNODE Temp = Head;

   while(Head != NULL)
   {
       int iVal = Head->Data;
       
       while(Head->Data != 0)
       {
          iDigit = (Head->Data) % 10;
          iNum = (iNum *10) + iDigit;
          Head->Data = Head->Data / 10;

          if(iNum == iVal);
          {
              printf("%d ", iVal);
          }
       }
       Head = Head->Next;    
       printf("\n ");
   }    
}


int main()
{
     PNODE First = NULL;

     InsertFirst(&First, 89);
     InsertFirst(&First, 6);
     InsertFirst(&First, 414);
     InsertFirst(&First, 17);
     InsertFirst(&First, 28);
     InsertFirst(&First, 11);

     Display(First);

     DisplayPalindrome(First);

     return 0;

}
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

void Reverse (PNODE Head)
{
     int iDigit =0;

     while( Head != NULL)
     {
          while(Head->Data >0)
          {
               iDigit = (Head->Data) % 10;
               printf("%d", iDigit);
               Head->Data = Head->Data / 10;
          }
          printf("\n");
          Head = Head->Next;
     }
     printf("\n");
}
int main()
{
     PNODE First = NULL;

     InsertFirst(&First, 89);
     InsertFirst(&First, 6);
     InsertFirst(&First, 41);
     InsertFirst(&First, 17);
     InsertFirst(&First, 28);
     InsertFirst(&First, 11);

     Display(First);

     Reverse(First);
     
     return 0;
}
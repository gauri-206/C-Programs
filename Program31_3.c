/*
       Write a program which return addition of all even numbers in singly linked list 
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
       int Data;
       struct node *Next;
}NODE, *PNODE, **PPNODE;

void Insertfirst(PPNODE Head, int ino)
{
       PNODE newn = NULL;
       newn = (PNODE) malloc(sizeof(NODE));

       newn->Data = ino;
       newn->Next = NULL;

       if(*Head == NULL)
       {
              *Head = newn;
       } 
       else
       {
              newn->Next = *Head;
              *Head = newn;
       }
}

void Display(PNODE Head)
{
       printf("Elements in linked are: ");
       while(Head != NULL)
       {
              printf(" |%d| -> ", Head->Data);
              Head = Head->Next;
       }
       printf(" NULL\n");
}

int EvenAdd(PNODE Head)
{
      int iSum = 0;

      while(Head != NULL)
      {
             if((Head->Data)%2 == 0)
             {
                   iSum = iSum + Head->Data;
                   
             }     
             Head = Head->Next;  
      }
      return iSum;
}

int main()
{
       PNODE First = NULL;
       int iRet = 0;

       Insertfirst(&First, 41);
       Insertfirst(&First, 32);
       Insertfirst(&First, 20);
       Insertfirst(&First, 11);

       Display(First);

       iRet = EvenAdd(First);
       printf("Addition of even numbers in Linked List are: %d\n", iRet);

       return 0;
}
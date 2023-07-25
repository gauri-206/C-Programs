/*
    write a program which return second maximum element from singly linear linked list  
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
       printf("Elements in linked are: \n");
       while(Head != NULL)
       {
              printf(" |%d| -> ", Head->Data);
              Head = Head->Next;
       }
       printf(" NULL\n");
}

void SecMax(PNODE Head)
{
    int iMax = 0;
    int  iSecMax =0;

    while(Head != NULL)
    {
       if(iMax < Head->Data)
       {
           iSecMax = iMax;
           iMax = Head->Data;
       }

       else if(Head->Data > iSecMax && Head->Data != iMax)
       {
           iSecMax = Head->Data;
       }
       Head = Head ->Next;
    }
    printf("Second maximum numbers in Linked List are: %d\n", iSecMax);
}

int main()
{
       PNODE First = NULL;
       int iRet = 0;

       Insertfirst(&First, 43);
       Insertfirst(&First, 41);
       Insertfirst(&First, 38);
       Insertfirst(&First, 32);
       Insertfirst(&First, 20);
       Insertfirst(&First, 15);
       Insertfirst(&First, 11);

       Display(First);

       SecMax(First);

       return 0;
}
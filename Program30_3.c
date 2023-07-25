/*
   Write a program which returns addition of all element from singly linear linked list
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct node
{
    int Data;
    struct node *Next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc (sizeof(NODE));

    newn->Next = NULL;
    newn->Data = iNo;

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
    printf("Elements of Singly linear linked list are: \n");

    while(Head != NULL)
    {
        printf(" |%d| -> ", Head->Data);
        Head = Head->Next;
    }
    printf(" NULL\n");
}

int Addition(PNODE Head)
{
    int iSum = 0;
    while(Head != NULL)
    {
        iSum = iSum + Head->Data;
        Head = Head->Next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);

    iRet = Addition(First);
    printf("Addition of nodes in LL are: %d\n", iRet);

    return 0;
}
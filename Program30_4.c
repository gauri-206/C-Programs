/*
     Write a program which return largest element from singly linear linked list
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;

typedef struct node
{
    int Data;
    struct node *Next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc(sizeof(NODE));

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
    printf("Elements in Linked List are: \n");
    while(Head != NULL)
    {
        printf(" |%d| ->", Head->Data);
        Head = Head->Next;
    }
    printf(" NULL\n");
}

int Maximum(PNODE Head)
{
    int iMax = 0;
    
    while(Head != NULL)
    {
        if(iMax < Head->Data)
        {
           iMax = Head->Data;
        }
        Head = Head ->Next;
    }
    
    return iMax;
    
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);  
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);
    
    Display(First);

    iRet =  Maximum(First);
    printf("Largest element from singly Linear Linked List: %d\n", iRet);

    return 0;
}
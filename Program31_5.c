/*
      Write a program which display addition of elements in singly linked list
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int Data;
    struct node *Next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->Data = iNo;
    newn->Next = NULL;

    if(Head == NULL)
    {
        *Head = newn;
    }
    
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void Display (PNODE Head)
{
    printf("Elements in Limked List are: \n");
    while (Head != NULL)
    {
        printf(" |%d| ->", Head->Data);
        Head = Head->Next;
    }
    printf(" NULL\n");
    
}

void SumDigit(PNODE Head)
{
    int iDigit =0;
    int sum = 0;

    while(Head != NULL)
    { 
        while( (Head->Data) > 0 )
        {
            iDigit = (Head->Data)%10;
            sum = sum + iDigit;
            Head->Data = Head->Data/10;
        }
        printf("%d ",sum);
        sum=0;
        Head = Head->Next;
    }
    printf("\n");
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    SumDigit(First);
}
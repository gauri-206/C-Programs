/*
    Write a program which  search Last occurence of particular element from singly linear linked list
    Function should return position at which element is found
*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc(sizeof(NODE));

    newn ->Next = NULL;
    newn->Data = no;

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

void Display(PNODE Head)
{
    printf("Elements of Linked List are: \n");
    while (Head != NULL)
    {
        printf(" |%d| -> ", Head->Data);
        Head = Head ->Next;
    }
    printf(" NULL\n");
}

int SearchLastOcc(PNODE Head, int iNo)
{
    int iPos = -1;
    int iCount = 1;
    PNODE Last = Head;

    while ( Last != NULL)
    {
        if(Last->Data == iNo)
        {
            iPos = iCount;
        }
        Last = Last->Next;
        iCount++;
    }
    return iPos;
}

int main()
{
    PNODE First =NULL;
    int iValue = 0;
    int iRet = 0;

    InsertFirst(&First, 40);
    InsertFirst(&First, 10);
    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Enter value: \n");
    scanf("%d", &iValue);


    Display(First);

    iRet = SearchLastOcc(First, iValue);
    printf("Last Occurence of %d id %d  \n", iValue, iRet);

    return 0;


}

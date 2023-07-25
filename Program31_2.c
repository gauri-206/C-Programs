/*
       Write a program which display all Prime numbers in given singly linked list
*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct node
{
    int Data;
    struct node *Next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc (sizeof(NODE));

    newn ->Data = iNo;
    newn ->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> Next = *Head;
        *Head  = newn;
    }
}
void Display(PNODE Head)
{
    printf("Elements of Sinly Linked List are: \n");
    while(Head != NULL)
    {
        printf(" |%d| ->", Head->Data);
        Head = Head->Next;
    }
    printf(" NULL\n");
}

void DisplayPrime(PNODE Head)
{
    PNODE iPrime = Head;
    int iCnt = 0;
    int flag =0;
    
    while(iPrime != NULL)
    {
        for (iCnt=2; iCnt <= (iPrime->Data)/2; iCnt++)
        {
            if((iPrime->Data)%iCnt == 0)
            {
               flag = 1;
               return;
            }
            else
            {
                printf("%d is Prime number \n", iPrime->Data);
            }
        }
        iPrime = iPrime->Next;  
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 89); 
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);

    DisplayPrime(First);

    return 0;
}
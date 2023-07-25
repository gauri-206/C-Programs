/*
       Write a program which display all perfect numbers in given singly linked list
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

void DisplayPerfect(PNODE Head)
{
    int iPerfect = 0;
    int iCnt = 1;
    int sum =0;
    
    while(Head != NULL)
    {
        int iPerfect = Head->Data;

        for (iCnt =1; iCnt <= (iPerfect/2); iCnt++)
        {
            if((iPerfect) % iCnt == 0)
            {
                sum = sum + iCnt;
            }
        }
        
        if(sum == iPerfect)
        {
            printf("%d is perfect number \n", iPerfect);
        }
        sum = 0;
        Head = Head ->Next;
    }
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

    DisplayPerfect(First);

    return 0;
}
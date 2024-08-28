#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |",Head->Data);
        Head = Head -> next;
    }
}

int Addition(PNODE Head)
{
    int Sum = 0;
    {
        while(Head != NULL)
        {
            Sum = Sum + Head -> Data;
            Head = Head -> next;
        }
    }
    return Sum;  
}


int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,10);
    InsertFirst(&First,20);
    InsertFirst(&First,30);
    InsertFirst(&First,40);

    Display(First);

    iRet = Addition(First);
    printf("The Addition is %d",iRet);

    return 0;
}
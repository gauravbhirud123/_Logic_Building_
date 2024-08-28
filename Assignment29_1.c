#include<stdio.h>
#include<stdlib.h>


# define TRUE 1
# define FALSE 0

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d | -> ",Head -> data);
        Head = Head -> next;
    }
}

int FirstOcc(PNODE Head,int no)
{
    int iPos = 1;
    while(Head != NULL)
    {
        if((Head -> data) == no)
        {
            break;
        }
        Head = Head -> next;
        iPos++;
    }

    if(Head == NULL)
    {
        return -1;
    }
    else
    {
        return iPos;
    }
    
}



int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,70);
    InsertFirst(&first,30);
    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    Display(first);

    iRet = FirstOcc(first,30);
    printf("First Occurance is %d",iRet);

    return 0;
    
}
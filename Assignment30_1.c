//write a program which displays all elemnents which are perfect

//check whether number is perfect or not.

/*#include<stdio.h>
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1;iCnt <= iValue/2;iCnt++)
    {
        if(iValue%iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iValue)
    {
        printf("%d is prefect number",iValue);
    }
    else
    {
        printf("%d is not perfect number",iValue);
    }


    return 0;
}*/
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

BOOL DisplayPerfect(PNODE Head)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1;iCnt <= Head ->Data;iCnt++)
    {
        if(Head -> Data % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == Head->Data)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);

    while(First != NULL)
    {
        iRet = DisplayPerfect(First);

        if(iRet == TRUE)
        {
            printf("%d is perfect number\n",First->Data);
        }
        else
        {
            printf("%d is not perfect number\n",First->Data);
        }
        First = First -> next;
    }

    return 0;
}

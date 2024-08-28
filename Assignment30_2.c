//ACCEPT NUMBER FROM USER AND CHECK WHETHER NUMBER IS PRIME NUMBER OR NOT.

/*#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo<0)       //UPDATOR.
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number",iValue);
    }
    else
    {
        printf("%d is not prime number",iValue);
    } 

    return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool DisplayPrime(PNODE Head)
{
    while(Head != NULL)
    {
        int iCnt = 0;

        for(iCnt = 2;iCnt <= (Head->Data/2);iCnt++)
        {
            if((Head->Data % iCnt) == 0)
            {
                return false;
            }
        }
        Head = Head -> next;
    } 
    return true;
    
}


int main()
{
    PNODE First = NULL;
    bool bRet = false;

    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    bRet = DisplayPrime(First);

    if(bRet == true)
    {
        printf("%d\n",First->Data);
    }
    
    return 0;
}
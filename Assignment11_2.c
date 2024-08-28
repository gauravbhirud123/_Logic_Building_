//WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND CHECH WHETHER ITS CONTAINS 0 
//IN IT OR NOT.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo%10;

        if(iDigit == 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }

    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is no zero\n");
    }

    return 0;
}


//WRITE A PROGRAM WHICH ACCEPT ONE NUMBER FROM USER ANS CHECK WHETHER THAT NUMBER IS 
//GREATER THAN 100 OR NOT.

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo>100)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;

    
}

/*#include<stdio.h>
int main()
{
    int value = 0;

    printf("Enter the number");
    scanf("%d",&value);

    if(value>100)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}*/
// Accept number from user and check whether number is even or odd.

#include<stdio.h>
#include<stdbool.h>

#define True 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()

{
    int iValue = 0;
    BOOL bRet = false;

    printf("enter the number\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("%d is an even number\n",iValue);

    }
    else
    {
        printf("%d is an odd number ", iValue);
    }

    return 0;

}

//WRITE A PROGRAM WHICH ACCEPT RANGE FROM USER AND DISPLAY ALL NUMBERS IN BETWEEN 
//THAT RANGE IN REVERSE ORDER.

#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt = 0;
    for(iCnt = iEnd; iCnt>=iStart; iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}

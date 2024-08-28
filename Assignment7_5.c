//write a program which accept number from user and display its table in reverse 
//order.

#include<stdio.h>

void TableRev(int iNo)
{
    if(iNo<0)       //UPDATOR.
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 10;iCnt>=1;iCnt--)
    {
        printf("%d*%d=%d\n",iNo,iCnt,iNo*iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
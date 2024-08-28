//WRITE A PROGRAM WHICH ACEPT NUMBER FROM USER AND DISPLAY ITS TABLE.

#include<stdio.h>

void Table(int iNo)
{
    if(iNo<0)       //UPDATOR.
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt<=10; iCnt++)
    {
        printf("%d*%d=%d\n",iNo,iCnt,iNo*iCnt);   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
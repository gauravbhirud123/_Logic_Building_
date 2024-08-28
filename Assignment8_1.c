//WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND DISPAY BELOW PATTERN.

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)    //UPDATOR.
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("* #");
    }
}

int Main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
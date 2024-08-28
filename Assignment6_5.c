//WRITE A PROGRAM WHICH ACCEPTS N AND PRINT FIRST 5 MULTIPLIES OF N.

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=5; iCnt++)
    {
        printf("%d\n",iNo*iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
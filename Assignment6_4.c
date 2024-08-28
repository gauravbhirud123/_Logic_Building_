//WRITE A PROGRAM WHICH ACCEPTS N FROM USER AND PRINT ALL ODD NUMBERS UP TO N.

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt<=iNo; iCnt++)
    {
        if(iCnt%2 != 0)
        {
            printf(" %d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}
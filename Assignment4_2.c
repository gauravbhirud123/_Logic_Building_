// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND DISPLAY ITS FACTOR IN DECREASING 
//ORDER.
#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = (iNo/2); iCnt>=1; iCnt--)
    {
        if((iNo%iCnt)==0)
        printf("%d\n",iCnt);
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}
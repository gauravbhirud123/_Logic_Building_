//WRITE A PROGRAM TO FIND FACTORIAL OF GIVEN NUMBER.

#include<stdio.h>
int Factorial(int iNo)
{
    if(iNo<0)       //UPDATOR.
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int Fact = 1;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        Fact = Fact * iCnt;
    }
    return Fact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("The factorial is %d",iRet);

    return 0;
}
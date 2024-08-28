//write a program to find even factorial of given number and find its sum.

#include<stdio.h>

int  EvenFactorial(int iNo)
{
    int iCnt = 0;
    int Fact = 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            Fact = Fact * iCnt;
        }
    }
    return Fact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}
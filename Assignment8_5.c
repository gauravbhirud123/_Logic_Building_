//write a program which returns difference between even factorial and odd factorial of
//given number.

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int Fact = 1;
    int Fact1 = 1;
    int Diff = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            Fact = Fact * iCnt;
        }
        if(iCnt%2 != 0)
        {
            Fact1 = Fact1 * iCnt;
        }

        Diff = Fact - Fact1;
    }
    return Diff;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d",iRet);

    return 0;
}
//write a program to find odd factorial of given number.

#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int Fact = 1;
    
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2 != 0)
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

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is %d",iRet);

    return 0;
}
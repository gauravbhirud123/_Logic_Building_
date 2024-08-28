//WRITE A PROGRAM WHICH ACCEPT RANGE FROM USER AND RETURN ADDITION OF ALL NUMBERS IN 
//BETWEEN THAT RANGE.

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    
    if(iStart > iEnd || iStart < 0)
    {
        printf("Invalid Input\n");
    }
    
    int iCnt = 0;
    int Sum = 0;
    for(iCnt = iStart; iCnt<=iEnd; iCnt++)
    {
       Sum = Sum + iCnt;
    }
    return Sum;
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;
}

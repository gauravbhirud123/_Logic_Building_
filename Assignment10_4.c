//WRITE A PROGRAM WHICH ACCEPT RANGE FROM USER AND RETURN ADDITION OF ALL EVEN NUMBERS 
//IN BETWEEN THAT RANGE.

#include<stdio.h>
int RangeSumEven(int iStart, int iEnd)
{
    if(iStart < 0)
    {
        printf("Invalid Range");
    }
    int iCnt = 0;
    int Sum = 0;
    for(iCnt = iStart; iCnt<=iEnd; iCnt++)
    {
        if(iCnt%2 == 0)

        Sum = Sum + iCnt;
    }

    return Sum;

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;
}


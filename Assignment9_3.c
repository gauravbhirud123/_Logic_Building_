//WRITE A PROGRAM WHICH ACCEPT DISTANCE IN KILOMTER AND CONVERT IT INTO METER.
//(1 KILOMETER = 1000 METER)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    return iNo*1000;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d\n",iRet);

    return 0;
}
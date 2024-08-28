//WRITE A PROGRAM WHICH ACCEPT AREA IN SQUARE FEET AND CONVERT IT INTO SQUARE METER.
//(1 SQUARE FEET = 0.0929 SQUARE METER)

#include<stdio.h>
double SquareMeter(int iValue)
{
    return 0.0929*iValue;
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The area is %lf squaremeter",dRet);

    return 0;
}
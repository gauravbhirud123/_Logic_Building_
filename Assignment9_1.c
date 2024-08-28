//WRITE A PROGRAM WHICH ACCEPT RADIUS OF CIRCLE FROM USER AND CALCULATE ITS AREA.
//CONSIDER VALUE OF PI AS 3.14(AREA = PI*RADIUS*RADIUS)

#include<stdio.h>

double CircleArea(float fRadius)
{
    return 3.14*fRadius*fRadius;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("The circle of area is %lf",dRet);

    return 0;
}
//WRITE A PROGRAM WHICH ACCEPT TEMPERATUE IN FAHRENHEIT AND CONVERT IT INTO CELCIUS
//(1 CELCIUS = (FAHRENHEIT-32)*(5/9)).

#include<stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp-32) * 5/9;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("The temperature is %lf degree celcius",dRet);
    
    return 0;
}
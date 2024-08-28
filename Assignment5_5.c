//WRITE A PROGRAM WHICH ACCEPTS TOTAL MARKS AND OBTAINED MARKS FROM USER AND CALCULATE 
//PERCENTAGE.

#include<stdio.h>
float Percentage(int Obtained_Marks,int Total_Marks)
{
    return (((float)Obtained_Marks/(float)Total_Marks)*100);
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0;

    printf("Enter obtained Marks\n");
    scanf("%d",&iValue1);

    printf("Enter Total Marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("The percentage is %f",fRet);

    return 0;


}
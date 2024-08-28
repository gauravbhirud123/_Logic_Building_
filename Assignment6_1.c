//WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND PRINT THAT NUMBER OF $ & * ON 
//SCREEN.

#include<stdio.h>
void Pattern(int iNo)
{
    if(iNo<0)       //UPDATOR.
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        printf(" $ * ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
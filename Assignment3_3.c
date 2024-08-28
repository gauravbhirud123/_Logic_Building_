// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND PRINT EVEN FACTORS OF THAT NUMBER.

#include<stdio.h>

void DisplayFactors(int iNo)
{

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt == 0 && iCnt%2 == 0)
        {
            printf("%d\n",iCnt);   
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}



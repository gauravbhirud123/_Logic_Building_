// WRITE A PROGRAM WHICH ACCEPT ONE NUMBER FROM USER AND PRINT THAT NUMBERS OF EVEN 
// NUMBERS ON SCREEN.

#include<stdio.h>
void PrintEven(int iNo)
{

    for(int iCnt=1; iCnt<=iNo; iCnt++ )
    {
        if(( iCnt%2 ) == 0)
        {
            printf("%d", iCnt );
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
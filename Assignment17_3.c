#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=5;iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elememts\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}
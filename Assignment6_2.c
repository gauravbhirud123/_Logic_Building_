//WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND PRINT NUMBBERS TILL THAT NUMBER

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf(" %d ",iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/*#include<stdio.h>
int main()
{
    int iValue = 0;

    printf("Enter the value");
    scanf("%d",&iValue);

    for(int i=1; i<iNo; i++)
    {
        print("%d\n",i);
    }

    return 0;
}*/


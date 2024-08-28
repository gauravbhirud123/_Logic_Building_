//Accept number from user and display below pattern.

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    char Ch = '\0';
    for(iCnt = 1,Ch = 'A';iCnt<iNo;iCnt++,Ch++)
    {
        printf("%c\t",Ch);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number Of Elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
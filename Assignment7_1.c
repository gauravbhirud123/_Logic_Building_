//WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND IF NUMBER IS LESS THAN 50 THEN
//PRINT SMALL,IF IT IS GRAEATER THAN 50 AND LESS THAN 100 THEN PRINT MEDIUM ,IF IT IS 
//GREATER THAN 100 THEN PRINT LARGE. 

#include<stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if((iNo>50) && (iNo<100))
    {
        printf("Medium");
    }
    else if(iNo>100)
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}

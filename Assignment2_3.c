//Accept number from user if number is less than 10 then print "HELLO" otherwise 
//print "DEMO".

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("HELLO");
    }
    else
    {
        printf("DEMO");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//WRITE A PROGRAM WHICH ACCEPT NAME FROM USER AND PRINT THAT NAME.

#include<stdio.h>
int main()
{
    char Name[30];
    printf("Please enter full name\n");
    scanf("%s",&Name);

    printf("Your name is %s",Name);

    return 0;
}
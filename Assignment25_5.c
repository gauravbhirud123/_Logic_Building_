#include<stdio.h>

void Display(char ch)
{
    printf("Ascii value of the character in DECIMAL is : %d\n ",ch);
    printf("Ascii value of the character in HEXADECIMAL is : %x\n ",ch);
    printf("Ascii value of the character in OCTAL is : %o\n ",ch);

}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
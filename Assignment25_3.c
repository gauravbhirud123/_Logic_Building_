#include<stdio.h>

void Display(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        int i = 0;

        for(i = ch;i<='Z';i++,ch++)
        {
            printf("%c\t",ch);
        }
    }
    else if(ch>='a' && ch<='z')
    {
        int j = 0;
        for(j = ch;j>='a';j--,ch--)
        {
            printf("%c\t",ch);
        }
    }
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;

}
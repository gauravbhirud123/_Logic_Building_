#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        
        if(*str == 'a'||*str == 'e'||*str == 'i'||*str == 'o'||*str == 'u')
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    bool bRet = FALSE;

    printf("Enter String\n");
    scanf("%[^\n]s",arr);

    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;

}


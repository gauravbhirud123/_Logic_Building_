#include<stdio.h>

int FirstChar(char *str,char ch)
{
    
    int iCnt = 0;

    while (*str != '\0')
    {
        iCnt++;

        if (*str == ch) 
        {
            return iCnt;
        }

        str++;
    }

}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",&arr);

    printf("Enter the Character\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);
    printf("Character location is %d",iRet);

    return 0;
}
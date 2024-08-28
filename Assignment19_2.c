#include <stdio.h>

void Pattern(int iRow, int iCol) 
{    
    int i = 0;
    char ch = '\0';
    int j = 0;

    for (i = 1; i <= iRow; i++) 
    {
        if (i % 2 == 0) 
        {
            for (j = 1, ch = 'a'; j <= iCol; j++, ch++) 
            {
                printf("%c", ch);
            }
            printf("\n");
        }
        else
        {
            for (j = 1,ch = 'A';j<=iCol;j++,ch++)
            {
                printf("%c",ch);
            }
            printf("\n");
        } 
        
    }
}

int main() 
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

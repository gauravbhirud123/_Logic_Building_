#include<stdio.h>

void Pattern(int iRow,int iCol)

{
    int i = 0;
    int j = 0;
    int num = 1;
    for(i = 1;i<=iRow;i++)
    {
        if(i%2 == 0)
        {
            for(int j = 2;j<=iCol*2;j = j+2)
            {
                printf("%d\t",j);
            }
        }
        else
        {
            for(int j = 1;j<=iCol*2;j = j+2)
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
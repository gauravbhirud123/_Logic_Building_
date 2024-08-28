//ACCEPT N NUMBERS FROM USER AND DISPLAY ALL SUCH ELEMENTS WHICH ARE DIVISIBLE BY 5.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%5 == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter Number Of Elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}
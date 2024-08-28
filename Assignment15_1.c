//ACCEPT N NUMBERS FROM USER AND ACCEPT ONE ANOTHER NUMBER AS NO, CHECK WHETHER NO IS 
//PRESENT OR NOT.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int iValue = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p  = (int*)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number you have to check\n");
    scanf("%d",&iValue);

    bRet = Check(p,iSize,iValue);
    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p);

    return 0;
    
}
//Accept one number from user and accept one another number as no, return index
//of Last occurance of that no.

#include<stdio.h>
#include<stdlib.h>
int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iLastIndex = -1;
    
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iLastIndex = iCnt;
        }
    
    } 
    return iLastIndex;     
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int iValue = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d : ",iCnt +1);
        scanf("%d",&p[iCnt]);
    }

    iRet = FirstOcc(p,iSize,iValue);
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurance of number is %d",iRet);
    }

    free(p);

    return 0;
}
//ACCEPT N NUMBERS FROM USER AND RETURN DIFFERENCE BETWEEN SUMMATION OF EVEN ELEMENTS 
//AND SUMMATION OF ODD ELEMENTS.
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        if(Arr[iCnt]%2 != 0)
        {
            iOddSum = iOddSum + Arr[iCnt];
        }

        iDiff = iEvenSum - iOddSum;
    }
    return iDiff;
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
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);
    printf("Result is %d",iRet);

    free(p);

    return 0;

}
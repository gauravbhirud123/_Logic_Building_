//ACCEPT N NUMBERS FROM USER AND RETURN DIFFERENCE BETWEEN FREQUENCY OF EVEN NUMBER
//AND ODD NUMBERS.

#include<stdio.h>
#include<stdlib.h>

int DifferenceEvenOdd(int Arr[],int iLength)
{
    int iCnt = 0;
    int iEvenFrequency = 0;
    int iOddFrequency = 0;
    int iDifference = 0;

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iEvenFrequency++;
        }
        if(Arr[iCnt]%2 != 0)
        {
            iOddFrequency++;
        }
    }
    iDifference = iEvenFrequency - iOddFrequency;
    return iDifference;
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
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
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = DifferenceEvenOdd(p,iSize);
    printf("%d",iRet);

    free(p);

    return 0;
}
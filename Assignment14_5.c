//ACCEPT ONE NUMBER FROM USER AND ACCEPT ONE ANOTHER NUMBER AS NO AND RETURN FREQUENCY
//OF NO RETURN FREQUENCY OF NO FORM IT.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
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

    printf("Enter the number you have to check\n");
    scanf("%d",&iValue);

    iRet = Frequency(p,iSize,iValue);
    printf("%d occours %d times\n",iValue,iRet);

    free(p);

    return 0;

}
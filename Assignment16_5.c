//ACCEPT N NUMBERS FROM USER AND DISPLAY SUMMATION OF DIGITS OF EACH NUMBER.
#include<stdio.h>
#include<stdlib.h>
void DigitsSum(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        int iDigit = 0;
        int iSum = 0;
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt]%10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt]/10;

        }
        printf("The sum is %d\t",iSum);
    }  
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter the size of array\n");
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

    DigitsSum(p,iSize);

    free(p);

    return 0;
}
//ACCEPT N NUMBERS FROM USER AND PRODUCT OF ALL ODD NUMBERS.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)

{
    int iCnt = 0;
    int iMulti = 1;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2 != 0)

        iMulti = iMulti * Arr[iCnt];

    }
    return iMulti;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter the size of array\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d Array elements\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p,iSize);
    printf("The Product of Odd numbers is %d",iRet);

    free(p);

    return 0;

}
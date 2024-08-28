//Accept N numbers from user and display all such numbers which contains 3 digits 
//in it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int iDigit = 0;
    int iCnt = 0;
  
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        int temp = Arr[iCnt];  // Store the original number in a temporary variable

        // Count the number of digits in the current element
        int count = 0;
        while (temp != 0)
        {
            iDigit = temp % 10;
            temp = temp / 10;
            count++;
        }

        // Check if the number has 3 digits and print it
        if (count == 3)
        {
            printf("%d has 3 digits\n", Arr[iCnt]);
        }
    }
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

    Digits(p,iSize);

    free(p);

    return 0;
}
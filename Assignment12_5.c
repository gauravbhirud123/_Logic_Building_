//WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND RETURN DIFFERENCE BETWEEN 
//SUMMATION OF EVEN DIGITS AND SUMMATION OF ODD DIGITS.

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvensum = 0;
    int iOddsum = 0;
    int iDiff = 0;
    

    while(iNo != 0)
    {
        iDigit = iNo%10;

        if(iDigit%2 == 0)
        {
            iEvensum = iEvensum + iDigit;   
        }
        if(iDigit%2 != 0)
        {
            iOddsum = iOddsum + iDigit;
        }

        iNo = iNo/10;

        iDiff = iEvensum - iOddsum; 

    }
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet);

    return 0;
}


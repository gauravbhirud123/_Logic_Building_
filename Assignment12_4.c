//WRITE A PROGRAM WHICH ACCPT NUMBER FROM USER AND RETURN MULTIPLICATION OF 
//ALL DIGITS.

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;

    while(iNo != 0)
    {
        iDigit = iNo%10;

        iMulti = iMulti * iDigit;

        iNo = iNo/10;
    }
    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d",iRet);

    return 0;
}
//WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND RETURN DIFFERENCE BETWEEN SUMMATION 
//OF ALL ITS FACTORS AND NON FACTORS

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iDiff = 0;
    int Factor = 0;
    int NonFactor = 0;
    for(iCnt=0; iCnt<=iNo; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
           Factor = Factor + iCnt; 
        }
        if((iNo%iCnt)!=0)
        {
            NonFactor = NonFactor + iCnt;
        }

        iDiff = Factor - NonFactor;
        
    }
    return iDiff;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = FactDiff( iValue);
    printf("%d",iRet);

    return 0;

    
}
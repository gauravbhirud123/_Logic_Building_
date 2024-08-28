// WRITE A PROGRAM WHICH ACCEPT NUMBER FROM USER AND DISPLAY ITS MULTIPLICATION 
// OF FACTORS

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 1;
    int iMulti = 1;

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iMulti = iMulti*iCnt;
        }
    }
    return iMulti; 

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("The multiplication of factors is %d",iRet);

    return 0;



    
}
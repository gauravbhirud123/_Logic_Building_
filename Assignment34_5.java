import java.util.*;

class Assignment34_5
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter the value");
        iValue = sobj.nextInt();

        int iRet = 0;
        iRet = CountDiff(iValue);
        System.out.println("SUMMATION OF EVEN AND ODD DIGITS : "+iRet);
    }


    public static int CountDiff(int iNo)
    {
        int iDigit = 0;
        int iEven = 0;
        int iOdd = 0;
        int iDiff = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;

            if(iDigit % 2 == 0)
            {
                iEven = iEven + iDigit;
            }
            else if(iDigit % 2 != 0)
            {
                iOdd = iOdd + iDigit;
            } 

            iDiff = iEven - iOdd;  
        } 
        return iDiff;   
    }   
}
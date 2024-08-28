import java.util.*;

class Assignment34_2
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter the value");
        iValue = sobj.nextInt();

        int iRet = 0;
        iRet = CountOdd(iValue);
        System.out.println("ODD NUMBER IN THE DIGIT : "+iRet);
    }


    public static int CountOdd(int iNo)
    {
        int iDigit = 0;
        int iOdd = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;

            
            if(iDigit % 2 != 0)
            {
                iOdd++;
            }
        }  
        return iOdd; 
    }
    
}
import java.util.*;

class Assignment34_1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter the value");
        iValue = sobj.nextInt();

        int iRet = 0;
        iRet = CountEven(iValue);
        System.out.println("EVEN NUMBER IN THE DIGIT : "+iRet);
    }


    public static int CountEven(int iNo)
    {
        int iDigit = 0;
        int iEven = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;

            
            if(iDigit % 2 == 0)
            {
                iEven++;
            }
        }  
        return iEven; 
    }
    
}
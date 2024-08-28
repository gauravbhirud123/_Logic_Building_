import java.util.*;

class Assignment34_4
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter the value");
        iValue = sobj.nextInt();

        int iRet = 0;
        iRet = Multiply(iValue);
        System.out.println("MULTIPLICATION OF ALL DIGITS IS : "+iRet);
    }


    public static int Multiply(int iNo)
    {
        int iDigit = 0;
        int Multi = 1;
        

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;

            Multi = Multi * iDigit;
        }  
        return Multi ; 
    }
    
}
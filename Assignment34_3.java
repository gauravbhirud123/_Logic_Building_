import java.util.*;

class Assignment34_3
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter the value");
        iValue = sobj.nextInt();

        int iRet = 0;
        iRet = CountRange(iValue);
        System.out.println("DIGIT IN BETWEEN 3 AND 7 : "+iRet);
    }


    public static int CountRange(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;

            
            if(iDigit > 3 && iDigit < 7)
            {
                iCount++;
            }
        }  
        return iCount; 
    }
    
}
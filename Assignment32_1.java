import java.util.*;

class Assignment32_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        int iRet = 0;
        iRet = CountCapital(str); 
        System.out.println("Capital character in string : "+iRet);  
    }
    
    public static int CountCapital(String str) 
    {
        int iCnt = 0;
        for (int i = 0; i < str.length(); i++) 
        {
            char ch = str.charAt(i);
            if (ch >= 'A' && ch <= 'Z') 
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
    



import java.util.*;

class Assignment32_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        int iRet = 0;
        iRet = CountSmall(str); 
        System.out.println("Small character in string : "+iRet);  
    }
    
    public static int CountSmall(String str) 
    {
        int iCnt = 0;
        for (int i = 0; i < str.length(); i++) 
        {
            char ch = str.charAt(i);
            if (ch >= 'a' && ch <= 'z') 
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
    



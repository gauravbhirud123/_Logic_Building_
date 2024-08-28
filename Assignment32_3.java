import java.util.*;

class Assignment32_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        int iRet = 0;
        iRet = CountSmall(str); 
        System.out.println("Difference between capital and small character in string : "+iRet);  
    }
    
    public static int CountSmall(String str) 
    {
        int Capital = 0;
        int Small = 0;
        int Diff = 0;

        for (int i = 0; i < str.length(); i++) 
        {
            char ch = str.charAt(i);
            if (ch >= 'A' && ch <= 'Z') 
            {
                Capital++;
            }
            else if (ch >= 'a' && ch <= 'z') 
            {
                Small++;
            }    
        }

        Diff = Capital - Small;

        return Diff;
    }
}
    



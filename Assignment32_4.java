import java.util.*;

class Assignment32_4
{
    public static void main(String arg[])

    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        Assignment32_4 obj = new Assignment32_4();
        boolean bRet = obj.ChkVowel(str);
    
        if(bRet == true)
        {
            System.out.println("IT CONTAINS VOWELS");
        }
        else
        {
            System.out.println("IT DOES NOT CONTAINS VOWELS");
        }
        
    }

    public boolean ChkVowel(String str)
    {
        for (int i = 0; i < str.length(); i++) 
        {
            char ch = str.charAt(i);
            if (ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                return true;
            }    
        }
        return false;

    }

}
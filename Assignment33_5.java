import java.util.*;

class Assignment33_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        {
            int Arr[] = new int[6];

            System.out.println("Enter Array Elements");
            for(int i = 0;i < Arr.length;i++)
            {
                System.out.println("Enter element : "+(i+1));
                Arr[i] = sobj.nextInt();
            }

            Display(Arr);
        }
    }

    public static void Display(int Arr[])
    {
        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i] % 11 == 0)
            {
                System.out.print(Arr[i] +"\t");
            }    
        }    
    }  
}
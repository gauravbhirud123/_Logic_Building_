import java.util.*;

class Assignment35_1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);


        System.out.println("Enter The Size Of Array");
        int iSize = sobj.nextInt();
        int Arr[] = new int[iSize];
        System.out.println("Enter Array Element");
        for(int i = 0;i < Arr.length;i++)
        {
            System.out.println("Enter element : "+(i+1));
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Enter the element that you want to search");
        int iValue = sobj.nextInt();
 
        Check(Arr,iValue);  
    }

    public static boolean Check(int Arr[],int iNo)
    {
        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i] == iNo)
            {
                return true;
            }
        }
        return false;
    }
}
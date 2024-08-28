import java.util.*;

class Assignment33_1
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

            int iRet = Difference(Arr);
            System.out.println("The Difference is : "+iRet);
        }
    }

    public static int Difference(int Arr[])
    {
        int iEven = 0;
        int iOdd = 0;
        int iDiff = 0;

        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i] % 2 == 0)
            {
                iEven = iEven + Arr[i];
            }
            else if(Arr[i] % 2 != 0)
            {
                iOdd = iOdd + Arr[i];
            }
        }

        iDiff = iEven - iOdd;
        return iDiff;  
    }
   
}
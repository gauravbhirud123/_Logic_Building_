import java.util.*;

class Assignment35_5
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
            System.out.println("Enter Element : "+(i+1));
            Arr[i] = sobj.nextInt();
        }

        int iRet = 0;
        iRet = Product(Arr);
        System.out.println("PROUDECT OF ODD NUMBER IS : "+iRet);
    }

    public static int Product(int Arr[])
    {
        int iMulti = 1;

        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i] % 2 != 0)
            {
                iMulti = iMulti * Arr[i];
            }
        }
        return iMulti;
    }
}
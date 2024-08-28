import java.util.*;

class Assignment35_4
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

        System.out.println("Enter Starting point");
        int iStart = sobj.nextInt();

        System.out.println("Enter Ending Point");
        int iEnd = sobj.nextInt();

        Display(Arr,iStart,iEnd);
    }

    public static void Display(int Arr[],int iStart,int iEnd)
    {
        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i] > iStart && Arr[i] < iEnd)
            {
                System.out.print(Arr[i]+ "\t");
            }
        }
    }
}
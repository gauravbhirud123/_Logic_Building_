#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr,int iSize,T iNo)
{
    int i = 0;
    int iPos = 0;
    for(int i = 0;i<iSize;i++)
    {
        if(arr[i] == iNo)
        {
            break;
        }
        iPos++;   
    }
    return iPos+1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    cout<<iRet<<"\n";

    return 0;
    
}
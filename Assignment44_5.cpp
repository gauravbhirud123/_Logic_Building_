#include<iostream>
using namespace std;

template <class T>
T minimum(T *arr,int iSize)
{
    T min = arr[0];
    for(int i = 0;i < iSize;i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {3.7,9.8,8.7};
    
    int iRet = minimum(arr,5);
    cout<<iRet<<endl;

    int fRet = minimum(brr,3);
    cout<<fRet<<endl;

    return 0;

}
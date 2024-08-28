#include<iostream>
using namespace std;

template <class T>
T maximum(T *arr,int iSize)
{
    T max = arr[0];
    for(int i = 0;i < iSize;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {3.7,9.8,8.7};
    
    int iRet = maximum(arr,5);
    cout<<iRet<<endl;

    int fRet = maximum(brr,3);
    cout<<fRet<<endl;

    return 0;

}
#include<iostream>
using namespace std;

template<class T>
T maximum(T iNo1,T iNo2,T iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        return iNo1;
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int max_value = maximum(34,78,23);
    cout << "Max value is : " << max_value << endl;

    return 0;
}
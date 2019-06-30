#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long int>arr;
    arr.reserve(10000000000);
    long int n;
    cin >> n;
    int i=0;
    while(n>0)
    {
        int r=n%2;
        if(r==1)
        {
            arr.push_back(1);
            n=n/2;
        }
        if(r==0)
        {
            arr.push_back(0);
            n=n/2;
        }

    }
    int count=1;
    int tt=1;
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(arr[i]==arr[i+1]&&arr[i]==1)
        {
            count++;
            tt=max(count,tt);
        }
    }
    cout<<tt;


    return 0;
}

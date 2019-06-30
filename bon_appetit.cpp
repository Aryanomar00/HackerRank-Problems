#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int t;
    cin>>t;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arr[t]=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    sum=sum/2;
    int k;
    cin>>k;
    if(k-sum>0)
    {
        cout<<k-sum<<endl;
    }
    if(k==sum)
    {
        cout<<"Bon Appetit"<<endl;
    }


}

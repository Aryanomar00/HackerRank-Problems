
#include<algorithm>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int t=0;
    int maxi=0,mini=0;
    int minimum=arr[t];
    int maximum=arr[t];
    for(int i=1;i<n;i++)
    {
        if(maximum<arr[i])
        {
            maximum=max(maximum,arr[i]);
            t++;
            maxi++;

        }
        else if(minimum>arr[i])
        {
            minimum=min(minimum,arr[i]);
            t++;
            mini++;
        }
    }
    cout<<maxi<<" "<<mini;

}

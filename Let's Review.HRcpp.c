#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() {
    long int t;
    cin>>t;
    while(t--)
    {
        char s[10010];
        cin>>s;
        long int size=strlen(s);
        for(int i=0;i<size;i+=2)
        {
            cout<<s[i];
        }
        cout<<" ";
         for(int i=1;i<size;i+=2)
        {
            cout<<s[i];
        }
        cout<<endl;



    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

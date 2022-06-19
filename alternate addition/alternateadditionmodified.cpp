#include<bits/stdc++.h>
using namespace std;
void fun()
{
    // time complexity o(1)
    int a,b,dist;
    cin>>a>>b;
    dist = b - a;
    if(dist%3 == 2)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        cout<<"YES"<<"\n";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        fun();
        t--;
    }
    return 0;
}
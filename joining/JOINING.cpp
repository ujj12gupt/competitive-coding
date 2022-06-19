#include <iostream>
using namespace std;
int fun()
{
    int n,d,r,k,groups,grp;
    cin>>n>>k;
    // to identify total number of groups in this case
    d = n/5;
    r = n%5;
    if(r == 0)
    {
        groups = d;
    }
    else
    {
        groups = d + 1;
    }
    // to identify k(person who resigned) is from which group
    d = k/5;
    r = k%5;
    if(r == 0)
    {
        grp = d;
    }
    else
    {
        grp = d + 1;
    }
    return(groups - grp);
}
int main() 
{
	// your code goes here
    int t;
    cin>>t;
    while(t!=0)
    {
        cout<<fun()<<"\n";
        t--;
    }
	return 0;
}

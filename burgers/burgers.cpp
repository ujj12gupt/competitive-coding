#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t!=0)
	{
	    cin>>a>>b;
	    cout<<min(a,b)<<"\n";
	    t--;
	}
	return 0;
}

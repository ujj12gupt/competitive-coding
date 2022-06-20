#include <iostream>
using namespace std;
void fun()
{
	 int d,l,r;
	 cin>>d>>l>>r;
	// chef has taken his first dose
	//chef 2nd dose will be taken after when x>l && x<r
	// assuming chef will take same duration of time of taken dose
	// if he has taken his first dose after d days
	// he will take his second dose after d days of first dose
	if(d>=l&& d<=r)
	{
	    cout<<"Take second dose now"<<"\n";
	}
	else if(d>r)
	{
	    cout<<"Too Late"<<"\n";
	}
	else if(d<l)
	{
	    cout<<"Too Early"<<"\n";
	}
}
int main()
{
	// your code goes here
	int t;
	cin>>t;
	while(t!=0)
	{
	    fun();
	    t--;
	}
	return 0;
}

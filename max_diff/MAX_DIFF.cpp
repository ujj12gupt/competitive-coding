#include <iostream>
using namespace std;
void fun()
{
	int n,s,diff,t1,t2;
	cin>>n>>s;
	 //logic1: the type of t1 and t2 depends
	// whether n is bigger or s
	if(n>=s)
	{
	   diff = s; // 4,4 == {0,4},{1,3},{2,2}
	   cout<<diff<<"\n";
	}
	else
	{
	    //maxsum = 2*n;
	    // given that t1<n;t2<n
	    t1 = n;
	    t2 = s-n;
	    diff = t1-t2;
	    cout<<diff<<"\n";
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

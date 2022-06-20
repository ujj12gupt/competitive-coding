#include <iostream>
using namespace std;
void fun()
{
    int n,a,b,c,dish1,dish2,dish,left;
    cin>>n>>a>>b>>c;
    if(a>=b)
    {
        dish1 = b;
        left = a-b;
    }
    else if(b>a)
    {
        dish1 = a;
        left = b-a;
    }
    if(left>=c)
    {
        dish2 = c;
    }
    else if(left<c)
    {
        dish2 = left;
    }
    dish = dish1+dish2;
    if(n<=dish)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
}
int main()
{
	// your code goes here
	int  t;
	cin>>t;
	while(t!=0)
	{
	    fun();
	    t--;
	}
	return 0;
}

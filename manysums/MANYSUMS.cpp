#include <iostream>
using namespace std;
void fun()
{
    int l,r,num;
    // l is the lower limit of range
    // r if bigger limit of range
    cin>>l>>r;
    if(l==r)
    {
        num = 1;
        cout<<num<<"\n";
    }
    else if(l!=r)
    {
       num = 2*r -2*l +1;
       cout<<num<<"\n";
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

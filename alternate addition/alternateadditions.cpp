#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// problem: time complexity o(n)
	int t,a,b,cnt = 0;
	cin>>t;
	while(t!= 0)
	{
	    cin>>a>>b;
	    while(a < b-1)
	    {
	        cnt++;
	        if(cnt%2 == 0)
	        {
	            a = a + 2;
	        }
	        else
	        {
	            a = a + 1;
	        }
	    }
	    if(a == b)
	    {
	        cout<<"YES"<<"\n";
	    }
	    else if(a == b-1)
	    {
	        if((cnt+1)%2 == 0)
	        {
	            cout<<"NO"<<"\n";
	        }
	        else
	        {
	            cout<<"YES"<<"\n";
	        }
	    }
	    cnt = 0;
	    t--;
	}
	return 0;
}

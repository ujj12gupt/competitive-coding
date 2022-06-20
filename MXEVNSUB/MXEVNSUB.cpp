#include <iostream>
using namespace std;
void fun()
{
    int n,len,duplates;
    cin>>n;
    // odd + even = odd
    // even+ even = even
    // odd+ odd = even
    //  if n is odd
    // if number of duplates (even,odd) comes odd times
    // overall sum is even thus maxeven sum is sum of all numbers from 1 to n
    // if number of duplates (even,odd) comes even times
    // overall sum is odd then maxeven sum is sum of all numbers from 1 to n -1
    // consider 5
    // 1,2,3,4,5
    // 5/2 = 2
    // here duplates comes 2 times
    // consider 3
    // here duplates comes 1 time
    // 1 2 3 
    // 3/2 = 1
    // if n is even
    // consider 4
    // 1,2,3,4
    // no.of even duplates give even sum
    // consider  2
    // 1,2
    // no.of odd duplates give odd sum
    duplates = n/2;
    if (n%2==0)
    {
       if(duplates%2==0)
       {
           len = n;
           cout<<len<<"\n";
       }
       else
       {
           len = n-1;
           cout<<len<<"\n";
       }
    }
    else
    {
        if(duplates%2==0)
        {
            len = n-1;
            cout<<len<<"\n";
        }
        else
        {
            len = n;
            cout<<len<<"\n";
        }
    }
}
int main() {
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

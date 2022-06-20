#include <iostream>
using namespace std;
void fun()
{
    int a,b,c,d,k,diff1,diff2,temp;
    cin>>a>>b>>c>>d>>k;
    //task: to make a equal to c
    //task: to make b equal to d
    // operation: we can add +1 or -1 to a or b 
    diff1 = abs(a-c);
    diff2 = abs(b-d);
    temp =diff1+diff2;
    // we are calculating absolute distance between a and c
    // we are calculating absolute distance between b and d
    // temp = sum of such distances
    // if temp = k(number of steps)
    if(temp == k)
    {
        cout<<"YES"<<"\n";
    }
    else if(k<temp)
    {
        cout<<"NO"<<"\n";
    }
    else if(k>temp)
    {
        if((temp-k)%2==0)
        {
            cout<<"YES"<<"\n";
            // if we get desired output in less than k steps and we have to get in k steps
            // if we get the desired cordinate at one temp
            // if k = 3 then we can move to adjacent coordinate and then come back to original coordinate
        }
        else
        {
            cout<<"NO"<<"\n";
        }
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

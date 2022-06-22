#include <iostream>
using namespace std;
void fun()
{
    int n,p,x,y,cnt = 0;
    cin>>n>>p>>x>>y;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<p;i++)
    {
        if(arr[i]==0)
        {
            cnt = cnt + x;
        }
        else
        {
            cnt = cnt + y;
        }
    }
    cout<<cnt<<"\n";
    // n: total number of people
    // p: chef position from front
    // x: time taken to vaccinate a child
    // y : time taken to vaccinate an elderly person
    // n: 4     0   n:  3     1  n:3    1
    // p:2      1   p : 3      0  p:1   1
    // x:3      0    x: 2      1  x:2   1
    // y: 2      1   y: 2        y:3
    // time : 5     time: 6     time:3
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

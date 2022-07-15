#include <iostream>
using namespace std;

int main() {
	// your code goes here  
    int t,maxt,maxn,sumn;
    cin>>t;
    // find the maximum value of N1^2 + N2^2 + .... + NT^2
    // such that N1+N2+N3+N4+...NT<= sumn
    while(t!=0)
    {
        cin>>maxt>>maxn>>sumn;
        int sum = 0;
        int cnt = 0;
        int a = 0;
        // task1: compare sum and sumn
        while(sum<sumn)
        {
            sum+= maxn;
            cnt++;
            if(cnt==maxt)
            {
                break;
            }
        }
        if(sum>sumn)
        {
            a = maxn-(sum-sumn);
            cnt =cnt -1;
            cout<<cnt*(maxn)*(maxn)+a*a<<"\n";
        }
        else 
        {
            cout<<cnt*(maxn)*(maxn)<<"\n";
        }
        t--;
    }
	return 0;
}

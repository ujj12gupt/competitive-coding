#include <iostream>
using namespace std;

int main()
{
	// your code goes here
    //  n students
    // k lectures
    // each student i and each lecture j, the ith student watched jth lecture for tij mins
    //  i asked the question qi times
    // certificate criteria:
    // a student must have watched at least m mins of total lecture
    // question<= 10
    //  participant eleigible for certificate
    int n, m , k,cnt = 0;
    cin>>n>>m>>k;
    while(n!=0)
    {
        int tim=0;
        // at least m mins
        //  For each valid i, the i-th of these lines contains K+1 space-separated integers Ti,1,Ti,2,…,Ti,K,Qi.
        int lect[k+1];
        for(int j = 0; j<(k+1);j++)
        {
            cin>>lect[j];
        }
        for(int j=0; j<k;j++)
        {
            tim = tim + lect[j];
        }
        // compare tim with m 
        if(tim>= m && lect[k]<= 10)
        {
            cnt= cnt+1;
        }
        tim = 0;
        n--;
    }
    cout<<cnt<<"\n";
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t,k;
	cin>>t;
	while(t--)
	{
	    long long m=0;
	    cin>>n>>k;
	    for(int i=0;i<n;i++)
	    {
	        long long temp;
	        cin>>temp;
	        if(abs(m)<abs(temp))
	            m=temp;
	    }
	    cout<<1<<endl<<m<<endl;
	}
	return 0;
}

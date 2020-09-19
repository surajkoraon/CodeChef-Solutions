#include <bits/stdc++.h>
using namespace std;

int main() {
	    int t;
	    cin>>t;
	    while(t--)
	    {
	        int sum=0,child=0;
	        int n;
	        cin>>n;
            for(int i=0;i<n;i++)
            {
                int a,b;
                cin>>a>>b;
                sum+=a;
                child+=b;
            }
            cout<<sum-child<<endl;
	    }
	return 0;
}

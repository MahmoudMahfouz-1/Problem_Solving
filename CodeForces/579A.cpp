//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : problem/579/A. Raising Bacteria
//============================================================================

#include <bits/stdc++.h>

#define ll long long
using namespace std;
bool isPowerOfTwo(int x)
{
	// x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
	return (x && !(x & (x - 1)));
}
int main()
{
	long int n,ans;
	while (cin>>n)
	{
		ans=0;
		while(n>1)
		{
			if(n%2==0)
				n=n/2;
			else
			{
				n=n-1;ans++;
			}
		}
		cout<<ans+1<<endl;
		return 0;
	}
}

//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : problem/1230/A. Dawid and Bags of Candies
//============================================================================

#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if( (a + b) == (c + d) || (a + c) == (b + d) || (b + c) == (a + d) || a == b + c + d
			|| b == a + c + d || c == a + b + d || d == a + c + b)
		cout<<"YES"<<endl;
	else
		cout<<"NO" <<endl;

	return 0;
}

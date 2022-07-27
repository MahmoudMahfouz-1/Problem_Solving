//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : 732/problem/B/Cormen — The Best Friend Of a Man
//============================================================================

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
	long long t;
	cin >> t;
	while(t--)
	{
		long long r, a , l, sum = 1, x;
		cin >> l >> r >> a;
		if (r%a == a-1)
			cout << r/a + r%a<<endl;
		else
		{
			sum += r % a;
			x = r - sum;
			if( x >= l && x<=r)
				cout << x/a + x%a<<endl;
			else
				cout << r/a + r%a<<endl;
		}
	}
	return 0;
}


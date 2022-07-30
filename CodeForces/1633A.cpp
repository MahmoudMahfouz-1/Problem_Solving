//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : 1633/problem/A. Div. 7
//============================================================================

#include <bits/stdc++.h>

#define ll long long
using namespace std;
// ||
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(n % 7 == 0)
			cout << n << endl;
		else
		{
			for(int i = 1; i < 10;i++)
			{
				if(((n/10)*10 + i) % 7 == 0)
				{
					cout<< (n/10)*10 + i << endl;
					break;
				}
			}
		}

	}
	return 0;
}


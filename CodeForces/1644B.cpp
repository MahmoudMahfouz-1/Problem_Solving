//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : 1644/problem/B. Anti-Fibonacci Permutation
//============================================================================

#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		deque<int>q;
		int n;
		cin>>n;
		if(n == 3)
			cout << "1 3 2\n2 3 1\n3 2 1"<<endl;
		else
		{
			for(int i = n; i >=1 ; i--)
				q.push_back(i);
			while(n--)
			{
				for(auto it = q.begin() ; it != q.end() ; ++it)
					cout << *it << " ";
				cout<<endl;
				int x = q.front();
				q.pop_front();
				q.push_back(x);

			}
		}
	}
	return 0;
}

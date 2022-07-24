//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : 1651/problem/A/Playoff
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;

		cout << (1 << n) - 1<<endl;
	}

	return 0;
}


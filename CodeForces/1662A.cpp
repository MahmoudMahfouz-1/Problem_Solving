//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : 1622/problem/A. Construct a Rectangle
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
		int arr[3];
		for(int i =0; i < 3; i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+3);
		if((arr[1] == arr[2] && arr[0] % 2 == 0) || (arr[0] == arr[2] && arr[1] % 2 == 0)
				|| (arr[0] == arr[1] && arr[2] % 2 == 0 )|| arr[0] + arr[1] == arr[2] )

			cout << "YES" << endl;
		else
			cout << "NO" <<endl;

	}
	return 0;
}


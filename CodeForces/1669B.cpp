//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : 1669/problem/B/Triple
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while(t--)
	{
		int n, var = 0;
		cin >> n;
		int arr[n] = {0};
		int freqarr[n + 1] = {0};
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for(int i = 0; i < n; i++)
		{
			freqarr[arr[i]]++;
		}
		for(int i = 0; i < n + 1; i++)
		{
			if(freqarr[i] >= 3)
			{
				cout << i <<endl;
				var++;
				break;
			}
		}
		if(var == 0)
			cout << "-1" <<endl;
	}

	return 0;
}


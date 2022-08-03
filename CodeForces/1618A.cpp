//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : 1618/problem/A. Polycarp and Sums of Subsequences
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
		ll arr[7],x,y,z;
		for(int i = 0; i < 7; i++)
		{
			cin >> arr[i];
		}
		x = arr[6] - arr[5];
		z = arr[4] - x;
		y = arr[6] - (x+z);
		cout<< x << " " << y << " " << z <<endl;
	}
	return 0;
}
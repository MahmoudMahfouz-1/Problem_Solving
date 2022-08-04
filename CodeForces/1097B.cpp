//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : problem/1097/B. Petr and a Combination Lock
//============================================================================
 
#include <bits/stdc++.h>
 
#define ll long long
using namespace std;
 
int main()
{
	int n ;
	cin >> n ;
	int rotations[n];
	for( int i = 0 ; i < n ; i++ )
		cin >> rotations[i];
	for( int mask = 0 ; mask < (1<<n) ; mask++ )
	{
		int sum = 0 , sub = 0 ;
		for( int i = 0 ; i < n ; i++ )
		{
			if((mask&(1<<i))!=0)
				sum+=rotations[i];
			else
				sub+=rotations[i];
		}
		if((sum-sub)%360==0)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
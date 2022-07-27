//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : 732/problem/B/Cormen — The Best Friend Of a Man
//============================================================================

#include <iostream>
#include <cstdlib>
#include <cmath>
#define ll long long

using namespace std;

int main()
{
	int n, k, sum = 0, printedSum = 0;
	cin >> n >> k;
	int arr[n] = {0};
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	for(int i = 1; i < n; i++)
	{
		sum = arr[i] + arr[i-1];
		if(sum < k)
		{
			printedSum += (k - sum);
			arr[i] += (k - sum) ;
		}
	}
	cout << printedSum<<endl;
	for(int i =0; i < n; i++)
	{
		cout << arr[i]<< " ";
	}

	return 0;
}
// 164 44 238 205 373 249 87 30 239 90


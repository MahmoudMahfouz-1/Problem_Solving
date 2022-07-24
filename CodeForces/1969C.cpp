//============================================================================
// Author      : Mahmoud Essam
// Status      : Accepted
// Problem     : C. Odd/Even Increments
//============================================================================

#include <iostream>
using namespace std;
int checkArray(int arr[], int n)
{
	/*
	 * The Function will return 1 if the array is all even or all odd
	 * else it will return 0
	 */
	int counterEven = 0, counterOdd = 0;
	for(int i = 0 ; i < n; i++)
	{
		if(arr[i] % 2 == 0)
			counterEven++;
		else
			counterOdd++;
	}
	if(counterEven == n)
		return 1;
	else if(counterOdd == n)
		return 1;

	return 0;
}

int operateArray(int arr[],int n)
{
	/*
	 * This function will return 1 if the array works else will return 0;
	 */
	if(checkArray(arr,n) == 1)
		return 1;
	// Add one to every odd index and test
	for(int i = 0; i < n; i++)
	{
		if(i % 2 != 0)
			arr[i]++;
	}
	if(checkArray(arr,n) == 1)
		return 1;
	else
		return 0;
}


int main()
{
	int t = 0;
	cin >> t;
	while(t--)
	{
		int n = 0;
		cin >> n;
		int arr[n] = {0};
		for(int j = 0; j < n; j++)
		{
			cin >> arr[j];
		}
		if(operateArray(arr,n) == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}

	return 0;
}


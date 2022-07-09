/*
 *  Author : Mahmoud Essam
 */

#include "stdio.h"

int main()
{

	//			VeryBigSum
	long long int n, i, sum = 0;
	scanf("%lld",&n);
	long long int arr[n];
	for(i = 0; i<n; i++)
	{
		scanf("%lld",&arr[i]);
	}
	for(i = 0; i<n; i++)
	{
		sum += arr[i];
	}
	printf("Array Sum is %lld\n",sum);
	return 0;
}

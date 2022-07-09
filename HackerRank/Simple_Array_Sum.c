/*
 *  Author : Mahmoud Essam
 */

#include "stdio.h"

int main()
{
	int n, i, sum = 0;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0; i<n; i++)
	{
		sum += arr[i];
	}
	printf("Array Sum is %d\n",sum);
	return 0;
}

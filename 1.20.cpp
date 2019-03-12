

#include "pch.h"
#include <stdio.h>
#define max 100

int main()
{
	int a[max], x, p, i, n;
	printf("Input n, x:\n");				//一次
	scanf_s("%d %d", &n, &x);				//一次
	if (n > 100)							//一次
	{
		printf("The input is too large");	//一次
		return 0;							//一次
	}
	for (i = 0; i < n; i++)					//n次
	{
		scanf_s("%d", &a[i]);				//n次
	}
	p = a[n - 1];							//一次
	for (i = n - 1; i > 0; i--)				//n-1次
	{
		p = p * x + a[i - 1];				//n-1次
	}
	printf("%d", p);						//一次
}											//时间复杂度为O(n)


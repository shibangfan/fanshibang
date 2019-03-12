// ConsoleApplication35.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

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

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

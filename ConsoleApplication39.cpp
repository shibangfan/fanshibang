

#include"pch.h"
#include <stdio.h>
#include<stdlib.h>

/*#define N 7*/
#define OVERFLOW 0
/*int Key[N] = { 3, 1, 7, 2, 4, 8, 4};*/

typedef struct LNODE
{
	int num;
	int key;
	struct LNODE *next;
}LNODE, *Linklist;

void joseph(Linklist p, int m, int x, int max)
{
	Linklist q;
	q = (Linklist)malloc(sizeof(LNODE));
	int i;
	if (x == 0 || m > max)
	{
		return;
	}
	q = p;
	m %= x;
	if (m == 0)
	{
		m = x;
	}
	for (i = 1; i <= m; ++i)
	{
		p = q;
		q = p->next;
	}
	p->next = q->next;
	i = q->key;
	printf("The out is %d\n", q->num);
	free(q);
	joseph(p, i, x - 1, max);
}

int main()
{
	int i, m, max, N;
	Linklist Lh, p, q;
	Lh = (Linklist)malloc(sizeof(LNODE));
	printf("The Max is :\n");
	scanf_s("%d", &max);
	m = max;
	/*printf("the first number m :\n");
	scanf_s("%d", &m, 2);*/
	printf("the num of peo N;");
	scanf_s("%d", &N);
	if (!Lh)
	{
		return OVERFLOW;
	}
	scanf_s("%d", &(Lh->key));
	Lh->num = 1; 
	Lh->next = NULL; 
	p = Lh;
	for (i = 1; i < N; i++)
	{

		if (!(q = (Linklist)malloc(sizeof(LNODE))))
		{
			return OVERFLOW;
		}
		/*q->key = Key[i];
		q->num = i + 1;*/
		p->next = q;
		p = q;
		scanf_s("%d", &(p->key));
		p->num = i + 1;
	}
	p->next = Lh;
	/*printf("The Max is :\n");
	scanf_s("%d", &max, 2);
	printf("the first number m :\n");
	scanf_s("%d", &m, 2);
	printf("The output :\n");*/
	joseph(p, m, N, max);
	return 0;
}

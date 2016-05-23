#include<iostream>
#include<stdio.h>

using namespace std;

struct Node {
	int Data;
	int address;
	Node *next;
	Node *before;
}node[100002];

int main()
{
	struct Node *p, *t;
	int first_node, N, C;
	int i, data, x, y;
	cin >> first_node >> N >> C;
	i = N;
	for (i = N; i > 0;i--)
	{
		cin >> x >> data >> y;
		node[x].address = x;
		node[x].Data = data;
		if (y != -1)
		{
			node[x].next = &node[y];
			node[y].before = &node[x];
		}
		else
		{
			node[x].next = NULL;
		}
	}
	p = &node[first_node];
	p->before = NULL;
	N = 0;
	while (p != NULL)
	{
		N++;
		p = p->next;
	}
	p = &node[first_node];
	int c = 0;
	bool q = false;
	while (p != NULL && N >= C)
	{
		c++;
		if (c == C)
		{
			N -= C;
			t = p;
			if (q==true)
			{
				printf("%05d\n", t->address);
			}
			while (c>1 && t != NULL)
			{
				printf("%05d %d %05d\n", t->address, t->Data, t->before->address);
				t = t->before;
				c--;
			}
			printf("%05d %d ", t->address, t->Data);
			q = true;
			c = 0;
		}
		p = p->next;
	}
	if (N == 0) cout << -1 << endl;
	else
	{
		while (p != NULL)
		{
			if (q==true)
			{
				q = false;
				printf("%05d\n", p->address);
			}
			if (p->next == NULL) break;
			printf("%05d %d %05d\n", p->address, p->Data, p->next->address);
			p = p->next;
		}
		printf("%05d %d %d\n", p->address, p->Data, -1);
	}
	return 0;
}
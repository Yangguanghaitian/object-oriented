#include<iostream>
using namespace std;

int main()
{
	int sum, a, b,i;
	int c[10];
	cin >> a >> b;
	sum = a + b;
	if (sum > 0)
	{
		int e;
		e = sum;
		for (i = 0; e != 0; i++)
		{
			c[i] = e % 10;
			e = e / 10;
		}
		for (int j = i - 1; j >= 0; j--)
		{
			cout << c[j];
			if (j % 3 == 0 && j > 0)
				cout << ',';
		}
		cout << endl;
	}
	if (sum < 0)
	{
		long int s;
		s = sum*(-1);
		for (i = 0; s != 0; i++)
		{
			c[i] = s % 10;
			s = s / 10;
		}
		cout << '-';
		for (int j = i - 1; j >= 0; j--)
		{
			cout << c[j];
			if (j % 3 == 0 && j > 0)
				cout << ',';
		}
		cout << endl;
	}
	if (sum == 0)
	{
		cout << sum << endl;
	}
	return 0;
}
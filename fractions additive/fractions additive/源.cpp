#include<iostream>
#include<string>
#include<sstream>

using namespace std;

template <class Type>
Type stringToNum(const string& str)
{
	istringstream iss(str);
	Type num;
	iss >> num;
	return num;
}

class FS
{
public:
	FS operator+(const FS &f);
	int g(int x, int y);
	void getzm(int x, int y);
	void outzm();
private:
	int fz;
	int fm;
};

FS FS::operator+(const FS &f)
{
	FS f1;
	int t;
	f1.fm = fm*f.fm;
	f1.fz = fz*f.fm + f.fz*fm;
	t = g(f1.fz, f1.fm);
	f1.fz = f1.fz / t;
	f1.fm = f1.fm / t;
	return(f1);
}

int FS::g(int x, int y)//求最大公约数
{
	int r;
	while (y>0)
	{
		r = x%y;
		x = y;
		y = r;
	}
	return x;
}

void FS::getzm(int x, int y)
{
	fz = x;
	fm = y;
}

void FS::outzm()
{
	cout << fz << 'z' << fm << 'm' << endl;
}

int main()
{
	FS f1, f2, f3;
	int n, j, x, y;
	string a, b, c, d;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		j = 0;
		cin >> a >> b;
		while (a[j] != 'z')
		{
			c[j] = a[j];
			j++;
		}
		j = j + 1;
		while (a[j] != 'm')
		{
			d[j] = a[j];
			j++;
		}
		x = stringToNum<int>(c);
		y = stringToNum<int>(d);
		f1.getzm(x, y);
		j = 0;
		while (b[j] != 'z')
		{
			c[j] = b[j];
			j++;
		}
		j = j + 1;
		while (b[j] != 'm')
		{
			d[j] = b[j];
			j++;
		}
		x = stringToNum<int>(c);
		y = stringToNum<int>(d);
		f2.getzm(x, y);
		f3 = f1 + f2;
		f3.outzm();
	}
	return 0;
}
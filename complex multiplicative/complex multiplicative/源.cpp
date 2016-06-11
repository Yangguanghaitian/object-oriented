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

class Complex
{
public:
	Complex();
	Complex(double r, double i) { real = r; imag = i; }
	Complex operator*(Complex& c);
	void display();
private:
	double real;
	double imag;
};

Complex Complex::operator*(Complex& c)
{
	Complex c1;
	c1.real = (real*c.real - imag*c.imag);
	c1.imag = (real*c.imag + c.real*imag);
	return c1;
}

void Complex::display()
{
	cout << real << imag << 'i' << endl;
}

int main()
{
	int b = -1;
	Complex c1, c2, c3;
	string s1, s2, s3;
	double d1, d2, d3, d4;
	cin >> s1 >> s2;
	for (int i = 0; i<s1.size(); i++)
	{
		if (s1[i] == '+')b = 1;
		if (s1[i + 1] == '-')b = 1;
		if (s1[0] == '-')b = 2;
		if (s1 == "0")b = 0;
		else b = 3;
	}
	if (b == 1)
	{
		int i = 0, j = 0;
		while ('0'<s1[i] <= '9')
		{
			s3[j] = s1[i];
			i++;
			j++;
		}
		d1 = stringToNum<double>(s3);
		i = j + 1;
		j = 0;
		while ('0'<s1[i] <= '9')
		{
			s3[j] = s1[i];
			i++;
			j++;
		}
		d2 = stringToNum<double>(s3);
	}
	if (b == 2)
	{
		for (int i = 0; i<s1.size(); i++)
		{
			int q = 0, j = 0;
			if (s1[i + 1] == '+' || s1[i + 1] == '-')
			{
				while ('0'<s1[q] <= '9')
				{
					s3[j] = s1[q];
					q++;
					j++;
				}
				d1 = stringToNum<double>(s3);
				i = j + 1;
				j = 0;
				while ('0'<s1[q] <= '9')
				{
					s3[j] = s1[q];
					q++;
					j++;
				}
				d2 = stringToNum<double>(s3);
			}
			else
			{
				d1 = 0;
				while ('0'<s1[q] <= '9')
				{
					s3[j] = s1[q];
					q++;
					j++;
				}
				d2 = stringToNum<double>(s3);
			}
		}
	}
	if (b == 0)
	{
		d1 = 0;
		d2 = 0;
	}
	if (b == 3)
	{
		int o = 0, u = 0;
		while ('0'<s1[o] <= '9')
		{
			s3[u] = s1[o];
			o++;
			u++;
		}
		d1 = stringToNum<double>(s3);
		d2 = 0;
	}
	b = -1;
	for (int i = 0; i<s2.size(); i++)
	{
		if (s2[i] == '+')b = 1;
		if (s2[i + 1] == '-')b = 1;
		if (s2[0] == '-')b = 2;
		if (s2 == "0")b = 0;
		else b = 3;
	}
	if (b == 1)
	{
		int i = 0, j = 0;
		while ('0'<s2[i] <= '9')
		{
			s3[j] = s2[i];
			i++;
			j++;
		}
		d3 = stringToNum<double>(s3);
		i = j + 1;
		j = 0;
		while ('0'<s2[i] <= '9')
		{
			s3[j] = s2[i];
			i++;
			j++;
		}
		d4 = stringToNum<double>(s3);
	}
	if (b == 2)
	{
		for (int i = 0; i<s2.size(); i++)
		{
			int q = 0, j = 0;
			if (s2[i + 1] == '+' || s2[i + 1] == '-')
			{
				while ('0'<s2[i] <= '9')
				{
					s3[j] = s2[q];
					q++;
					j++;
				}
				d3 = stringToNum<double>(s3);
				i = j + 1;
				j = 0;
				while ('0'<s2[i] <= '9')
				{
					s3[j] = s2[q];
					q++;
					j++;
				}
				d4 = stringToNum<double>(s3);
			}
			else
			{
				d3 = 0;
				while ('0'<s2[i] <= '9')
				{
					s3[j] = s2[q];
					q++;
					j++;
				}
				d4 = stringToNum<double>(s3);
			}
		}
	}
	if (b == 0)
	{
		d3 = 0;
		d4 = 0;
	}
	if (b == 3)
	{
		int o = 0, u = 0;
		while ('0'<s2[o] <= '9')
		{
			s3[u] = s2[o];
			o++;
			u++;
		}
		d3 = stringToNum<double>(s3);
		d4 = 0;
	}
	c1.Complex(d1, d2);
	c2.Complex(d3, d4);
	c3 = c1*c2;
	c3.display();
	return 0;
}
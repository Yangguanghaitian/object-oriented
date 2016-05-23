#include<iostream>
using namespace std;

class Date
{
public:
	int Year;
	int Month;
	int Day;
	int count(Date d);
};

int Date::count(Date d)
{
	if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
	{
		if (Month == 1)return(Day);
		if (Month == 2)return(Day + 31);
		if (Month == 3)return(Day + 60);
		if (Month == 4)return(Day + 91);
		if (Month == 5)return(Day + 121);
		if (Month == 6)return(Day + 152);
		if (Month == 7)return(Day + 182);
		if (Month == 8)return(Day + 213);
		if (Month == 9)return(Day + 244);
		if (Month == 10)return(Day + 274);
		if (Month == 11)return(Day + 305);
		if (Month == 12)return(Day + 335);
	}
	if (Year = 0 && Month == 0 && Day == 0)
		return(0);
	else
	{
		if (Month == 1)return(Day);
		if (Month == 2)return(Day + 31);
		if (Month == 3)return(Day + 59);
		if (Month == 4)return(Day + 90);
		if (Month == 5)return(Day + 120);
		if (Month == 6)return(Day + 151);
		if (Month == 7)return(Day + 181);
		if (Month == 8)return(Day + 212);
		if (Month == 9)return(Day + 243);
		if (Month == 10)return(Day + 273);
		if (Month == 11)return(Day + 304);
		if (Month == 12)return(Day + 334);
	}
	if (Year = 0 && Month == 0 && Day == 0)
		return(0);
}

int main()
{
	Date date;
	int y[100], m[100], d[100], i = 1, num[100];
	while (y[i - 2] != 0 && m[i - 2] != 0 && d[i - 2] != 0)
	{
		cin >> y[i - 1] >> m[i - 1] >> d[i - 1];
		date.Year = y[i - 1];
		date.Month = m[i - 1];
		date.Day = d[i - 1];
		num[i - 1] = date.count(date);
		i++;
	}
	for (int j = 0; j < i - 2; j++)
	{
		cout << num[j] << endl;
	}
	return 0;
}
#include<iostream>
#include<cmath>

using namespace std;

class time
{
public:
	int hh;
	int mm;
	int ss;
	int operator-(time& t1);
};

int time::operator-(time& t1)
{
	if (t1.hh - hh < 0)return(1);
	if (t1.hh - hh > 0)return(0);
	if (t1.hh==hh)
	{
		if (t1.mm - mm < 0)return(1);
		if (t1.mm - mm > 0)return(0);
		if (t1.mm == mm)
		{
			if (t1.ss - ss < 0)return(1);
			if (t1.ss - ss > 0)return(0);
			if (t1.ss == ss)return(0);
		}
	}
	return(2);
}

class date
{
public:
	int year;
	int month;
	int day;
	bool operator<(date& d1);
};

bool date::operator<(date& d1)
{
	if (d1.year - year < 0)return(true);
	if (d1.year - year > 0)return(false);
	if (d1.year == year)
	{
		if (d1.month - month < 0)return(true);
		if (d1.month - month > 0)return(false);
		if (d1.month == month)
		{
			if (d1.day - day < 0)return(true);
			if (d1.day - day > 0)return(false);
			if (d1.day == day)return(false);
		}
	}
	return(false);
}

int main()
{
	int intArray[100];
	double douArray[100];
	time timeArray[100];
	date dateArray[100];
	int n;
	while (cin >> n, n != -1)
	{
		if (n == 1)
		{
			int i1 = 0, max1;
			while (cin >> intArray[i1], intArray[i1] != 0)
			{
				i1++;
			}
			max1 = intArray[0];
			for (int i = 1; i<i1; i++)
			{
				if (intArray[i]>max1)max1 = intArray[i];
			}
			cout << max1 << endl;
		}
		if (n == 2)
		{
			int i2 = 0;
			double max2;
			while (cin >> douArray[i2], douArray[i2] != 0)
			{
				i2++;
			}
			max2 = douArray[0];
			for (int i = 1; i<i2; i++)
			{
				if (douArray[i]>max2)max2 = douArray[i];
			}
			cout << max2 << endl;
		}
		if (n == 3)
		{
			int dis3;
			int i3 = 0;
			time max3;
			while (cin >> timeArray[i3].hh, timeArray[i3].hh != 0)
			{
				cin >> timeArray[i3].mm >> timeArray[i3].ss;
				i3++;
			}
			max3 = timeArray[0];
			for (int i = 1; i<i3; i++)
			{
				dis3 = timeArray[i] - max3;
				if (dis3 == 1)max3 = timeArray[i];
			}
			cout << max3.hh << ' ' << max3.mm << ' ' << max3.ss << endl;
		}
		if (n == 4)
		{
			bool dis4;
			int i4 = 0;
			date max4;
			while (cin >> dateArray[i4].year, dateArray[i4].year != 0)
			{
				cin >> dateArray[i4].month >> dateArray[i4].day;
				i4++;
			}
			max4 = dateArray[0];
			for (int i = 1; i<i4; i++)
			{
				dis4 = (dateArray[i] < max4);
				if (dis4 == true)max4 = dateArray[i];
			}
			cout << max4.year << ' ' << max4.month << ' ' << max4.day << endl;
		}
	}
	return 0;
}
#pragma once
#include<time.h>
class Time
{
public:
	float year;
	float month;
	float day;
	float hours;
	float min;

	Time()
	{
		year = 0;
		month = 0;
		day = 0;
		hours = 0;
		min = 0;
	}
	
	void set_time_to_local_time()
	{
		time_t t = time(NULL);
		struct tm tt = *localtime(&t);
		year = (tt.tm_year + 1900);
		month = (tt.tm_mon + 1);
		day = tt.tm_mday;
		if (day == 31)
		{
			day = 30;
		}
		hours = tt.tm_hour;
		min = tt.tm_min;
	}
	void reset_time()
	{
		year = 0;
		month = 0;
		day = 0;
		hours = 0;
		min = 0;
	}

	bool operator == (Time& obj)
	{
		if (this->year == obj.year && this->month == obj.month && this->day == obj.day && (this->hours == obj.hours && this->min <= obj.min) || (this->hours < obj.hours))
		{
			return true;
		}
		return false;
	}

	bool operator < (Time& obj)
	{
		if (this->year == obj.year && this->month == obj.month && this->day == obj.day && this->hours <= obj.hours)
		{
			return true;
		}
		return false;
	}
};


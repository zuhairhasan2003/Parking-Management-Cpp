#pragma once
#include<iostream>
#include"Time.h"

class Reservation
{
protected:
	std::string reservation_car_number;
	bool reserved = false;
public:
	Time reservation_cheak_in;

	std::string get_reservation_car_number()
	{
		return reservation_car_number;
	}
	bool is_reserved()
	{
		return reserved;
	}
	void set_reserved(bool a)
	{
		reserved = a;
	}
	void set_reservation_car_number(std::string a)
	{
		reservation_car_number = a;
	}
	void reset_reservation_time()
	{
		reservation_cheak_in.year = 0;
		reservation_cheak_in.month = 0;
		reservation_cheak_in.day = 0;
		reservation_cheak_in.hours = 0;
		reservation_cheak_in.min = 0;
	}
};
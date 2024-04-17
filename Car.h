#pragma once
#include"Time.h"
#include<iostream>

class Car
{
public:
	Time cheak_in;
	Time cheak_out;
	std::string car_number;

    std::string get_car_number()
    {
        return car_number;
    }
    void set_car_number(std::string a)
    {
        car_number = a;
    }
};
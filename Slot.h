#pragma once
#include "Floor.h"
#include"Time.h"
#include"Car.h"
#include"Reservation.h"
#include<iostream>


class Slot : public Floor , public Car , public Reservation
{
protected:
	bool occupied ;
	int slot_number;
    int parking_price;

public :

    Slot()
    {
        occupied = false;
    }

    void assign_slot_number(int a)
    {
        slot_number = a;
    }

    int get_slot_number()
    {
        return slot_number;
    }
    void set_slot_number(int a)
    {
        slot_number = a;
    }
    void set_floor_number(int a)
    {
        floor_number = a;
    }
    int get_floor_number()
    {
        return floor_number;
    }
    bool is_occupied()
    {
        return occupied;
    }
    void set_occupied(bool a)
    {
        occupied = a;
    }

    float calculate_charge_of_parking()
    {
        float total_hours = 0;

        float temp_min = 0;
        if (cheak_out.min < cheak_in.min)
        {
            cheak_out.min += 60;
            cheak_out.hours--;

            temp_min = cheak_out.min - cheak_in.min;
        }
        else
        {
            temp_min = cheak_out.min - cheak_in.min;
        }

        float temp_hours = 0;
        if (cheak_out.hours < cheak_in.hours)
        {
            cheak_out.hours += 24;
            cheak_out.day--;

            temp_hours = cheak_out.hours - cheak_in.hours;
        }
        else
        {
            temp_hours = cheak_out.hours - cheak_in.hours;
        }

        float temp_days = 0;
        if (cheak_out.day < cheak_in.day)
        {
            cheak_out.day += 30;
            cheak_out.month--;

            temp_days = cheak_out.day - cheak_in.day;
        }
        else
        {
            temp_days = cheak_out.day - cheak_in.day;
        }

        float temp_months = 0;
        if (cheak_out.month < cheak_in.month)
        {
            cheak_out.month += 12;
            cheak_out.year--;

            temp_months = cheak_out.month - cheak_in.month;
        }
        else
        {
            temp_months = cheak_out.month - cheak_in.month;
        }

        float temp_years = 0;
        temp_years = cheak_out.year - cheak_in.year;

        total_hours += (temp_min / 60);
        total_hours += (temp_hours);
        total_hours += (temp_days * 24);
        total_hours += (temp_months * 30 * 24);
        total_hours += (temp_years * 12 * 30 * 24);


        return (total_hours * parking_price);
    }
    void set_parking_price(int a)
    {
        parking_price = a;
    }

    void reset_time()
    {
        cheak_in.reset_time();
        cheak_out.reset_time();
    }

};
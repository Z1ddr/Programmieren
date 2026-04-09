#include <iostream>
#include <string>
#include <cstdint>
#pragma once

using namespace std;

class car
{
    private:
        string m_brand;
        string m_model;
        uint16_t m_year;
        double m_km;
    
    public:
        car();
        car(string brand, string model, uint16_t year, double km);
        ~car();

        string get_brand() const;
        string get_model() const;
        uint16_t get_year() const;
        double get_km() const;

        void set_brand(string new_brand);
        void set_model(string new_model);
        void set_year(uint16_t new_year);
        void set_km(double new_km); 

        void drive(double kilometers);
        void displayInfo();
};
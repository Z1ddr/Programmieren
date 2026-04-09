#include "car.h"
using namespace std;

car::car()
    : m_brand{"Unknown"}
    , m_model{"Unknown"}
    , m_year{2000}
    , m_km{0.0}
{
    cout << "der standardkonstruktor wurde ausgefuehrt" << endl;
}

car::car(string brand, string model, uint16_t year, double km)
    : m_brand{brand}
    , m_model{model}
    , m_year{year}
    , m_km{km}
{
    cout << m_brand << endl << m_model << endl << m_year << endl << m_km << endl;
}

car::~car()
{
    cout << "Dein Auto wurde von ner Bazooka in die luft gesprengt";
}

string car::get_brand() const
{
    return m_brand;
}

string car::get_model() const
{
    return m_model;
}

uint16_t car::get_year() const
{
    return m_year;
}

double car::get_km() const
{
    return m_km;
}

void car::set_brand(string new_brand)
{
    m_brand = new_brand;
}

void car::set_model(string new_model)
{
    m_model = new_model;
}

void car::set_year(uint16_t new_year)
{
    if(new_year >= 1886 && new_year <= 2027)
    {
        m_year = new_year;
    }
    else
    {
        cout << "du kleiner faggot, mach gescheides jahr" << endl;
    }
}

void car::set_km(double new_km)
{
    m_km = new_km;
}

void car::drive(double kilometers)
{
    if(kilometers >= 0)
    {
        m_km += kilometers;
    }
    else
    {
        cout << "du fettsack mach ohne betrügen" << endl;
    }
}

void car::displayInfo()
{
    cout << m_brand << endl << m_model << endl << m_year << endl << m_km << endl;
}
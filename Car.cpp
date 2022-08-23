//
// Created by Fransiskus Agapa on 8/23/2022.
//

#include "Car.h"


#include "sstream"

using std::stringstream;

void Car::SetType(const string &theType)
{
    _type = theType;
}

void Car::SetColor(const string &theColor)
{
    _color = theColor;
}

void Car::SetYear(const int &theYear)
{
    _year = theYear;
}

void Car::SetQuantity(const int &theQuantity)
{
    _quantity = theQuantity;
}

string Car::GetType() const
{
    return _type;
}

string Car::GetColor() const
{
    return _color;
}

int Car::GetYear() const
{
    return _year;
}

int Car::GetQuantity() const
{
    return _quantity;
}

string Car::GetJSON() const
{
    stringstream  ss;
    ss << "{\"Type\":\"" << _type << "\", \"Color\":\"" << _color << "\", \"Year\":" << _year << ", \"Quantity\":" << _quantity << "}";
    return ss.str();
}
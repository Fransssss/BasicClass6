// Created by Fransiskus Agapa on 8/23/2022.

#ifndef BASICCLASS6_CAR_H
#define BASICCLASS6_CAR_H

#include "string"

using std::string;

class Car
{
private:
    string _type;
    string _color;
    int _year;
    int _quantity;
public:
    void SetType(const string& theType);
    void SetColor(const string& theColor);
    void SetYear(const int& theYear);
    void SetQuantity(const int& theQuantity);
    string GetType() const;
    string GetColor() const;
    int GetYear() const;
    int GetQuantity() const;
    string GetJSON() const;
};



#endif //BASICCLASS6_CAR_H

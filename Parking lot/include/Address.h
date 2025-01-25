#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
using namespace std;

class Address
{
public:
    string street;
    string block;
    string city;
    string state;
    string country;
    int pincode;
    
    Address(string street, string block, string city, string state, string country, int pincode)
    {
        this->street = street;
        this->block = block;
        this->city = city;
        this->state = state;
        this->country = country;
        this->pincode = pincode;
    }

    string getAddress()
    {
        string completeAddress = street + ", " + block + ", " + city + ", " + state + ", " + country;
        return completeAddress;
    }
};

#endif

#include "Address.h"

Examples::Address::Address() {
}

Examples::Address::Address(const Address& orig) {
}

Examples::Address::~Address() {
}

Examples::Address::Address(string street, int number, long postal, City* city) {
    this->street = street;
    this->number = number;
    this->postal = postal;
    this->city = city;
}

Examples::City* Examples::Address::getCity() {
    return city;
}

int Examples::Address::getNumber() {
    return number;
}

long Examples::Address::getPostal() {
    return postal;
}

string Examples::Address::getStreet() {
    return street;
}

void Examples::Address::setCity(City* value) {
    this->city = value;
}

void Examples::Address::setNumber(int value) {
    this->number = value;
}

void Examples::Address::setPostal(long value) {
    this->postal = value;
}

void Examples::Address::setStreet(string value) {
    this->street = value;
}

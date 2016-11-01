
#include "Customer.h"

Examples::Customer::Customer() {
}

Examples::Customer::Customer(const Customer& orig) {
}

Examples::Customer::~Customer() {
}

Examples::Customer::Customer(long id, string firstName, string lastName, double money,
        bool male, Address* home, char sex, int houses, short pets,
        float crazyness, unsigned char bits, unsigned long long sleep,
        long double awake, time_t birth) {
    this->id = id;
    this->firstName = firstName;
    this->lastName = lastName;
    this->awake = awake;
    this->birth = birth;
    this->bits = bits;
    this->crazyness = crazyness;
    this->home = home;
    this->houses = houses;
    this->male = male;
    this->money = money;
    this->pets = pets;
    this->sex = sex;
    this->sleep = sleep;
}

long Examples::Customer::getId() {
    return id;
}

string Examples::Customer::getFirstName() {
    return firstName;
}

string Examples::Customer::getLastName() {
    return lastName;
}

double Examples::Customer::getMoney() {
    return money;
}

bool Examples::Customer::isMale() {
    return male;
}

char Examples::Customer::getSex() {
    return sex;
}

int Examples::Customer::getHouses() {
    return houses;
}

short Examples::Customer::getPets() {
    return pets;
}

float Examples::Customer::getCrazyness() {
    return crazyness;
}

unsigned char Examples::Customer::getBits() {
    return bits;
}

unsigned long long Examples::Customer::getSleep() {
    return sleep;
}

long double Examples::Customer::getAwake() {
    return awake;
}

time_t Examples::Customer::getBirth() {
    return birth;
}

Examples::Address* Examples::Customer::getHome() {
    return home;
}

void Examples::Customer::setId(long id) {
    this->id = id;
}

void Examples::Customer::setFirstName(string firstName) {
    this->firstName = firstName;
}

void Examples::Customer::setLastName(string lastName) {
    this->lastName = lastName;
}

void Examples::Customer::setMoney(double money) {
    this->money = money;
}

void Examples::Customer::setMale(bool male) {
    this->male = male;
}

void Examples::Customer::setSex(char sex) {
    this->sex = sex;
}

void Examples::Customer::setHouses(int houses) {
    this->houses = houses;
}

void Examples::Customer::setPets(short pets) {
    this->pets = pets;
}

void Examples::Customer::setCrazyness(float crazyness) {
    this->crazyness = crazyness;
}

void Examples::Customer::setBits(unsigned char bits) {
    this->bits = bits;
}

void Examples::Customer::setSleep(unsigned long long sleep) {
    this->sleep = sleep;
}

void Examples::Customer::setAwake(long double awake) {
    this->awake = awake;
}

void Examples::Customer::setBirth(time_t birth) {
    this->birth = birth;
}

void Examples::Customer::setHome(Address* home) {
    this->home = home;
}


#include "City.h"

Examples::City::City() {
}

Examples::City::City(const City& orig) {
}

Examples::City::~City() {
}

Examples::City::City(string name, State state, long code) {
    this->name = name;
    this->state = state;
    this->code = code;
}

string Examples::City::getName() {
    return name;
}

void Examples::City::setName(string name) {
    this->name = name;
}

Examples::State Examples::City::getState() {
    return state;
}

void Examples::City::setState(State state) {
    this->state = state;
}

long Examples::City::getCode() {
    return code;
}

void Examples::City::setCode(long code) {
    this->code = code;
}

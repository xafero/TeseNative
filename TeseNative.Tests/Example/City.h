
#ifndef CITY_H
#define CITY_H

#include <string>
#include "State.h"

using namespace std;

namespace Examples {

    class City {
    public:
        City();
        City(const City& orig);
        virtual ~City();
        City(string, State, long);
        string getName();
        void setName(string);
        State getState();
        void setState(State);
        long getCode();
        void setCode(long);
    private:
        string name;
        State state;
        long code;
    };

}

#endif /* CITY_H */

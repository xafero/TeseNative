
#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
#include "City.h"

using namespace std;

namespace Examples {

    class Address {
    public:
        Address();
        Address(const Address& orig);
        virtual ~Address();
        Address(string, int, long, City*);
        string getStreet();
        void setStreet(string);
        int getNumber();
        void setNumber(int);
        long getPostal();
        void setPostal(long);
        City* getCity();
        void setCity(City*);
    private:
        string street;
        int number;
        long postal;
        City* city;
    };

}

#endif /* ADDRESS_H */

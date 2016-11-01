
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "Address.h"

using namespace std;

namespace Examples {

    class Customer {
    public:
        Customer();
        Customer(const Customer& orig);
        virtual ~Customer();
        Customer(long, string, string, double, bool, Address*, char,
                int, short int, float, unsigned char, long long unsigned int,
                long double, time_t);
        long getId();
        void setId(long);
        string getFirstName();
        void setFirstName(string);
        string getLastName();
        void setLastName(string);
        double getMoney();
        bool isMale();
        char getSex();
        int getHouses();
        short getPets();
        float getCrazyness();
        unsigned char getBits();
        unsigned long long getSleep();
        long double getAwake();
        time_t getBirth();
        Address* getHome();
        void setMoney(double);
        void setMale(bool);
        void setSex(char);
        void setHouses(int);
        void setPets(short);
        void setCrazyness(float);
        void setBits(unsigned char);
        void setSleep(unsigned long long);
        void setAwake(long double);
        void setBirth(time_t);
        void setHome(Address*);
    private:
        long id;
        string firstName;
        string lastName;
        double money;
        bool male;
        Address* home;
        char sex;
        int houses;
        short pets;
        float crazyness;
        unsigned char bits;
        unsigned long long sleep;
        long double awake;
        time_t birth;
    };

}

#endif /* CUSTOMER_H */

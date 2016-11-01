
#ifndef TESE_H
#define TESE_H

#include <fstream>
#include "../Error/TeseReadException.h"
#include "../Error/TeseWriteException.h"

using namespace std;

namespace TeseNative {

    class Tese {
    public:
        Tese();
        Tese(const Tese& orig);
        virtual ~Tese();
        template<class I>
        void serialize(I, ofstream*);
        template<class O>
        O deserialize(ifstream*);
    };

}

#endif /* TESE_H */

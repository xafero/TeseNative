
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

        template<class O> O* deserialize(ifstream* in) {
            throw new TeseReadException();
        }

        template<class I> void serialize(I* in, ofstream* out) {
            throw new TeseWriteException();
        }

    };

}

#endif /* TESE_H */

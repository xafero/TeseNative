
#ifndef TESEBUILDER_H
#define TESEBUILDER_H

#include "Tese.h"

namespace TeseNative {

    class TeseBuilder {
    public:
        TeseBuilder();
        TeseBuilder(const TeseBuilder& orig);
        virtual ~TeseBuilder();
        TeseBuilder* skipNull(bool);
        bool isSkipNull();
        Tese* create();
    private:
        bool nullSkipped;
    };

}

#endif /* TESEBUILDER_H */

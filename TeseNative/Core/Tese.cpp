
#include "Tese.h"

TeseNative::Tese::Tese() {
}

TeseNative::Tese::Tese(const Tese& orig) {
}

TeseNative::Tese::~Tese() {
}

template<class O>
O TeseNative::Tese::deserialize(ifstream*) {
    throw new TeseReadException();
}

template<class I>
void TeseNative::Tese::serialize(I, ofstream*) {
    throw new TeseWriteException();
}

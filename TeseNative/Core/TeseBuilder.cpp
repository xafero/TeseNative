
#include "TeseBuilder.h"

TeseNative::TeseBuilder::TeseBuilder() {
}

TeseNative::TeseBuilder::TeseBuilder(const TeseBuilder& orig) {
}

TeseNative::TeseBuilder::~TeseBuilder() {
}

TeseNative::TeseBuilder* TeseNative::TeseBuilder::skipNull(bool skip) {
    nullSkipped = skip;
}

bool TeseNative::TeseBuilder::isSkipNull() {
    return nullSkipped;
}

TeseNative::Tese* TeseNative::TeseBuilder::create() {
    Tese* tese = new Tese();
    return tese;
}

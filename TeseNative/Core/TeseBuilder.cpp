
#include "TeseBuilder.h"

TeseNative::TeseBuilder::TeseBuilder() {
}

TeseNative::TeseBuilder::TeseBuilder(const TeseBuilder& orig) {
    nullSkipped = orig.nullSkipped;
}

TeseNative::TeseBuilder::~TeseBuilder() {
}

TeseNative::TeseBuilder* TeseNative::TeseBuilder::skipNull(bool skip) {
    nullSkipped = skip;
    return this;
}

bool TeseNative::TeseBuilder::isSkipNull() {
    return nullSkipped;
}

TeseNative::Tese* TeseNative::TeseBuilder::create() {
    return new Tese();
}


#include "TeseWriteException.h"

TeseNative::TeseWriteException::TeseWriteException() noexcept {
    message = "Some write error occurred!";
}

TeseNative::TeseWriteException::TeseWriteException(
        const exception& orig) noexcept : TeseWriteException() {
    parent = orig;
    message = printf("%s \n %s", message.c_str(), orig.what());
}

TeseNative::TeseWriteException::~TeseWriteException() noexcept {
}

const char* TeseNative::TeseWriteException::what() const noexcept {
    return message.c_str();
}

exception TeseNative::TeseWriteException::getCause() noexcept {
    return parent;
}

TeseNative::TeseWriteException::TeseWriteException(string field,
        const exception& orig) noexcept : TeseWriteException(orig) {
    message = printf("%s \n %s", message.c_str(), field.c_str());
}

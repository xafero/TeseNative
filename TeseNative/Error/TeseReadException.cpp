
#include "TeseReadException.h"

TeseNative::TeseReadException::TeseReadException() noexcept {
    message = "Some read error occurred!";
}

TeseNative::TeseReadException::TeseReadException(
        const exception& orig) noexcept : TeseReadException() {
    parent = orig;
    message = printf("%s \n %s", message.c_str(), orig.what());
}

TeseNative::TeseReadException::~TeseReadException() noexcept {
}

const char* TeseNative::TeseReadException::what() const noexcept {
    return message.c_str();
}

exception TeseNative::TeseReadException::getCause() noexcept {
    return parent;
}

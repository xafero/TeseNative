
#ifndef TESEREADEXCEPTION_H
#define TESEREADEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

namespace TeseNative {

    class TeseReadException : public exception {
    public:
        TeseReadException() noexcept;
        TeseReadException(const exception& orig) noexcept;
        virtual ~TeseReadException() noexcept;
        virtual const char* what() const noexcept;
        exception getCause() noexcept;
    private:
        string message;
        exception parent;
    };

}

#endif /* TESEREADEXCEPTION_H */


#ifndef TESEWRITEEXCEPTION_H
#define TESEWRITEEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

namespace TeseNative {

    class TeseWriteException : public exception{
    public:
        TeseWriteException() noexcept;
        TeseWriteException(const exception& orig) noexcept;
        TeseWriteException(string field, const exception& orig) noexcept;
        virtual ~TeseWriteException() noexcept;
        virtual const char* what() const noexcept;
        exception getCause() noexcept;
    private:
        string message;
        exception parent;
    };

}

#endif /* TESEWRITEEXCEPTION_H */

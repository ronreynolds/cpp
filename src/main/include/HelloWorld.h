#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <string>

namespace local {
    class HelloWorld {
    private:
        std::string message = "Hello World";
    public:
        std::string getMessage() const {
            return message;
        }
        HelloWorld& setMessage(const std::string& newMessage) {
            message = newMessage;
            return *this;
        }
    };
}

#endif // ifndef HELLOWORLD_H

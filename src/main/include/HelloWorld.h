#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <iostream>
#include <string>

namespace local {
    class HelloWorld {
    private:
        std::string message = "Hello World";
    public:
        HelloWorld() {
            std::cout << "created World at " << this << std::endl;
        }
        virtual ~HelloWorld() {
            std::cout << "destroyed World at " << this << std::endl;
        }
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

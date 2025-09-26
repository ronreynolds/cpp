#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <iostream>
#include <string>

namespace local {
    class HelloWorld {
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
        static int main(int, char**);
    };
}

#endif // ifndef HELLOWORLD_H

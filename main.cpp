#include <iostream>
#include <string>
#include "include/validator.h"

int main() {
    std::string input;

    std::cout << "enter string: ";
    std::cin >> input;

    bool result = isvalid(input);

    if (result == true) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}

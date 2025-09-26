#include "../include/validator.h"


bool isvalid(const std::string& string) {
    int valid = 0;

    for (int i = 0; i < string.length(); i++) {
        char cur = string[i];

        if (cur == '(') {
            valid = valid + 1;
        }
        else if (cur == ')') {
            valid = valid - 1;

            if (valid < 0) {
                return false;
            }
        }
    }

    if (valid == 0) {
        return true;
    } else {
        return false;
    }
}
#pragma once

#include <iostream>
#include <string>

#include "stacksll.hpp"

using namespace std;

namespace adt {
    namespace utils {
        int isValid(string s) {
            Stack* stack = new StackSll();
            int result;

            //Implement solution/code here

            delete stack;
            return result;
        }
    }
}
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

            for (int i = 0; i < s.length(); i++) {
                if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                    stack->push(s[i]);
                } else {
                    if ((stack->top() == '(' && s[i] == ')') || (stack->top() == '{' && s[i] == '}')
                    || (stack->top() == '[' && s[i] == ']')) {
                        stack->pop();
                    } else if ((stack->isEmpty() && s[i] == ')') || (stack->isEmpty() && s[i] == '}')
                    || (stack->isEmpty() && s[i] == ']')) {
                        result = 3;
                        delete stack;
                        return result;
                    } else if ((stack->top() == '(' && s[i] != ')') || (stack->top() == '{' && s[i] != '}')
                    || (stack->top() == '[' && s[i] != ']')) {
                        result = 1;
                        delete stack;
                        return result;
                    }
                }
            }

            if (stack->isEmpty()) {
                result = 0;
            } else {
                result = 2;
            }

            delete stack;
            return result;
        }
    }
}

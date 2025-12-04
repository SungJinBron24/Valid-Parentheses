#pragma once
#include <iostream>

#include "stack.hpp"
#include "singlyll.hpp"

namespace adt {
    class StackSll : public Stack {
        List* list;

        public:
            StackSll() {
                list = new SinglyLinkedList();
            }

            ~StackSll() {
                delete list;
            }

            void push(char c) {
                list->addHead(c);
            }

            char pop() {
                return list->removeHead();
            }

            char top() {
                return list->getHead();
            }

            int size() {
                return list->size();
            }

            bool isEmpty() {
                return list->isEmpty();
            } 
    };
}
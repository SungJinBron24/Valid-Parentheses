#pragma once

namespace adt {
    class List {
        public:
            virtual ~List() = default;
            virtual void addHead(char c) = 0;
            virtual char removeHead() = 0;
            virtual char getHead() = 0;
            virtual int size() = 0;
            virtual bool isEmpty() = 0;
    };
}
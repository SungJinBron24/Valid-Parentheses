#pragma once
#include <iostream>

#include "list.hpp"
#include "node.hpp"

namespace adt {
    class SinglyLinkedList : public List {
        Node* head;
        Node* tail;
        int _size;

        public:
            SinglyLinkedList() {
                head = nullptr;
                tail = nullptr;
                _size = 0;
            }

            ~SinglyLinkedList() {
                Node* temp = head;
                while(temp) {
                    Node* next = temp->next;
                    free(temp);
                    temp = next;
                }
            }

            void addHead(char c) {
                Node* newNode = (Node*) calloc(1, sizeof(Node));

                if (!newNode) {
                    return;
                }

                newNode->elem = c;
                newNode->next = head;
                head = newNode;

                if (!tail) {
                    tail = newNode;
                }

                _size++;
            }

            char removeHead() {
                if (isEmpty()) {
                    return '\0';
                }

                Node* headPtr = head;
                char removed = headPtr->elem;
                head = head->next;
                free(headPtr);
                _size--;
                return removed;
            }

            char getHead() {
                if (isEmpty()) {
                    return '\0';
                }

                return head->elem;
            }

            int size() {
                return _size;
            }

            bool isEmpty() {
                return _size == 0;
            }
    };
}

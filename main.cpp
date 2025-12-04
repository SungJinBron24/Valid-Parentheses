#include <iostream>
#include <string>

#include "stack/utils.hpp"

using namespace std;
using namespace adt;


int main(void) {
    string parentheses;
    int result;
    
    do {
        cout << "Enter parentheses: ";
        cin >> parentheses;

        result = adt::utils::isValid(parentheses);

        switch (result) {
            case 0: cout << "Balance\n"; break;
            case 1: cout << "Mismatch\n"; break;
            case 2: cout << "Lack Closing\n"; break;
            case 3: cout << "Lack Opening\n"; break;
            default:
                break;
        }
    } while (1);
}
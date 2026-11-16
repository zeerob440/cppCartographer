#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

// validthing() handles input validation.

// int& passes the original variable by reference
bool validthing(int& user_selection) {

    // declares the variable input as a string
    string input;

    /* getline() is from the <string> library. It reads chars from cin input stream and converts it to a string
    in this case it places the values from cin into var stirng input.*/

    getline(cin, input);

    // part of the try/catch. try and catch are c++ keywords
    try {
        // size_t is an unsigned int datatype from the <string> or <cstddef> library. This declares var postion as a size_t datatype.
        size_t position;

        // user selection... converts string input with stoi from <string> to integer.
        // stoi() accepts 2 args stoi(varYouWantToConvertToINT, &pointerToThatVar)
        // POINTER in this case it is takeing the value stored in the memory address from postion and converting it to the integer input.
        user_selection = stoi(input, &position);

        if (position != input.size()) {
            // throw is C++ keyword similar to Python's 'raise'. invalid_argument is an exception class from <stdexcept>
            throw invalid_argument("Invalid characters\n");
        }

        return true;
    }

    // catch is c++ keyword similar to python 'except', invalid_argument is from the <stdexcept> library.
    // the '&' at the end of invalid_argument means catch the exception by reference instead of copying it.
    // in otherwords use the original value for comparison not a copy
    // to use a copy syntax would be (invalid_argument& e)
    catch (invalid_argument&) {
        cout << "INVALID INPUT! ENTER AN INTEGER.\n" << endl;
        return false;
    }
    // out_of_range is from the <stdexcept> library, it prevents input vale from overwhelming an int datatype.
    catch (out_of_range&) {
        cout << "INTEGER OUT OF RANGE!\n" << endl;
        return false;
    }
}




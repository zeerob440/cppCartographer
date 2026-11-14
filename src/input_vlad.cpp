#include <iostream>
#include <limits>

using namespace std;

bool input_vlad() {

    // if cin does not contain an integer
    if (cin.fail()){
        // resets failed cin state, unwanted chars remain
        cin.clear();
        //unwanted chars and new line discarded. These kinds of operations are best done with the limits library.  
        cin.ignore(numeric_limits<streamsize>::max(), '/n');
        return false;
    }

    return true; 
}
#include <iostream>
using namespace std;

void abc() {
// abc 'any button to continue' pauses the lesson. 
    cout << "PRESS ANY BUTTON TO CONTINUE." << endl;

    
    // ignores anything that may be in the stream
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // any button to continue
    cin.get(); 

    return;
}
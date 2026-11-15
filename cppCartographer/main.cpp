#include <iostream>
#include <string>
#include <cstdlib>
#include "../include/selections_menu.hpp"
#include "../include/validthing.hpp"
using namespace std; 

/*VERSION: Alpha

Program Description: c++Cartographer is a learning application that teaches users C++ by examples. 

FEATURES: difficulty

Proudly Engineered by Zachary Roberts 14 NOV 2026

"Were it so easy." - The Arbiter HALO 3"*/

int main () {

    while(true) {

        cout <<"Welcome to cppCartographer!" << endl;

        // main navigation menu for user

        string main_menu = R"(MAIN MENU
        1 = DECLARATIONS)"; 

        // print main navigation menu
        cout << main_menu << endl;

        // route navigation request
        int user_selection; 
        cout << "SELECT LEARNING OBJECTIVE" << endl;
        cin >> user_selection; 

        // invoke input validation function, checks if string was entered
        validthing(); 
        // ! NOT 
        if (!validthing()) {
            continue;
        }
        // since each menu will have unique ranges, this line will need to be added into each menu selection
        // TODO REMEMBER TO UPDATE AS EACH MENU IS ADDED
        if (user_selection >= 0 && user_selection <= 1){
            cout << "SELECTION OUT OF RANGE!" << endl;
            continue;
        }
        if (user_selection == 0) {
            cout << "PROGRAM EXITED!" << endl; 
            break;
        }
        if (user_selection == 1) {
            selections_menu();
        }
        
    }
    return 0;    
}



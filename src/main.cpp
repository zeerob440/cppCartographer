#include <iostream>
#include <string>
#include "../include/declarations_menu.hpp"
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

        cout <<"Welcome to cppCartographer!\n" << endl;

        // main navigation menu for user

        string main_menu = R"(MAIN MENU
        SELECT LEARNING OBJECTIVE
        0 = EXIT PROGRAM
        1 = DECLARATIONS MENU
        2 = SELECTIONS MENU)"; 

        // print main navigation menu
        cout << main_menu << endl << endl;

        // route navigation request
        int user_selection; 
        
        // ! NOT 
        if (!validthing(user_selection)) {
            continue;
        }
        // since each menu will have unique ranges, this line will need to be added into each menu selection
        // TODO REMEMBER TO UPDATE AS EACH MENU IS ADDED
        if (user_selection < 0 || user_selection > 2){
            cout << "SELECTION OUT OF RANGE!\n" << endl;
            continue;
        }
        if (user_selection == 0) {
            cout << "PROGRAM EXITED!" << endl; 
            break;
        }
        if (user_selection == 1) {
            cout << "NAVIGATING TO DECLARATIONS MENU\n" << endl;
            declarations_menu();
        }
        if (user_selection == 2) {
            cout << "NAVIGATING TO SELECTIONS MENU\n" << endl;
            selections_menu();
            
        }
        
    }
    return 0;    
}



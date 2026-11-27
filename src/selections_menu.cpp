#include <iostream>
#include <string>
#include "../include/abc.hpp"
#include "../include/validthing.hpp"
using namespace std;

void if_if(){

    string if_ifl = R"(
    IF_IF BLOCK AND POINTER LESSON

    Selection structures in C++ are intuitive they follow C++'s elegant
    (condition) {execute logic}, so we will introduce pointers along with it. 

    A pointer is the & operator. It can be used to point to a var storage space
    in memory, it returns a hex memory address. such that:

    varName is VALUE stored at an Address
    
    &varNAME is the memory address of a var's value.

    string in_mem = "in_mem VALUE";

    
    char user_choice = get_char(); 
    
    if (user_choice == 'A' || user_choice == 'B') {
        cout << "Memory Address is: " << &in_mem << endl;
    
    }
    if (user_choice == 'A' || user_choice == 'B')
        cout << "Value stored at address " << &in_mem << " is: "
        << in_mem << endl; 


     Just to review since the condition is in an IF/IF block, it will return
     ANY true statement! 

     Let's run it!

    )";

    cout << if_ifl << "\n";
    abc();

    string in_mem = "in_mem VALUE";

    // invoke function save return, this function contains input validation.
    char user_choice = get_char(); 
    // sends memory address because &inmem is used
    if (user_choice == 'A' || user_choice == 'B') {
        cout << "Memory Address is: " << &in_mem << endl;
    
    }
    // since this is in an if/if, ANY true condition is returned
    if (user_choice == 'A' || user_choice == 'B')
        cout << "Value stored at address " << &in_mem << " is: "
        << in_mem << endl; 


}

// submenu for selections
void selections_menu() {

    while(true) {

        cout << "WELCOME TO SELECTIONS!\n" << endl;

        string s_main_menu =  R"(SELECTIONS MENU
        SELECT A TOPIC FOR REVIEW
        0 = EXIT TO MAIN
        1 = IF/IF LESSON
        2 = IF/ELSE IF LESSON
        3 = IF/ELSE IF/ELSE LESSON
        4 = COLLECTION DATAYPE: MAP)";

        cout << s_main_menu << endl;
        
        // user selection integer
        int dec_selection;

        if(!validthing(dec_selection)) {
            continue;
        }
        // since each menu will have unique ranges, this line will need to be added into each menu selection
        // TODO REMEMBER TO UPDATE AS EACH MENU IS ADDED
        if (dec_selection < 0 || dec_selection > 4){
            cout << "SELECTION OUT OF RANGE!\n" << endl;
            continue;
        }
        if (dec_selection == 0){
            return;
        }
        if (dec_selection == 1 ){
            if_if();
        }
        if (dec_selection == 2) {
            //if_else();
        }
        if (dec_selection == 3) {
            //if_else_if_else();
        }    
        if (dec_selection == 4){
            //map_lessons();
        }
    }
  
}
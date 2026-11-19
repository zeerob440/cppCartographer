#include <iostream>
#include <string>
#include "../include/abc.hpp"
#include "../include/validthing.hpp"
using namespace std;

// TODO: add basic datatype selections

    // basic datatype lesson, daughter function of declarations menu
    void basic_datatypes() {
        cout << "C++ BASIC DATA TYPES\n";

        string datatype1 = R"(INTEGERS
        
        int is integer between -2,147,483,648 and 2,147,483,647

        int is by default 32-bit, however it can be reduced to 16-bit if memory constraints are an design issue with: int(16)
        
        it is declared like:

        int my_num = 32;)";

        cout << datatype1 << endl << endl;

        cout <<"Continue to run the declared var\n" << endl;

        int my_num = 32;

        abc();

        cout << "my_num is: " << my_num << endl << endl;

        abc();

        string datatype2 = R"(FLOATING POINTS
        
        double is the DEFAULT floating point declaration, it is accurate to 64-bits of precision, this means 15-16 decimal places.
        
        It is declared such that:
        
        double really_precise_float = 3.012345678912345;
        
        float is another floating point datatype it is accurate to 32-bits of precision or 6-7 decimal places.
        it is used when memory constraints are a design challenge.
        
        it is declared such that:
        
        float not_as_precise_float = 3.1452;)
        
        Continue to run our two declared floating points.)";

        cout << datatype2 << endl << endl;

        abc();

        double really_precise_float = 3.012345678912345;

        float not_as_precise_float = 3.1452;

        cout <<"double really_precise_float = " << really_precise_float << endl << endl;
        
        cout << "float not_as_precise_float = " << not_as_precise_float << endl << endl;

        abc();

        string datatype3 = R"(BOOLEANS
        
        Booleans are my favorite datatype. These datatypes are true or false. 
        Truthiness applies to integers and floats in C++ as well 0 is false, any other number is true

        It does not apply to strings however. Converting a string to a bool in C++ will result in a compilation error. As it should, Python is just quirky.

        It is declared such that:
        
        bool boolstuff = false;
        
        Continue to run our bool)";

        cout << datatype3 << endl << endl;

        abc();

        bool boolstuff = false;

        cout << "C++ is boolstuff =" << boolstuff << endl << endl;

        abc();

        string datatype4 = R"(CHAR
        Chars are a single charater datatype they are string like, in declaration they ONLY use '' to declare them. They occupy 1 byte of memory and can
        be readily converted to an int type.

        They differ from strings in that they are declared with a '' instead of "".

        CHARS ARE PARTICULARLY GOOD FOR NAVIGATING CLI MENUS!
        
        they are declared such that:
        
        char my_char = 'v';
        
        Continue to run out char!)";

        cout << datatype4 << endl << endl;

        abc();

        char my_char = 'v';

        cout << "This is our char datatype fresh from the memory address from whence it came: " << my_char << endl << endl;

        abc();

        string datatype5 = R"(STRINGS
        
        strings are a SPECIAL datatype in C++ and must be imported from the C++ standard library to be used
        
        #include <string>)

        They are always declared with ""

        When using strings it is best practice to also include:

        using namespace std;

        in the program header. because then strings can be declared like:

        string my_string = "c++Cartographer";
        
        Otherwise it would be declared as

        std::string my_string = "c++Cartographer"

        Let's send out string into the steam!
        )";

        cout << datatype5 << endl << endl;

        abc();

        string my_string = "c++Cartographer";
        
        cout << "I like " << my_string << endl << endl;

        abc();
    }

// menu for declarations lesson.
void declarations_menu() {

    cout << "Declarations menu goes here\n" << endl;


    while(true) {

        cout << "WELCOME TO DECLARATIONS!\n" << endl;

        string s_main_menu =  R"(DECLARATIONS MENU
        SELECT A TOPIC FOR REVIEW
        0 = EXIT TO MAIN
        1 = DECLARATIONS)";

      
        cout << s_main_menu << endl;
        
        // user selection integer
        int dec_selection;

        if(!validthing(dec_selection)) {
            continue;
        }
        // since each menu will have unique ranges, this line will need to be added into each menu selection
        // TODO REMEMBER TO UPDATE AS EACH MENU IS ADDED
        if (dec_selection < 0 || dec_selection > 1){
            cout << "SELECTION OUT OF RANGE!\n" << endl;
            continue;
        }
        if (dec_selection == 0){
            return;
        }
        if (dec_selection ==1){
            basic_datatypes();
        }

    }
}
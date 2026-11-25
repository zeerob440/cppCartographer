#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <map>
#include "../include/abc.hpp"
#include "../include/validthing.hpp"
using namespace std;

// TODO: complete vector lesson, add erase lessons.

    // basic datatype lesson, daughter function of declarations menu
    void basic_datatypes() {
        cout << "C++ BASIC DATATYPES\n";

        string datatype1 = R"(
        INTEGERS
        
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

        string datatype2 = R"(
        FLOATING POINTS
        
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

        string datatype3 = R"(
        BOOLEANS
        
        Booleans are my favorite datatype. These datatypes are true or false. 
        Truthiness applies to integers and floats in C++ as well 0 is false, any other number is true

        It does not apply to strings however. Converting a string to a bool in C++ will result in a compilation error. As it should, Python is just quirky.

        It is declared such that:
        
        bool boolstuff = false;

        cout interprets bools such that:

        false = 0
        true = 1 
        AND 
        1 = true 
        0 = false

        So 

        bool other_bool = 1;
        
        will print true!
        
        Continue to run our bools)";

        cout << datatype3 << endl << endl;

        abc();

        bool boolstuff = false;
        bool other_bool = 1;

        cout << "C++ is boolstuff = " << boolstuff << endl << endl;
        cout << "other_bool is number: " << other_bool << endl <<endl;

        abc();

        string datatype4 = R"(
        CHAR

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

        string datatype5 = R"(
        STRINGS
        
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
    // lesson for collections datatypes
    // daughter function of selections_menu()
    void datatype_collections_array() {
        cout << "COLLECTION DATATYPE ARRAY\n";

        string collesson1 = R"(
        ARRAYS
        
        There are two types of ARRAYS in C++ the built-in array and the std library array accessed by #include <array>).
        We'll go through both examples. 
        
        C++ Arrays must have: fixed number of indexes on declaration, and contain the same datatype. Raw arrays
        CANNOT be printed but elements can. So to print an entire array it must be done with a loop or a compile error
        will occur.  

        BUILT-IN declaration syntax: datatype arrayName[numIndices] = {eezo, eone, etwo};

        for example:

        string string_array[3] = {"eezo", "eone", "etwo"};

        STANDARD_LIBRARY array syntax: array libray_array<dataType, numIndicies> = {eezo, eone, etwo};

        for example: 

        array <int, 3> int_array  = {0, 10, 20};

        Lets print these Arrays!)";

        cout << collesson1 << endl << endl;

        abc();
        
         // string example of the array we are going to run
        string bi_array = R"(string string_array[3] = {"eezo", "eone", "etwo"})";

        cout << "Next we will cout:" << "\n" << bi_array << "\n" << "Continue to run code!" << "\n";

        abc();
        string string_array[3] = {"eezo", "eone", "etwo"};
        /*
        outputs
        eezo
        eone
        etwo
        */
        for (string element : string_array){
            cout << element << "\n"; 
        }
        
        abc();

        // string for next example array.
        string stdlib_array = R"(array <int, 3> int_array = {0, 10, 20})";
        cout << "Next we will cout:" << "\n" << stdlib_array << "\n" << "Continue to run code" << "\n";

        abc();
        array <int, 3> int_array = {0, 10, 20};
        /*
        cout 
        00
        10
        20
        */
        for (int number : int_array){
            cout << number << "\n";
        }

        cout << "THIS CONCLUDES THIS MODULE\n" << endl;
        
        abc();
    }
    // contains vector lessons
    // child function of declarations_menu()
    void cdatatype_vector() {
        string veclesson = R"(
        VECTORS
        
        Vectors require and #include <vector> to be used. Vectors require same datatype, but 
        unlike an array, indicies in a vector are not fixed. 

        To declare a vector: vector<dataType> vectorName = {};

        OR

        vector<string> my_vector = {"eezo", "eone", "etwo"};

        Continue to print this vector!
        )";

        cout << veclesson << endl;

        abc();

        vector<string> my_vector = {"eezo", "eone", "etwo"}; 

        /*
        cout
        eezo
        eone
        etow
        */
        for (string element : my_vector) {
            cout << element << "\n";
        }

        abc();

        string veclesson2 = R"(
        APPENDING VECTORS WITH push_back()
        
        Since vectors can have additional indicies added to them, use push_back(value) to add a new value and index!
        such that:

        my_vector.push_back("ethree");

        Continue to add ethree to my_vector!
        )";

        cout << veclesson2 << "\n";

        abc();
        // adds ethree to last element in my_vector

        my_vector.push_back("ethree");

        /*
        cout
        eezo
        eone
        etwo
        ethree
        */
        for (string element : my_vector) {
            cout << element << "\n";
        }

        abc();

        string veclesson3 = R"(
        DELETING AN ELEMENT WITH pop_back()
        
        pop_back deletes the last value and index of a vector so a vector with 3 indicies will become a
        vector with 2 indicies if pop_back() is used.
        
        Let's delete an index and it's value in my_vector with:

        my_vector.pop_back();

        Continue to run the code!)";

        cout << veclesson3 << "\n";

        abc();

        my_vector.pop_back();

        /*
        cout
        eezo
        eone
        etwo
        */
        for (string element : my_vector) {
            cout << element << "\n";
        }

        abc();
       
        string veclesson4 = R"(
        ADD NEW VALUE TO A VECTOR'S EXISTING INDEX
        
        To add a new value to an existing vector, simply:

        my_vector[index] = "newValue";

        Let's add 'second' to my_vector[1]

        my_vector[1] = "second"

        Continue to run the code!

        )";

        cout << veclesson4 << "\n";

        abc();

        my_vector[1] = "second";

        /*
        cout
        eezo
        second
        etwo
        */
        for (string element : my_vector) {
            cout << element << "\n";
        }



        string veclesson5 = R"(
        VECTOR: DELETING AN INDEX and VALUE WITH begin(), and erase().
        
        To delete a VALUE and its INDEX anywhere in the vector you must use begin() and erase().

        This can be risky because it shrinks the vector by one index. When used it ought to be well documented

        syntax is:

        my_vec.erase(my_vec.begin() + indexFromZerothIndex);

        OR 

        my_vector.erase(my_vector.begin() + 1);

        This command should erase second

        Continue to run the code!)";

        cout << veclesson5 << "\n"; 

        abc();

        // code will erase second from my vector.
        // my_vector now contains 3 indicies.
        my_vector.erase(my_vector.begin() + 1);

        /*
        cout 
        eezo
        etwo
        */

        for (string element : my_vector) {
            cout << element << "\n"; 

        }

        abc();

        string veclesson6 = R"(
        CLEARING AN INDEX VALUE WITHOUT DELETING THE INDEX WITH .clear()
        
        The safer method for removing a value at and index is .clear()

        This allows the value to be removed while keeping the index intact

        syntax: vectorName[indexElementToClear].clear();

        my_vector[1].clear();

        This code will clear etwo from the list when we cout it, a blankline will print.

        Continue to run it.
        )";

        cout << veclesson6 << "\n"; 
        abc();

        my_vector[1].clear();

        /*
        cout
        eezo


        */
        for (string element : my_vector) {
            cout << element << "\n";
        }

        abc();

        string veclesson7 = R"(
        INSERTING A NEW VALUE AND INDEX WITH .insert()
        
        This will add whatever value and a new index to the vector. If you chose an existing index, the index that was originally there will
        be moved one index back, and your new index value pair will go into the postion the original index value pair was at.
        
        Syntax is: vectorName.insert(vectorName.begin() + indexYouWantToPutIt, "whatYouWantToPutThere);
        
        Let's close out vectors with this code
        
        my_vector.insert(my_vector.begin() + 1, "end of lesson");

        This code will add 'end of lesson' to my vector at the second index. 

        Let's run it
        )";

        cout << veclesson7 << "\n";

        abc();

        my_vector.insert(my_vector.begin() + 1, "end of lesson");

        for (string element : my_vector) {
            cout << element << "\n";
        }

        cout << "THIS CONCLUDES THIS MODULE\n" << endl;
        abc();
    }

    // contains map lessons
    // child function of declarations menu.
    void map_lessons(){

        string mapl1 = R"(
        MAPS

        Maps are collections that contain key'value pairs they are part of the std library. To use a map, 
        it must first be include with the command #include <map>.

        Interestingly, C++ maps do not have indicies, instead they are order by ASCII code from A-z. So updates, are ordered as such.

        maps must have one key/value relationship but can contain several key/value pairs that share that relationship.
        any two datatypes can used for the key/value pair. Such as a string and a vector.
        such as:
        
         map <string, string> nostromo = {
            {"Captain", "Dallas"},
            {"Executive Officer", "Kane"},
            {"Warrant Officer", "Ripley"},
            {"Science Officer", "Ash"},
            {"Navigator", "Lambert"},
            {"Chief Engineer", "Parker"},
            {"Engineer", "Brett"},
            {"Ship's Cat", "Jones"}
        };

        syntax for a map is:

        map <keyDataType, valueDataType> mapName = {{key1, value1}, {key2, value2}};

        The nostromo map is the example we will use to learn about maps.
        )";

        cout << mapl1 << "\n";


        // Crew complement of nostromo 
        map <string, string> nostromo = {
            {"Captain", "Dallas"},
            {"Executive Officer", "Kane"},
            {"Warrant Officer", "Ripley"},
            {"Science Officer", "Ash"},
            {"Navigator", "Lambert"},
            {"Chief Engineer", "Parker"},
            {"Engineer", "Brett"},
            {"Ship's Cat", "Jones"}
        };


        abc();

        string  mapl2 = R"(
        READING INFO FROM A MAP WITH .at(), AND mapName[keyName]

        .at(keyHere) or mapName[keyHere] can read and access the VALUE associated with the key. Keys are how maps are searched.

        SYNTAX
        mapName.at(KeyName);
        OR
        mapName[Keyname];

        cout << nostromo.at("Captain") << "\n";

        cout << nostromo["Ship's Cat"] << "\n"

        WHAT HAPPENS IF A KEY IS MISSING

        .at() throws a out_of_range error, to except this error <stdxecept> needs to be included in the header otherwise the program will crash.

        WARNING: mapName[keyName] creates the searched key but adds an empty value. The program will continue

        Let's run this code!
        )";

        cout << mapl2 << "\n";

        // outputs Dallas
        cout << nostromo.at("Captain") << "\n";
        // outputs Jones
        cout << nostromo["Ship's Cat"] << "\n";

        abc();

        string mapl3 = R"(
        READING KEY VALUE PAIR OR KEY WITH .find() ->first ->second AND contains()
        
        Reading key value pairs with .find() is a stable way to read a map. If find() does not find any matching key, it does not create a key with a
        an empty value like mapName[keyName], or throw an out_of_range error like .find()

        contains() returns a bool true or false, or 0 , or 1 in cout when used on a map. It does not cause a program crash, it simply checks if the key exists.

        cout << "Enter Rank to search crew member: "; 
            
            string rank;
            getline(cin, rank);

          
            if (nostromo.contains(rank)) {
            cout << "Crewmember is aboard." << "\n";
            }
            else{
                cout << "Crew member is not aboard." << "\n";
            }

            auto search = nostromo.find(rank);
    
            if (search != nostromo.end()) {
            
            cout << search->first << ": " << search->second << "\n";
            break;
            }
             
            else {
                cout << "Rank is not part of Nostromo compliment." << "\n";
            }

        }

        In this example, try to find a key value pair by searching the map nostromo by rank.
        )";

        cout << mapl3 << "\n";

        abc();

        while (true){

            cout << "Enter Rank to search crew member: "; 
            // takes user input assigns it to rank
            string rank;
            getline(cin, rank);

            // contains() returns a bool, if true, it returns the if branch. If false it returns the else branch
            if (nostromo.contains(rank)) {
            cout << "Crewmember is aboard." << "\n";
            }
            else{
                cout << "Crew member is not aboard." << "\n";
            }

            // searches map nostromo for that rank
            auto search = nostromo.find(rank);
    
            // if the search finds the key before reaching the end of the map... 
            if (search != nostromo.end()) {
            
            // output the key value pair with ->first for the key and -> second for the value.
            cout << search->first << ": " << search->second << "\n";
            break;
            }
            // else search again, does not need rank.clear() because it resides in a while loop. 
            else {
                cout << "Rank is not part of Nostromo compliment." << "\n";
            }

        }

        abc();

        string mapl4 = R"(
        UPDATING KEYS AND VALUES WITH .at(), .find() and mapName[])
        
        Updating values is a common map operation. 
        
        UPDATING A VALUE WITH mapName[keyName] = newValueName)
        
        This is the most direct method to update a value, however if the KEY does not exist
        C++ will assign [] to a KEY and insert the VALUE associated with it.

        // updating a value
        nostromo["Captain"] = "MU/TH/ER";

        UPDATING A VALUE WITH .at()

        mapname.at(keyName) = newValueName;

        updating a value with .at() is a bit safer than the aforementioned method, if the key does not
        exist in the map it will throw an out_of_range error instead of inserting an empty key.

        nostromo.at("Captain") = "Ripley";

        ADDING A KV PAIR

        Adding KV pairs to a map is easy, but the new pair is ordered by ASCII A-z.


        nostromo["Alien"] = "Xenomorph";

        let's run these codes!
        )";
        
        cout << mapl4 << "\n";
        abc();

        // Dallas
        cout << "Captain is currently: " << nostromo["Captain"] << "\n";
        // update to MU/TH/ER
        nostromo["Captain"] = "MU/TH/ER";
        // MU/TH/ER
        cout << "Now Captain is: " << nostromo["Captain"] << "\n";

        // Ripley has been promoted to captain
        nostromo.erase("Warrant Officer");

        //updating a value using .at()

         // MU/TH/ER
        cout << "Captain is currently: " << nostromo["Captain"] << "\n";
        // update to Ripley
        nostromo.at("Captain") = "Ripley";
        // Ripley
        cout << "Now Captain is: " << nostromo["Captain"] << "\n";

        /*adding a new KV pair
        C++ maps do not use indices, rather, KV pairs are ordered by ASCII A-z
        So adding Alien Xenomorph will place the record at the top of the map"
        */
        nostromo["Alien"] = "Xenomroph";
        //parker
        cout << "Alien has been added to nostromo map. " << "Alien: " << nostromo["Alien"] << "\n";

        abc();
        
        string mapl5 = R"(
        UPDATING A VALUE WITH .find() .end() AND ->second

        Using .find() ->second is a good way to update a value but it is also a bit more complex to set up:
        1. declare var that contains find(keyName)
        2. create if statement to search the map to the end()
        3. if not end of map and keyName located
        4. use -> second to update the value

        auto find_y_update = nostromo.find("Executive Officer");
        
        if (find_y_update != nostromo.end()) {
            find_y_update->second = "Face-hugged";
        }

        This method cannot also be used to update a KEY because KEYS ARE READ ONLY
        Let's demo this code!
        )";

        cout << mapl5 << "\n";

        abc();

        cout << "Executive Officer is: " << nostromo["Executive Officer"] << "\n";
        // updating a value with .find()
        // declare var that uses search
        auto find_y_update = nostromo.find("Executive Officer");
        // use .end() with .find() to search to the end of the map, if not the end, change the value with ->second.
        if (find_y_update != nostromo.end()) {
            find_y_update->second = "Face-hugged";
        }
        
        cout << "Executive Officer is now : " << nostromo["Executive Officer"] << "\n";

        abc();

        string mapl6 = R"(
        DELETING KV PAIRS IN A MAP WITH .erase()
        
        .erase() deletes key value pairs in a map using the key as an arg.

        mapName.erase(keyName)

        nostromo.erase("Executive Officer");
        nostromo.erase("Engineer");
        nostromo.erase("Science Officer");
        nostromo.erase("Navigatior");
        nostromo.erase("Chief Engineer");
        nostromo.erase("Warrant Officer");

        Let's run it, search crew by Rank
        )";

        cout << mapl6 << "\n";

        abc();
        // delete the crew of nostromo
        nostromo.erase("Executive Officer");
        nostromo.erase("Engineer");
        nostromo.erase("Science Officer");
        nostromo.erase("Navigatior");
        nostromo.erase("Chief Engineer");
        nostromo.erase("Warrant Officer");

        // the disaster continues...

        while (true){
            cout << "Search Rank for crewmember. Enter 0 to exit" << "\n";
            string search;
            getline(cin, search);
            if (search == "0"){
                break;
            }
            else {
                if (nostromo.contains(search)){
                    cout << nostromo[search] << " is aboard." << "\n";
                }
                else {
                    cout << search << " is not aboard." << "\n";
                }
            }  
        }
        
        string mapl7 = R"(
        COPYING A MAP TO A NEW MAP
        
        Only Ripley, Jones, and the Xenomorph remain aboard Nostromo! 
        All that is left to do is set Nostromo's self-destruct and escape to Narcissus... with Jones of course. 
    
        C++ does not seem to have a built in collection copy function like Python.

        auto narcissus = nostromo;
        OR
        map <string, string> narcissus = nostromo;
        
        DELETING A MAP WITH .clear()

        The crew has boarded Narcissus, and nostrmo self-destructs...

        nostromo.clear()

        The clear() function empties the contents of the map, and erases it when the user has left
        the scope of where the map was declared. 

        Let's run it.
        )";

        cout << mapl7 << "\n";
        abc();
        // method for copying a map
        // can also be declared as auto narcissus = nostromo;
        map <string, string> narcissus = nostromo; 

        //destroy nostromo. 
        nostromo.clear();

        cout << "Narcissus Crew: " << narcissus["Captain"] << ", " << narcissus["Ship's Cat"] 
        << ", " << narcissus["Alien"] << "\n";

        cout << "But the Xenomorph has snuck aboard the shuttle. " << " continue to use .erase() to jettision Alien."
        << "\n";

        abc();
        // jettisons Xenomorph from Narcissus. 
        narcissus.erase("Alien");
        // check if alien is there with contains()

        if (narcissus.contains("Alien") == false){
            cout << "ALIEN JETTISIONED." << "\n";
            cout << "This is Ripley, last survior of the Nostromo, signing off." << "\n";
        }
        else {
            cout << "I must have seen a different movie." << "\n";
        }

        cout << "THIS CONCLUDES THIS MODULE" << "\n";
    }
             
// menu for declarations lesson.
void declarations_menu() {

    while(true) {

        cout << "WELCOME TO DECLARATIONS!\n" << endl;

        string s_main_menu =  R"(DECLARATIONS MENU
        SELECT A TOPIC FOR REVIEW
        0 = EXIT TO MAIN
        1 = BASIC DATATYPES
        2 = COLLECTION DATATYPE: ARRAY
        3 = COLLECTION DATATYPE: VECTOR
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
            basic_datatypes();
        }
        if (dec_selection == 2) {
            datatype_collections_array();
        }
        if (dec_selection == 3) {
            cdatatype_vector();
        }    
        if (dec_selection == 4){
            map_lessons();
        }
    }
}
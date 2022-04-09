#include "models/user.h"
#include <iostream>

using namespace std;

int main() {

    // Create on the stack
    user firstUser("Ronald", "Hjorth", "Alan", "rhjorth", "ronhjorth@msn.com","208-768-2361");
    firstUser.setId(300);
    firstUser.printUser();

    // Create this on heap.
    user* secondUser;
    secondUser = new user("Donald", "Duck", "A", "dduck", "dduck@msn.com");
    secondUser->setId(301);
    secondUser->setCellPhone("333-444-5555");
    secondUser->printUser();
    delete secondUser; // Need to delete when using new

    /*TODO read users from a json file
     1. create json file with a few users
     2. read the file and deseialize that data building users
     */

    //TODO how to build an interface
    //TODO arrays, lists
    //TODO Functions that return more than one item
    //TODO work with <map>
    //TODO work with Tuples
    //TODO more pointer work out.
    //TODO work with vector
        //create
        //for loop through itesm
        //Can you have a vector of objects?
    //TODO date time functions
    //TODO create a signleton
    //TODO create a facade
    //TODO unit testing

    return 0;
}

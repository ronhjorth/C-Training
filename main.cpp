#include "models/user.h"
#include "repositories/fileReader.h"

#include <iostream>
#include <fstream>

//#include <json/value.h>
//#include <json/json.h>

using namespace std;

//void displayDataJson {const Json::Value &cfg_root};


//void displayCfg(const Json::Value &cfg_root)
//{
//    std::string fistName = cfg_root["user"]["firstName"].asString();
//    //std::string serverPort = cfg_root["user"]["server-port"].asString();
//    //unsigned int bufferLen = cfg_root["user"]["buffer-length"].asUInt();
//
//    std::cout << "______ User #1 ______" << std::endl;
//    std::cout << "First Bane     :" << fistName << std::endl;
//    //std::cout << "server-port   :" << serverPort << std::endl;
//    //std::cout << "buffer-length :" << bufferLen<< std::endl;
//}
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

    // Read json file
    //    Json:: Reader reader;
    //    Json::value jsonRoot;

    string jsonFile = "../data/user.json";
    //string jsonFile ="userMain.txt";

    fileReader reader;
    reader.readFile(jsonFile);

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

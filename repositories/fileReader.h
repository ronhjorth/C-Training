//
// Created by Ron Hjorth on 4/13/22.
//
#include <string>
#include <iostream>
#include <fstream>

#ifndef C___FILEREADER_H
#define C___FILEREADER_H
// remember this gets created in the debug so files are ../filename
class fileReader{
public:
    void writeFile(const string &fileName){
            ofstream rootFile ("test.txt", ofstream::out);
            if(rootFile.is_open()){
                rootFile << "lorem ipsum";
                rootFile.close();
            }
    }

    void readFile(const string &fileName) {
        try {
            ifstream rootFile;
            rootFile.open(fileName);
            if(rootFile.is_open()){
                cout << "opened " << fileName << endl;
            }
            else{
                cout << "help " << fileName << " not open" << endl;
            }
            // by default fstreaam does not throw exceptions
            // you need to use void exceptions (iostate except) and fetch the exception
            // using iostate exception const&;
            rootFile.exceptions ( ifstream::eofbit | ifstream::failbit | ifstream::badbit );

            if (rootFile) {
                cout << "We have one" << endl;
                rootFile.close();
            } else {
                cout << "We don't have one" << endl
                     << fileName << " Could not be opened." << endl;;
            }
        }
        catch (const ios_base::failure &e) {
            cout << "Caught an ios_base::failure." << endl
                 << "Error code: " << e.code().value()
                 << " (" << e.code().message() << ")" << endl
                 << "Error category: " << e.code().category().name() << endl
                 << fileName << " Could not be opened." << endl;
        }
    }
};

#endif //C___FILEREADER_H

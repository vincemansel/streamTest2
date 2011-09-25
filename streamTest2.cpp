//
//  streamTest2.cpp
//  streamTest2
//
//  Created by Vince Mansel on 9/25/11.
//  Copyright 2011 Wave Ocean Networks. All rights reserved.
//

/*
#include <fstream>
#include "iostream"
//#include "simpio.h" 


int main() {
    std::ifstream in;
    std::ofstream out;
    std::cout << "Opening files now..." << std::endl;
    in.open("data.txt");
    out.open("copy.txt");
    if (in.fail() || out.fail()) std::cerr << "Can't open files."  << std::endl;
    std::string line;
    while (true) {
        getline(in, line);
        if (in.fail()) break; // no more lines to read
        out << line << std::endl;
    }
    in.close();
    out.close();
    
    return 0;
}
*/

/*
 Note: simpio.h simplifies IO functions for fstream and iostream.
 It also provides a seperated Console Window upon launch.
 i.e. the std:: is not required on ifstream, etc.
 
 Also, genlib.h provides a nice Error(string) function.
*/
 
#include <fstream>
#include "iostream"
#include "simpio.h" 
#include "genlib.h"
 
int main() {
    ifstream in;
    ofstream out;
    cout << "Opening files now..." << endl;
    in.open("data.txt");
    out.open("copy.txt");
    if (in.fail() || out.fail()) Error("Can't open files.");
    string line;
    while (true) {
        getline(in, line);
        if (in.fail()) break; // no more lines to read
        out << line << endl;
    }
    in.close();
    out.close();
    
    return 0;
}
 


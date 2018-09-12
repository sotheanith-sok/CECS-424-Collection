//author: Sotheanith Sok

//Import
#include<iostream>
#include<string>
#include<fstream>
#include <regex>

using namespace std;

int main(int argc, char **argv) {
    string line;
    //Define regex
    regex e("^(\\$)(\\**)(([0-9])|(([1-9][0-9]?[0-9]?)((,)[0-9][0-9][0-9])*))((((\\.)[0-9][0-9])*)?)$");

    //Create reader
    ifstream out(argv[1]);

    //Read, compare, and print out result
    while(getline(out, line)) {
       if(regex_match(line,e)){
         cout<<"Matched: "<<line<<endl;
       }else{
          cout<<"Not Matched: "<<line<<endl;
       }
    }
    
    //Close reader
    out.close();
    return 0;
}
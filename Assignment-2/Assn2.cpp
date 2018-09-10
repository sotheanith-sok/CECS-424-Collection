#include<iostream>
#include<string>
#include<fstream>
#include <regex>

using namespace std;

int main(int argc, char **argv) {
    string line;
    regex e("^(\\$)(\\**)(([0-9])|(([1-9][0-9]?[0-9]?)((,)[0-9][0-9][0-9])*))((((\\.)[0-9][0-9])*)?)$");
    ifstream out(argv[1]);
    while(getline(out, line)) {
       if(regex_match(line,e)){
         cout<<"Matched: "<<line<<endl;
       }else{
          cout<<"Not matched: "<<line<<endl;
       }
    }
    out.close();
    return 0;
}
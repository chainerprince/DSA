#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <iterator>
using namespace std;


int main(){
    

    string input = "";
    cout << "Enter your input: ";

    getline(cin,input);

    string delimiter = " ";
     size_t pos = 0;

    vector<string> characters{};

    // cout << "your in put is: " << input ;


    while ((pos = input.find(delimiter)) != string::npos) {
        characters.push_back(input.substr(0, pos));
        input.erase(0, pos + delimiter.length());
    }


    char zeros[] = {'0','!',':','<','>','"','|','{','}',';','?'};
    char ones[] = {'a','b','c'};
    char twos[] = {'d','e','f'};
    char threes[] = {'g','h','i'};
    char fours[] = {'j','k','l'};
    char fives[] = {'m','n','o'};
    char sixs[] = {'p','p','r'};
    char sevens[] = {'s','t','u'};
    char eights[] = {'v','w','x'};
    char nines[] = {'y','z',','};

    
    
    vector<string> output{};

    int numberOfLetters = 3;
   for (const auto &str : characters) {
       cout << str;
   };
    for (const auto &str : characters) {
        
        
        
            if(str.substr(0,2)=="01"){
                cout << " ";
            }
            
               if(str.substr(0,1)=="0"){
                   cout << "Reached here";
                for(int j=0;j<14;j++){
                    if(str.length()==j){
                        // cout <<zeros[j];
                        output.push_back(to_string(zeros[j]));
                        
                    }
                    
                    continue;
                }
                             
            
            } if(str.substr(0,1)=="1"){
                cout << "Reached one";
                for(int j=0;j<numberOfLetters;j++){
                    if(str.length()==j){
                        cout <<ones[j];
                        output.push_back(to_string(ones[j]));
                        break;
                    }
                    // continue;
                } 
    }
     if(str.substr(0,1)=="2"){
                for(int j=0;j<numberOfLetters;j++){
                    if(str.length()==j){
                        output.push_back(to_string(twos[j]));
                        break;
                    }
                    // continue;
                } 
    }
     if(str.substr(0,1)=="3"){
                for(int j=0;j<numberOfLetters;j++){
                    if(str.length()==j){
                        output.push_back(to_string(threes[j]));
                        break;
                    }
                    // continue;
                } 
    }
     if(str.substr(0,1)=="4"){
                for(int j=0;j<numberOfLetters;j++){
                    if(str.length()==j){
                        output.push_back(to_string(fours[j]));
                        break;
                    }
                    // continue;
                } 
    }
     if(str.substr(0,1)=="5"){
                for(int j=0;j<numberOfLetters;j++){
                    if(str.length()==j){
                        output.push_back(to_string(fives[j]));
                        break;
                    }
                    // continue;
                } 
    }
     if(str.substr(0,1)=="6"){
                for(int j=0;j<numberOfLetters;j++){
                    if(str.length()==j){
                        output.push_back(to_string(sixs[j]));
                        break;
                    }
                    // continue;
                } 
    }
     if(str.substr(0,1)=="7"){
                for(int j=0;j<numberOfLetters;j++){
                    if(str.length()==j){
                        output.push_back(to_string(sevens[j]));
                        break;
                    }
                    // continue;
                } 
    }
     if(str.substr(0,1)=="8"){
                for(int j=0;j<numberOfLetters;j++){
                    if(str.length()==j){
                        output.push_back(to_string(eights[j]));
                        break;
                    }
                    // continue;
                } 
    }
     if(str.substr(0,1)=="9"){
                for(int j=0;j<numberOfLetters;j++){
                    if(str.length()==j){
                        output.push_back(to_string(nines[j]));
                        break;
                    }
                    
                    // continue;
                } 
    }


  for( auto &out: output){
      cout << out;
  } // The final line of codes


// 3 333 222 4444 4444 555 01 888 5555 6666 4444 22 000
// its output: gifjjo xmpje:


    return 0;
}}
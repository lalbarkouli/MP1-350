#include "model.h"

model::model(){
}

// translates one consonant into robber language
std::string translateSingleConsonant(char input){
    string s;
    s += input;
    s += "o"; 
    s += tolower(input);
    return s;
    }

//translates one vowel into robber language
std::string translateSingleVowel(char input){
    string s;
    s += input;
    return s;
}


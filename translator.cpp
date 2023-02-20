#include "translator.h"
#include "model.cpp"
#include <string>

translator::translator(){
}

bool isVowel(char input){
    if (tolower(input)  == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'){
        return true;
    } else
    return false;
}

// Robber language translation for one word in one string.
string translateEnglishWord(string input){
    string s;
    for (int i = 0; i < input.size(); ++i){
         if (isVowel(input[i])){
            s += translateSingleVowel(input[i]);
         } else {
            s += translateSingleConsonant(input[i]);
         }
    }
    return s;

}

//Robber translation for multiple words in one string
string translateEnglishSentence(string input){
    string s = "";
    string placeholder = "";
    input += " ";
    for (int i = 0; i < input.size(); ++i){
        if (isalpha(input[i])){
        placeholder += input[i];
    } else {
        s += translateEnglishWord(placeholder);
        s += " ";
        placeholder = "";
    }
    }

    return s;
   
}
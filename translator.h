#pragma once
#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <iostream>

using namespace std;

class translator{
    public:
    translator();
    ~translator();
    bool isVowel(char input);
    string translateEnglishWord(string input);
    string translateEnglishSentence(string input);
};

#endif

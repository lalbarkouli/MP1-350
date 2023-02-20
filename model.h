#pragma once
#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <string>

using namespace std;

class model{
    public:
    model();
    ~model();
    bool isVowel(char input);
    string translateSingleConsonant(char input);
    string translateSingleVowel(char input);

};

#endif
#pragma once
#ifndef FILE_PROCESSOR_H
#define FILE_PROCESSOR_H

#include <iostream>
#include <fstream>

using namespace std;

class FileProcessor{
    public:
    FileProcessor();
    ~FileProcessor();
    void processFile(string inputFile, string outputFile);

};

#endif
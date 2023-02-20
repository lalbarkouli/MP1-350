#include "FileProcessor.cpp"

using namespace std;

int main(){
    string input;
    cout << "What text file do you want to translate?" << endl;
    cin >> input;

    string output;
    cout << "What is the output file name? " << endl;
    cin >> output;

    processFile(input,output);

}


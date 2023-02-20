#include "FileProcessor.h"
#include "translator.cpp"


FileProcessor::FileProcessor(){

}

// Takes input from a text file with English sentence and then output the translated sentence in a html file
void processFile(string inputFile, string outputFile){
    ifstream englishText(inputFile);
    ofstream file(outputFile);

        string line;
            file << "<html>\n";
            file << "<body>\n";
            file << "<h1><b>" ;
        while(getline(englishText, line)){ 
            file << line; 
        }
        file << "</h1></b>" << endl;
        file << "<h2><i>" ;

           file << translateEnglishSentence(line) << "</h2></i>";
        

    file.close();
    englishText.close();

}

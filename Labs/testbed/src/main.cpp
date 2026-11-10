#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>

// Include any necessary libraries here.

using namespace std;

int main() {
   ifstream inputFile;
   ofstream outputFile;
   string filePath;
   string checkString = "_photo.jpg";
   string appendString = "_info.txt";
   string tempString;
   vector<string> augmententStrings;

   cin >> filePath;

   inputFile.open(filePath);
   if (!inputFile.is_open()) {
      cout << filePath << ": Input file could not be opened" << endl;
      return 1;
   }

   while (!inputFile.eof()) {
      inputFile >> tempString;
      size_t pos = tempString.find(checkString);
      if (pos != string::npos) {
         tempString.replace(pos, checkString.length(), appendString);
         augmententStrings.push_back(tempString);
         cout << "wrote: " << tempString << " to augmented" << endl;
      }
   }

   inputFile.close();

   outputFile.open(filePath);
   if (!outputFile.is_open()) {
      cout << filePath << ": Output file could not be opened" << endl;
      return 1;
   }

   for (int i = 0; i < augmententStrings.size(); ++i) {
      outputFile << augmententStrings.at(i) << endl;
   }

   outputFile.close();

   return 0;
}

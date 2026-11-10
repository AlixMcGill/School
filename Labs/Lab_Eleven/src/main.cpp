#include <cstddef>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int GetMonthAsInt(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
    string filePath = "docs/dates.txt";	
    ifstream dateFile;
    string oFilePath = "docs/newdates.txt";
    ofstream oDateFile;
    string tempMonth;
    string tempDay;
    string tempYear;
    string tempString;
    int monthInt;
    vector<string> outputStrings;
    
    dateFile.open(filePath);
    oDateFile.open(oFilePath);
    
    if (!dateFile.is_open()) {
        cout << filePath << ": could not be opened" << endl;
        return 1;
    }

    if (!oDateFile.is_open()) {
        cout << oFilePath << ": could not be opened" << endl;
        return 1;
    }

    while (!dateFile.eof()) {
        getline(dateFile, tempString);
        size_t spacePosition = tempString.find(' ');
        size_t commaPosition = tempString.find(',');

        if (spacePosition != string::npos && commaPosition != string::npos) {
            tempMonth = tempString.substr(0, spacePosition);
            tempDay = tempString.substr(spacePosition + 1, commaPosition - spacePosition - 1);
            tempYear = tempString.substr(commaPosition + 2);

            monthInt = GetMonthAsInt(tempMonth);
            oDateFile << monthInt << "-" << tempDay << "-" << tempYear << endl;
        }
    }

    dateFile.close();
    oDateFile.close();
    return 0;
}

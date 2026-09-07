#include <iostream>
using namespace std;

int main()
{
    int input;
    bool isEven = false;
    
    cin >> input;

    // Error Handling
    if (
        input < 1 ||
        (input > 99 && (input % 100) < 1) ||
        input > 999
        ) {
        cout << input << " is not a valid interstate highway number." << endl;
        return 0;
    }
/*
    if (input > 99 && (input % 100) < 1) {
        cout << input << " is not a valid interstate highway number." << endl;
        return 0;
    }

    if (input > 999) {
        cout << input << " is not a valid interstate highway number." << endl;
        return 0;
    } */

    // Check if interstate is odd or even
    if (input % 2 == 0) {
        isEven = true;
    }

    if (input < 100) {
        cout << "I-" << input << " is primary, ";
        if (isEven) {
            cout << "going east/west." << endl;
        }
        else {
            cout << "going north/south." << endl;
        }
    }
    else {
        cout << "I-" << input << " is auxiliary, ";
        if (isEven) {
            cout << "going east/west." << endl;
        }
        else {
            cout << "going north/south." << endl;
        }
    }

    return 0;
}

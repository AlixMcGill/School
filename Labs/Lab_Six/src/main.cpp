#include <iostream>
#include <vector>

using namespace std;

int main() {
    int vecSize;
    bool isPalindrome = true;
    vector<int> numList;
    
    cin >> vecSize;

    for (int i = 0; i < vecSize; ++i) {
        int num;
        cin >> num;
        numList.push_back(num);
    }

    for (int i = 0; i < vecSize / 2; ++i) {
        if (numList.at(i) != numList.at(vecSize - (i + 1))) {
            isPalindrome = false;
        }
    }

    if (isPalindrome) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}

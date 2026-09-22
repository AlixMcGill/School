#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int num;
    int middleNum;

    while (cin >> num && num > 0) {
       nums.push_back(num);
    }

    middleNum = nums.size() / 2;

    cout << "Middle item: " << nums.at(middleNum) << endl;

    return 0;
}

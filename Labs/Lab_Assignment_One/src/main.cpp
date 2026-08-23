#include <iostream>
using namespace std;

int main() {
    int currentPrice;
    int lastMonthPrice;

    cout << "Enter Current Price: ";
    cin >> currentPrice;

    cout << "Enter Last Month Price: ";
    cin >> lastMonthPrice;

    cout << "This house is $" << currentPrice;
    cout << ". The change is $" << currentPrice - lastMonthPrice << " since last month." << endl;
    cout << "The estimated monthly mortgage is $" << (currentPrice * 0.051f) / 12 << "." << endl;

    return 0;
}

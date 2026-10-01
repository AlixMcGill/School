#include <iostream>

using namespace std;

int feetToSteps(double userFeet) {
    return static_cast<int>(userFeet / 2.5);
}

int main() {
    double feet;
    cin >> feet;
    cout << feetToSteps(feet) << endl;
    return 0;
}

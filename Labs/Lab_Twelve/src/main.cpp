#include <stdexcept>
#include <iostream>
#include <iomanip>
using namespace std;

double StepsToMiles(int stepNum) {
    if (stepNum < 0) {
        throw runtime_error("Exception: Negative step count entered.");
    }

    double stepPerMile = 2000.0;
    return (double)stepNum / stepPerMile;
}

int main() {
    int userStep;
    double output;
    
    try {
        cin >> userStep;
        output = StepsToMiles(userStep);
        cout << fixed << setprecision(2); 
        cout << output << endl;
    } catch (runtime_error& except) {
        cout << except.what() << endl;
    }

    return 0;
}

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double age;
    double weight;
    double heartRate;
    double time;

    cin >> age >> weight >> heartRate >> time;

    double cals = ((age * .2757) + (weight * .03295) + (heartRate * 1.0781) - 75.4991) * time / 8.368;

    cout << fixed << setprecision(2);
    cout << "Calories: " << cals << " calories" << endl;
    return 0;
}

#include <iomanip>
#include <string>
#include <iostream>
#include "Team.h"
using namespace std;

void Team::SetName(string names) {
    name = names;
}

string Team::GetName() const {
    return name;
}

void Team::SetWins(int win) {
    wins = win;
}

int Team::GetWins() const {
    return wins;
}

void Team::SetLosses(int loss) {
    losses = loss;
}

int Team::GetLosses() const {
    return losses;
}

double Team::GetWinPercentage() {
    return (double)wins / (wins + losses);
}

void Team::PrintStanding() {
    double winRate = GetWinPercentage();
    cout << fixed << setprecision(2);
    cout << "Win percentage: " << winRate << endl;

    if (winRate >= .5) {
        cout << "Congratulations, Team " << name << " has a winning average!" << endl;
    }
    else {
        cout << "Team " << name << " has a losing average." << endl;
    }
}

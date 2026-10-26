#ifndef TEAM_H
#define TEAM_H
#include <string>
using namespace std;

class Team {
    public:
        void SetName(string name);
        string GetName() const;

        void SetWins(int win);
        int GetWins() const;

        void SetLosses(int Losses);
        int GetLosses() const;

        double GetWinPercentage();
        void PrintStanding();
    private:
        string name;
        int wins;
        int losses;
};

#endif

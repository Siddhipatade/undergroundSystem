#include <cstddef>
#include <iostream>
#include <unordered_map>
using namespace std;

class UndergroundSystem {
public:
    UndergroundSystem() {}

    void checkIn(int id, string stationName, int t) {
        checkIns[id] = make_pair(stationName, t);
    }

    void checkOut(int id, string stationName, int t) {
        auto checkInInfo = checkIns[id];
        checkIns.erase(id);
        string travel = checkInInfo.first + "," + stationName;
        int travelTime = t - checkInInfo.second;

        if (travelTimes.find(travel) != travelTimes.end()) {
            travelTimes[travel].first += travelTime;
            travelTimes[travel].second++;
        } else {
            travelTimes[travel] = make_pair(travelTime, 1);
        }
    }

    double getAverageTime(string startStation, string endStation) {
        string travel = startStation + "," + endStation;
        auto travelInfo = travelTimes[travel];
        return (double) travelInfo.first / travelInfo.second;
    }

private:
    unordered_map<int, pair<string, int>> checkIns;
    unordered_map<string, pair<int, int>> travelTimes;
};

int main() {
    UndergroundSystem undergroundSystem;

    // Example usage
    undergroundSystem.checkIn(1, "A", 10);
    undergroundSystem.checkOut(1, "B", 15);
    double averageTime = undergroundSystem.getAverageTime("A", "B");
    cout << "Average Time: " << averageTime << endl;

    return 0;
}
#include <iostream>
#include <vector>

#include <map>
#include <unordered_map>

using namespace std;

struct CityRecord
{
    string name;
    uint64_t population;
    double latitude, longtitude;
};

int main()
{
    vector<CityRecord> cities;

    cities.push_back({"Dhaka", 500000, 23.81, 90.41});
    cities.push_back({"Malbourne", 500000, 23.81, 90.41});
    cities.push_back({"Delhi", 500000, 23.81, 90.41});
    cities.push_back({"Karachi", 500000, 23.81, 90.41});
    cities.push_back({"Berlin", 700000, 23.81, 90.41});
    cities.push_back({"London", 500000, 23.81, 90.41});

    // for(const auto& city:cities){
    //     cout << city.name << endl;
    // }
    
    map<string, CityRecord> cityMap;

    cityMap["Dhaka"] = CityRecord {"Dhaka", 500000, 23.81, 90.41};
    cityMap["Malbourne"] = CityRecord {"Malbourne", 500000, 23.81, 90.41};
    cityMap["Delhi"] = CityRecord {"Delhi", 500000, 23.81, 90.41};
    cityMap["Karachi"] = CityRecord {"Karachi", 500000, 23.81, 90.41};
    cityMap["Berlin"] = CityRecord {"Berlin", 700000, 23.81, 90.41};
    cityMap["London"] = CityRecord {"London", 500000, 23.81, 90.41};

    // cout << cityMap["Berlin"].population;

    // for(const auto& city : cityMap){
    //     cout << city.first << endl;
    // }
}
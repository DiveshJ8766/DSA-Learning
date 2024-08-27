#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int findMinDifference(vector<string> &timePoints)
{
    //* Convert into Minutes
    vector<int> minutesArray;
    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr_time = timePoints[i];
        int hours = stoi(curr_time.substr(0, 2));
        int minutes = stoi(curr_time.substr(3, 2));
        int totalMinutes = hours * 60 + minutes;
        minutesArray.push_back(totalMinutes);
    }

    //* Sort the Minutes Array
    sort(minutesArray.begin(), minutesArray.end());

    //* Now Find the Minimum Difference
    int mini = INT_MAX;
    int size = minutesArray.size();

    for (int i = 0; i < size - 1; i++)
    {
        int difference = minutesArray[i + 1] - minutesArray[i];
        mini = min(mini, difference);
    }

    //* we havn't checked starting element and Ending Element
    //* as it is clock
    int lastDifference1 = (minutesArray[0] + 1440) - minutesArray[size - 1];

    mini = min(mini, lastDifference1);

    return mini;
}

int main()
{
    vector<string> times = {"23:59", "00:00"};
    vector<string> time2 = {"00:00","23:59","00:00"};

    cout << "Minimum time difference : " << findMinDifference(time2)<<endl;
}
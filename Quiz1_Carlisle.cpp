#include <iostream>
#include <string>
using namespace std;

int main() {
    // Activity labels
    string activity1 = "Sleep";
    string activity2 = "Class";
    string activity3 = "Homework";
    string activity4 = "Meals";
    string activity5 = "Gym";
    string activity6 = "Fun Time";
    string activity7 = "Commuting";
    string activity8 = "Other";

    // Time spent on each activity (in minutes)
    int sleep = 450;         // 7 hrs 30 min
    int classes = 180;       // 3 hrs
    int homework = 150;      // 2 hrs 30 min
    int meals = 90;          // 1 hr 30 min
    int gym = 60;            // 1 hr
    int fun = 180;           // 3 hrs
    int commuting = 270;     // 4 hrs 30 min
    int other = 60;          // 1 hr

    // Totals
    int total_minutes = 1440;
    int productive = classes + homework + gym;
    int leisure = fun + meals;
    int life = sleep + commuting + other;
    int time_used = productive + leisure + life;
    int remaining = total_minutes - time_used;
    int percent_productive = (productive * 100) / total_minutes;

    // Output
    cout << "=============== MY PRODUCTIVE DAY SIMULATION ===============" << endl;
    cout << "Activity Breakdown:" << endl;

    cout << activity1 << ":            " << sleep / 60 << " hrs " << sleep % 60 << " min" << endl;
    cout << activity2 << ":            " << classes / 60 << " hrs " << classes % 60 << " min" << endl;
    cout << activity3 << ":       " << homework / 60 << " hrs " << homework % 60 << " min" << endl;
    cout << activity4 << ":            " << meals / 60 << " hrs " << meals % 60 << " min" << endl;
    cout << activity5 << ":              " << gym / 60 << " hrs " << gym % 60 << " min" << endl;
    cout << activity6 << ":       " << fun / 60 << " hrs " << fun % 60 << " min" << endl;
    cout << activity7 << ":       " << commuting / 60 << " hrs " << commuting % 60 << " min" << endl;
    cout << activity8 << ":            " << other / 60 << " hrs " << other % 60 << " min" << endl;

    cout << "--------------------------------------------------------------" << endl;
    cout << "Summary:" << endl;
    cout << "Productive Time:    " << productive / 60 << " hrs " << productive % 60 << " min" << endl;
    cout << "Leisure Time:       " << leisure / 60 << " hrs " << leisure % 60 << " min" << endl;
    cout << "Life Essentials:    " << life / 60 << " hrs " << life % 60 << " min" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "Total Time Used:    " << time_used / 60 << " hrs " << time_used % 60 << " min" << endl;
    cout << "Remaining Time:     " << remaining / 60 << " hrs " << remaining % 60 << " min";

    if (remaining == 0) {
        cout << " (Fully planned day!)";
    }
    cout << endl;

    cout << "--------------------------------------------------------------" << endl;
    cout << "You used **" << percent_productive << "%** of your day productively!" << endl;
    cout << "Great job, can you optimize your leisure or life time tomorrow?" << endl;
    cout << "==============================================================" << endl;

    return 0;
}

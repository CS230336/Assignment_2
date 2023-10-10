#include <iostream>
using namespace std;

int main()
{
    int totalDays, years, months, days;
    cin >> totalDays;
    years = totalDays / 365;
    months = (totalDays % 365) / 30;
    days = (totalDays % 365) % 30;
    cout << years << endl;
    cout << months << endl;
    cout << days << endl;

    return 0;
}
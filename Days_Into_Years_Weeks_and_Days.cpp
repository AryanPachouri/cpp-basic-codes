#include <iostream>

using namespace std;

int main()
{
    int days, year, week, day;
    cout<<endl;

    cout
        << "enter the no of days : " << endl;
    cin >> days;

    cout<<endl;

    year = int(days / 365);
    week = (days % 365) / 7;
    day = (days % 365) % 7;

    cout << year;
    cout <<" year(s) "<<week;
    cout <<" week(s) "<<day;
    cout<<" day(s)"<<endl;

    return 0;
}
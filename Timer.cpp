#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int hours, minutes, seconds;

    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes;
    cout << "Seconds: ";
    cin >> seconds;

    while (1)
    {
        system("cls");
        if (seconds > 59)
        {
            minutes++;
            seconds = 0;
        }

        if (minutes > 59)
        {
            hours++;
            minutes = 0;
        }

        if (hours > 23)
        {
            hours == 0;
        }
        cout << "---------- Clock ----------\n\n";
        cout << "  " << hours << ":" << minutes << ":" << seconds << endl<< endl;
        cout << "---------------------------\n";
        seconds++;
        Sleep(900);
    }
}
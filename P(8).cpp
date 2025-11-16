#include <iostream>
using namespace std;
int main()
{
    int examHour, examMin;
    int arriveHour, arriveMin;
    cout << "Enter exam starting hour: "<<endl;
    cin >> examHour;
    cout << "Enter exam starting minute: "<<endl;
    cin >> examMin;
    cout << "Enter arrival hour: "<<endl;
    cin >> arriveHour;
    cout << "Enter arrival minute: "<<endl;
    cin >> arriveMin;
    int examTime = examHour * 60 + examMin;
    int arriveTime = arriveHour * 60 + arriveMin;
    int diff = arriveTime - examTime;
    if (diff > 0)
    {
        cout << "Late" << endl;
        if (diff < 60)
        {
            cout << diff << " minutes after the start" << endl;
        }
        else
        {
            int h = diff / 60;
            int m = diff % 60;
            if (m < 10)
                cout << h << ":0" << m << " hours after the start" << endl;
            else
                cout << h << ":" << m << " hours after the start" << endl;
        }
    }
    else if (diff == 0 || diff >= -30)
    {
        cout << "On time" << endl;
        if (diff < 0)
            cout << -diff << " minutes before the start" << endl;
    }
    else
    {
        cout << "Early" << endl;
        diff = -diff;
        if (diff < 60)
        {
            cout << diff << " minutes before the start" << endl;
        }
        else
        {
            int h = diff / 60;
            int m = diff % 60;
            if (m < 10)
                cout << h << ":0" << m << " hours before the start" << endl;
            else
                cout << h << ":" << m << " hours before the start" << endl;
        }
    }
    return 0;
}
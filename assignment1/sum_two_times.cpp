#include <iostream>
using namespace std;

class Time
{
public:
    void add_times(int h1, int m1, int s1, int h2, int m2, int s2)
    {
        int hour, min, sec;
        if (h1 + h2 > 24) hour = (h1 + h2) - 24;
        else hour = (h1 + h2);
        
        if (m1 + m2 > 60){
            min = (m1 + m1) - 60;
            hour++;
        }
        else min = (m1 + m2);
        
        if (s1 + s2 > 60){
            sec = (s1 + s2) - 60;
            min++;
        }
        else sec = (s1 + s2);

        if (sec > 60){
            if (sec == 60){
                sec = 00;
            }
            min++;
            sec -= 60;
        }

        if (min > 60) {
            if (min == 60){
                min = 00;
            }
            hour++;
            min -= 60;
        }

        if (hour > 23){
            if (hour == 24){
                hour = 00;
            }
            hour = hour - 24;
        }

        cout << "the sum of both time  =  " << hour << " : " << min << " : " << sec << endl;
    }
};

int main()
{
    Time time;
    int h1, m1, s1;
    cout << "enter hour minute and sec for first time : ";
    cin >> h1 >> m1 >> s1;
    int h2, m2, s2;
    cout << "enter hour minute and sec  for secound time :  ";
    cin >> h2 >> m2 >> s2;

    if (h1 <= 24 && h2 <= 24) time.add_times(h1, m1, s1, h2, m2, s2);
    else cout << "invalid format try again " << endl;
    return 0;
}
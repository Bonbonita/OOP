#include <iostream>
#include <string.h>
using namespace std;

class Time {
private:
    int hor, min, sec;

public:
    Time() {
        this->hor = 0;
        this->min = 0;
        this->sec = 0;
    }
    Time (int hor, int min ,int sec) {
        this->hor = hor;
        this->min = min;
        this->sec = sec;
    }
    int GetTime () {
        if(min < 10) {
            if (sec < 10) {
                cout<<hor<<":0"<<min<<":0"<<sec<<endl;
                return 0;
            }
            cout<<hor<<":0"<<min<<":"<<sec<<endl;
            return 0;
        }
        cout<<hor<<":"<<min<<":"<<sec<<endl;
        return 0;
    }
    void sumTime (Time a, Time b) {
        hor = a.hor + b.hor;
        min = a.min + b.min;
        sec = a.sec + b.sec;
        if (this->min > 60) {
            hor += 1;
            min -= 60;
        }
        if (this->sec > 60) {
            min += 1;
            sec -= 60;
        }
    };

};

int main() {
    Time a(11, 31, 30);
    Time b(11, 30, 33);
    Time c;
    c.sumTime(a, b);
    c.GetTime();
}

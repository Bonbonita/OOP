#include <iostream>
using namespace std;

class Divisor {
private:
    int first, second;
    void Init (int arg1, int arg2){
        if (arg1 < 0 || arg2 < 0) throw invalid_argument("argument must be higher than 0");
    }
public:

    Divisor (int first, int second) {
        Init(first, second);
        this->first = first;
        this->second = second;
    }
    void Display() {
        cout<<"first: "<<first<<"\tsecond: "<<second<<endl;
    }
    int Ipart() {
        if (second == 0) throw invalid_argument("second cant`t = zero");
        return first / second;
    }
};

int main() {
    Divisor a(9, 3);
    cout<<a.Ipart()<<endl;
    a.Display();
}
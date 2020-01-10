#include <iostream>

using namespace std;

class Int {
private:
    int arg;
public:
    int argToZero() {
        return this->arg = 0;
    }

    int setArg(int arg) {
        this->arg = arg;
    }

    int getArg() {
        return this->arg;
    }

    int Sum(Int a, Int b) {
        return this->arg = a.getArg() + b.getArg();
    }
};

int main() {
    Int a;
    Int b;
    Int c;
    a.setArg(8);
    b.setArg(10);
    c.Sum(a, b);
    cout << c.getArg() << endl;
}
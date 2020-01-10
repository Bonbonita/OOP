#include <iostream>

using namespace std;

class numbers {
private:
    double a, b, c;
public:
    numbers() = default;

    numbers(double a, double b, double c) : a(a), b(b), c(c) {}

    // getters setters
    double getA() {
        return a;
    }

    void setA(double a) {
        this->a = a;
    }

    double getB() {
        return b;
    }

    void setB(double b) {
        this->b = b;
    }

    double getC() {
        return c;
    }

    void setC(double c) {
        this->c = c;
    }

    //sum
    double sum() {
        return a + b + c;
    }

    //destructor

    ~numbers() = default;
};

class triangles : public numbers {
private:
    double sideA, sideB, sideC;
public:
    //constructors
    triangles() : sideA(0), sideB(0), sideC(0) {
        numbers(0, 0, 0);
    }

    triangles(double a, double b, double c)
            : numbers(a, b, c), sideA(a), sideB(b), sideC(c) {}
    //destructor
    ~triangles() = default;

    // getters/setters
    double getSideA() {
        return sideA;
    }

    void setSideA(double sideA) {
        sideA = sideA;
    }

    double getSideB() {
        return sideB;
    }

    void setSideB(double sideB) {
        sideB = sideB;
    }

    double getSideC() {
        return sideC;
    }

    void setSideC(double sideC) {
        sideC = sideC;
    }
    //get corners
    void getCorners() {
        cout << "corner A: " <<sideA/sideC<< "\tcorner B: " << sideB/sideA << "\tcorner C: " << sideC/sideA << endl;
    }
};


int main() {

    triangles num(1.12, 3.43, 3);
    cout << num.getC() << endl;
    cout << num.getB() << endl;
    cout << num.getA() << endl;
    cout << num.sum() << endl;
    num.getCorners();
    num.setC(10);
    cout << num.getC() << endl;

}
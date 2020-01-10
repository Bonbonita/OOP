#include <iostream>
#include <math.h>

using namespace std;

class TRIYKA_CHISEL {
private:
    double a, b, c;
public:
    TRIYKA_CHISEL(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    virtual ~TRIYKA_CHISEL() {}

    //getters/setters
    double getA() const {
        return a;
    }

    void setA(double a) {
        TRIYKA_CHISEL::a = a;
    }

    double getB() const {
        return b;
    }

    void setB(double b) {
        TRIYKA_CHISEL::b = b;
    }

    double getC() const {
        return c;
    }

    void setC(double c) {
        TRIYKA_CHISEL::c = c;
    }

    virtual void pow() {
        a *= a;
        b *= b;
        c *= c;
    }
};

class triangle : public TRIYKA_CHISEL {
private:
    double sideA;
    double sideB;
    double sideC;
public:
    triangle(double sideA, double sideB, double sideC)
            : TRIYKA_CHISEL(sideA, sideB, sideC) {
        this->sideA = getA();
        this->sideB = getB();
        this->sideC = getC();
    }

    virtual ~triangle() {}

    void setSideA(double sideA) {
        triangle::sideA = sideA;
    }

    double getSideB() const {
        return sideB;
    }

    void setSideB(double sideB) {
        triangle::sideB = sideB;
    }

    double getSideC() const {
        return sideC;
    }

    void setSideC(double sideC) {
        triangle::sideC = sideC;
    }

    double getSideA() {
        return sideA;
    };
    //angle

    void findAngles() {
        double a, b, c;
        a = acos(((sideB * sideB) + (sideC * sideC) - (sideA * sideA)) / 2 * sideB * sideC) * 180 / M_PI;
        b = acos(((sideA * sideA) + (sideC * sideC) - (sideB * sideB)) / 2 * sideA * sideC) * 180 / M_PI;
        c = 180 - (a + b);
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
        cout << "C: " << c << endl;
    };

};

class racktangle : public TRIYKA_CHISEL {
private:
    double sideA, sideB, areaSize;
public:
    racktangle(double sideA, double sideB, double areaSize) : TRIYKA_CHISEL(sideA, sideB, 0) {
        this->sideA = sideA;
        this->sideB = sideB;
    }

};

int main() {
    triangle a(1, 1, 1);
    a.findAngles();
}

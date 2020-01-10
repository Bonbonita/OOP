#include <iostream>
using namespace std;

class Int {
private:
    unsigned int a, b;
public:
    // constructors
    Int () {this->a = 0; this->b = 0;}
    Int (unsigned int a, unsigned int b) {
        this-> a = a;
        this-> b = b;
    }
    Int (const Int &temp) {
        this->a = temp.a;
        this->b = temp.b;
    }
    // destructor
    ~Int () = default;
    // getter / setter
    unsigned int getA() const {
        return a;
    }

    void setA(unsigned int a) {
        this->a = a;
    }

    unsigned int getB() const {
        return b;
    }

    void setB(unsigned int b) {
        this->b = b;
    }
    // operations
    Int operator+(Int &temp) {
        a+=temp.a; b+=temp.b;
        if (this->a > INT32_MAX || this->b > INT32_MAX) throw underflow_error("error arguments invalid arg");
        cout<<"a: "<<a + temp.a<<"\tb: "<<b + temp.b<<endl;
        return temp;
    }
    Int operator-(Int &temp) {
        a-=temp.a; b-=temp.b;
        if (this->a > INT32_MAX || this->b > INT32_MAX) throw underflow_error("error arguments invalid arg");
        cout<<"a: "<< a - temp.a<<"\tb: "<<b - temp.b<<endl;
        return temp;
    }
    Int operator*(Int &temp) {
        a*=temp.a; b*=temp.b;
        if (this->a > INT32_MAX || this->b > INT32_MAX) throw underflow_error("error arguments invalid arg");
        cout<<"a: "<<a * temp.a<<"\tb: "<<b * temp.b<<endl;
        return temp;
    }
    Int operator/(Int &temp) {
        a/=temp.a; b/=temp.b;
        if (this->a > INT32_MAX || this->b > INT32_MAX) throw underflow_error("error arguments invalid arg");
        cout<<"a: "<<a / temp.a<<"\tb: "<<b / temp.b<<endl;
        return temp;
    }
};

int main() {
Int a(2147483648 , 6);
Int b(3, 1);
a+b;
cout<<a.getA()<<endl;
}
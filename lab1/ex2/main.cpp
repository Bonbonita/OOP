#include <iostream>
using namespace std;

class Kasa {
private:
    int cars;
    double money;

    void paingCar () {
        this->cars+=1;
        this->money+=0.50;
    }
    void nopayCar () {
        this->cars+=1;
    }
public:
    Kasa () {
        this->cars = 0;
        this->money = 0;
    }
    void Display() {
        int i = 0, ind = 0;
        while(i < 3) {
            cout<<"press 1 (paing car), press 2 (noPay car)"<<endl;
            cin>>ind;
            if (ind == 1) {
                paingCar();
                cout<<"cars: "<<this->cars<<"\tmoney: "<<this->money<<endl;
            } else if (ind == 2) {
                nopayCar();
                cout<<"cars: "<<this->cars<<"\tmoney: "<<this->money<<endl;
            }
            cout<<"if you wont exit press 3, to repeat 0"<<endl;
            cin>>i;
            system("cls");
        }
    }

};

int main () {
   Kasa a;
   a.Display();
}
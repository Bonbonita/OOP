#include <iostream>
using namespace std;


class sales {
private:
    float arr[3];
public:
    void putDataSal() {
        cout<<"enter sell sum";
        cin>>arr[0]>>arr[1]>>arr[2];
    }
    void getDataSal() {
        cout<<"month 1:" <<arr[0]<<"\tmonth 2: "<<arr[1]<<"\tmonth 3:"<<arr[2]<<endl;
    }

};

class publication {
private:
    string name;
    float price;
public:

    void putDataPub() {
        cout << "enter name, price";
        cin >> name >> price;
    }

    void getDataPub() {
        cout << "name: " << name << "\tprice: " << price << endl;
    }

};

class book : public publication, public sales {
private:
    int pages;
public:
    void putData() {
        putDataPub();
        cout << "enter pages";
        cin >> pages;
        putDataSal();
    }

    void getData() {
        cout << "pages: " << pages << endl;
    }
};

class type : public publication, public sales {
private:
    float timestamp;
public:
    void putData() {
        putDataPub();
        cout << "timestamp";
        cin >> timestamp;
        if (timestamp > 60.00) throw invalid_argument("timestamp can`t be higher than 60");
        putDataSal();
    }

    void getData() {
        cout << "timestamp: " << timestamp << endl;
    }
};


int main() {

}
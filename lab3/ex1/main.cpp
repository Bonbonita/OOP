#include <iostream>

using namespace std;

//3. Створити клас – дата з полям и у закритій частині: день (1-31), місяць (1-12),
//рік (ціле число). Визначити необхідні конструктори, методи доступу, деструктор.
//Перевантажити потокові операції введення і виведення, операції + (збільшення на n
//        днів) , – (різниця між двома датами), < та >= .

class Date {
private:
// Private Arguments
    int day;
    int month;
    int year;

public:
// Constructors / Destructor
    Date() {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    Date(int day, int month, int year) {
        if (day > 31 || month > 12) {
            throw invalid_argument("arguments are not satisfied");
        }

        this->day = day;
        this->month = month;
        this->year = year;
    }

    ~Date() = default;

// Getters / Setters
    int getDay() const {
        return day;
    }

    void setDay(int day) {
        Date::day = day;
    }

    int getMonth() const {
        return month;
    }

    void setMonth(int month) {
        Date::month = month;
    }

    int getYear() const {
        return year;
    }

    void setYear(int year) {
        Date::year = year;
    }

/// ostream / istream operators
    friend istream &operator>>(istream &is, Date &date) {
        char c;
        is >> date.day;
        is >> date.month;
        is >> date.year;
        if (date.day > 31 || date.month > 12) {
            throw invalid_argument("unsatisfied arguments");
        }
        return is;

    }

    friend ostream &operator<<(ostream &os, const Date &date) {
        os << "day: " << date.day << "\tmonth: " << date.month << "\tyear: " << date.year << endl;
        return os;
    }

/// methods
    Date operator+(Date &arg) {
        this->day += arg.day;
        if (this->day > 31) this->month += 1;
        if (this->month > 12) throw invalid_argument("unsatisfied arguments");
    }
    Date operator-(Date &arg1) {
        cout<<"day: "<<day - arg1.day<<"\tmonth: "<<month - arg1.month<<"\tyear: "<<year - arg1.year<<endl;
    }
    //binary operator ( < and >= )
    bool operator<(const Date &rhs) const {
        return day < rhs.day && month < rhs.month && year < rhs.year;
    }
    bool operator>=(const Date &rhs) const {
        return !(*this < rhs);
    }

};


int main() {
    Date a(22, 5, 2011);
    Date b;
    cout<<"enter b( days: months: year)"<<endl;
    cin >> reinterpret_cast<Date &>(b);
    cout << reinterpret_cast<Date &>(b);
    b.operator+(a);
    cout << reinterpret_cast<Date &>(b);
    a.operator-(b);
    cout << reinterpret_cast<Date &>(a);
    cout<<a.operator<(b)<<endl;

}
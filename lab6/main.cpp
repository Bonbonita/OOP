#include <iostream>
#include <string>
#include <list>

using namespace std;

class Student {
private:
		string sName, name, fName;
		int zalekNum;
		bool isPay;
public:
		Student() : sName("null"), name("null"), fName("null"),
		zalekNum(0), isPay(false) {}
		Student(string sName, string name, string fName, int zalekNum, bool isPay):
			sName(sName), name(name), fName(fName), zalekNum(zalekNum), isPay(isPay){}

		friend ostream &operator<<(ostream &os, const Student &student);

		void getAll() {
			cout<<"sName: "<<sName<<" name: "<<name<<" fName: "<<fName<<endl;
		}

};

class Grupa {
private: 
		string gName, spec;
		list <string> studList;
};

 ostream &operator<<(ostream &os, const Student &student) {
	os << "sName: " << student.sName << " name: " << student.name << " fName: " << student.fName
		 << " zalekNum: " << student.zalekNum << " isPay: " << student.isPay;
	return os;
}

int main() {
	Student dv;
	Student pr("second", "name", "father", 8800, true);
	Student ppr("padoru", "padoruu", "padooooru", 300, false);
	cout<<ppr;

}

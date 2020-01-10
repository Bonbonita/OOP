#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

class Student {
private:
	char *secondName = new char, *name = new char, *fName = new char, *phoneNumber = new char;
	int age;
public:
		Student():Student("null", "null", "null", "000000000", 0) {}

		Student(char *secondName, char *name, char  *fName,  char *phoneNumber, int age) :
		secondName(secondName), name(name), fName(fName), phoneNumber(phoneNumber), age(age) {}
		Student(const Student& temp) {
			this->age = temp.age;
			setFname(temp.fName);
			setName(temp.name);
			setSecond(temp.secondName);
			setPhone(temp.phoneNumber);
		}

		void setAge (int age) {this->age = age;}
		void setName (char *name) {this->name = name;}
		void setSecond (char *secondName) {this->secondName = secondName;}
		void setFname (char *fName) {this->fName = fName;}
		void setPhone (char *phoneNumber) {this->phoneNumber = phoneNumber;}

		friend ostream &operator<<(ostream &os, const Student &student) {
			os << "secondName: " << student.secondName << " name: " << student.name << " fName: " << student.fName
				 << " phoneNumber: " << student.phoneNumber << " age: " << student.age;
			return os;
		}

		void getAll () {
			wcout << "secondName: " << secondName << " name: " <<name << " fName: " <<fName
				 << " phoneNumber: " << phoneNumber << " age: " << age<<endl;
		}

};

class Animal {
private:
		char *species = new char;
		int old;
public:
		Animal():Animal("no", 0) {}
		Animal(char *species, int old) {setSpecies(species); this->old = old;}
		Animal(const Animal& temp) {this->old = temp.old; setSpecies(temp.species);}

		char *getSpecies()  {
			return this->species;
		}

		void setSpecies(char *species) {
			this->species = species;
		}

		int getOld()  {
			return this->old;
		}

		void setOld(int old) {
			this->old = old;
		}

		~Animal() {}

};




int main() {
  setlocale(LC_ALL, "Ukrainian");

  vector<wchar_t> alphabet;

for(int i = 0; i < 33; i++)

  {
    alphabet.push_back((wchar_t)((int)(L'а')+i));
  }
  for (int i = 0; i < 33; i++) {
    switch (alphabet[i]) {
      case ((int)(L'а')): alphabet[i] = L'A'; break;
      case ((int)(L'е')): alphabet[i] = L'Е'; break;
      case ((int)(L'є')): alphabet[i] = L'Є'; break;
      case ((int)(L'и')): alphabet[i] = L'И'; break;
      case ((int)(L'і')): alphabet[i] = L'І'; break;
      case ((int)(L'ї')): alphabet[i] = L'Ї'; break;
      case ((int)(L'о')): alphabet[i] = L'О'; break;
      case ((int)(L'у')): alphabet[i] = L'У'; break;
      case ((int)(L'ю')): alphabet[i] = L'Ю'; break;
      case ((int)(L'я')): alphabet[i] = L'Я'; break;
    }
  }
  for (int j = 0; j < 33; j++) {
    wcout<<alphabet[j]<<" ";
    if (j == 32) wcout<<"\n"<<endl;
  }


  list<wchar_t> SecondName = {L'К',L'а',L'ч',L'у',L'р',L'о',L'в',L'с',L'ь',L'к',L'и',L'й'};
	for ( auto it = SecondName.begin(); it != SecondName.end(); it++)
		wcout<<*it<<" ";


	wcout<<" \n"<<endl;
	SecondName.sort();
	for (	auto it = SecondName.begin(); it != SecondName.end(); it++ )
		wcout<<*it<<" ";

	wcout<<"\n************************************"<<endl;
	vector<Animal> obj;
	for (int i = 0; i < 10; i++) obj.push_back(Animal());

	for(unsigned int i = 0; i < obj.size(); i++ ) {
			wcout<<"species: "<<obj[i].getSpecies()<<" old: "<<obj[i].getOld()<<endl;
	}

	wcout<<"************"<<endl;
	wcout<<"iterator"<<endl;
	vector<Animal>::iterator it;
	for (it = obj.begin(); it != obj.end(); it++) {
		wcout<<"species: "<<it->getSpecies()<<", old: "<<it->getOld()<<endl;
	}

	wcout<<"************************************"<<endl;
	list <Student> ls;
	for (int i = 0; i < 5; i++) ls.push_back(Student());

	list<Student>::iterator iter;
	for (iter = ls.begin(); iter != ls.end(); iter++) {
			iter->getAll();
	}
}

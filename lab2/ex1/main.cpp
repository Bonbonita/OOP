#include <iostream>
#include <cstring>

using namespace std;

class House {
private:
    char *type;
    int number;
public:
    House () {
        this->type = NULL;
        this->number = 0;
    }
    House (int number, char *temp) {
        this->number = number;
        this->type = new char [number];
        for (int i = 0; i < number; i++) {
            type[i] = *temp;
        }
    }
    House (const House &temp) {
        this->number = temp.number;
        this->type = new char [temp.number];
        for (int i = 0; i < temp.number; i++) {
            this->type[i] = temp.type[i];
        }
    }
    ~House() {delete type;}

    void SetType (char *temp) {
        this->type = temp;
    }
    char * GetType () {
        return this->type;
    }

    void Print() {
        cout<<"type: "<<this->type<<"\tnumber: "<<this->number<<endl;
    }


};

int main () {
    House a();
    House b(5, "Nazar");
    b.SetType( "igop");
    cout<<b.GetType()<<endl;
    House c(b);
    c.Print();
}
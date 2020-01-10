#include <iostream>
#include <cstdio>

using namespace std;
struct node {
    int data;
    node *next;
};
class List {
private:
  node *head;
  node *tail;
public:
    List () {
        head = NULL;
        tail = NULL;
    }
    ~List() {
        if (tail) delete tail;
    }
    void add(int data) {
        node *temp = new node;
        temp->data = data;
        temp->next = NULL;
        if (head != NULL) {
            tail->next = temp;
            tail = temp;
        } else {
            head = temp;
            tail = temp;
        }
    }
    void Del () {
        node *temp = head;
        head = head->next;
        delete temp;
    }
    void Print () {
        node *temp = head;
        while (temp != 0) {
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }

};

int main() {
   List a;
   a.add(1);
   a.Print();
   a.Del();
}
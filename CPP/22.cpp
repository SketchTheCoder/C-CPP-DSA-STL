#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void display() {
        cout << "Display from Base class" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void display() override {
        cout << "Display from Derived class" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    Base obj;
    basePtr=&obj;
    basePtr->display();
    cout<<endl;
    // Base pointer pointing to Derived object
    basePtr = &derivedObj;

    // Calls the overridden function in Derived class
    basePtr->display();

    return 0;
}
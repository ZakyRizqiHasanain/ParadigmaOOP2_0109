#include<iostream>
using namespace std;

class baseclass {
public:
    virtual void perkenalan() {
       cout << "Hallo saya function dari base class";
    }
};

class derivedclass : public baseclass {
public:
    void perkenalan() {
        cout << "Hallo saya function dari derivedclass";
    }
};


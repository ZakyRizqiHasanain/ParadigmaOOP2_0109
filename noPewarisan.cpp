#include<iostream>
using namespace std;

class baseclass final{
public:
    virtual void perkenalan() {
       cout << "Hallo saya function dari base class";
    }
};

class baseclass1 {
public:
    virtual void perkenalan() {
       cout << "Hallo saya function dari base class";
    }
};

class derivedclass : public baseclass1 {
public:
    void perkenalan() {
        cout << "Hallo saya function dari derivedclass";
    }
};

int main() {
    derivedclass a;
    a.perkenalan();

    return 0;
}
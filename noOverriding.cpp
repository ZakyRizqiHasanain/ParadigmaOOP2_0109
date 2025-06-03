#include<iostream>
using namespace std;

class baseclass {
public:
    virtual void perkenalan() final{
       cout << "Hallo saya function dari base class";
    }
};

class derivedclass : public baseclass {
public:
    void perkenalan1() {
        cout << "Hallo saya function dari derivedclass";
    }
};

int main() {
    derivedclass a;
    a.perkenalan1();

    return 0;
}
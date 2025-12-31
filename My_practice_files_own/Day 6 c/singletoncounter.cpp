/*
 * Purpose : Implement singleton counter (controlled instance)
 * Author  : Harshinie M
 * Date    : 29/12/2025
 */

#include <iostream>
using namespace std;

class SingletonCounter {
    static SingletonCounter *instance; // single instance pointer
    int count;

    // Private constructor
    SingletonCounter() {
        count = 0;
        cout << "Singleton object created" << endl;
    }

public:
    // Public access method
    static SingletonCounter* getInstance() {
        if (instance == nullptr) {
            instance = new SingletonCounter();
        }
        return instance;
    }

    void increment() {
        count++;
    }

    void display() const {
        cout << "Count = " << count << endl;
    }
};

// Static member definition
SingletonCounter* SingletonCounter::instance = nullptr;

int main() {
    SingletonCounter *c1 = SingletonCounter::getInstance();
    c1->increment();
    c1->increment();

    SingletonCounter *c2 = SingletonCounter::getInstance();
    c2->increment();

    c1->display();
    c2->display();

    return 0;
}


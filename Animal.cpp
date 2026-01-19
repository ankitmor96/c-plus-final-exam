#include <iostream>
using namespace std;

class Animal {

public:      // same class but different forms :-

    virtual void sound() = 0;
    virtual void move() = 0;

};

class Dog : public Animal {

public:

    void sound() {

        cout<<"Dog : barks"<<endl;

    }

    void move() {

        cout<<"Dog : runs"<<endl;

    }

};

class Bird : public Animal {

public:

    void sound() {

        cout<<"Bird : chirps"<<endl;

    }

    void move() {

        cout<<"Bird  : flies"<<endl;

    }

};

int main() {

    Animal* A[2];
    Dog D;
    Bird B;

    A[0] = &D;
    A[1] = &B;

    for (int i = 0; i < 2; i++) {

        A[i]->sound();
        A[i]->move();

    }

    return 0;
}

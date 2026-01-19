#include <iostream>
using namespace std;

class Shape {

public:

    virtual void display() {

        cout<<"This is  shape"<< endl;

    }

};

class Circle : public Shape {

public:

    void display() {

        cout<<"This is  Circle"<<endl;

    }

};

class Rectangle : public Shape {

public:

    void display() {

        cout<<"This is  Rectangle"<<endl;

    }
};

int main() {

    Shape* S[4];
    Circle C;
    Rectangle R;

    S[0] = &C;
    S[1] = &R;

    for (int i = 0; i < 4; i++) {
        S[i]->display();
    }

    return 0;
}

#include <iostream>
using namespace std;

class Shape {

protected:

    string color;

public:

    void setColor(string c) {

        color = c;

    }

    virtual float area() = 0;  

};

class Circle : public Shape {

private:

    int radius;

public:

    Circle(int r) {

        radius = r;

    }

    float area() {

        return 3.14 * radius * radius;

    }
};

class Rectangle : public Shape {

private:

    int length, width;

public:

    Rectangle(int l, int w) {

        length = l;
        width = w;
    }

    float area() {

        return (length * width);

    }

};

int main() {

    Circle C(5);
    Rectangle R(4, 6);

    cout<<"Circle Area        : "<<C.area()<< endl;
    cout<<"Rectangle Area     : "<<R.area()<< endl;

    return 0;
}

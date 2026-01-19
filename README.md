📘 C++ OOP Programs – Input & Output


1️⃣ Rectangle Class – Area Calculation
📌 Description

This program demonstrates Encapsulation using a Rectangle class with private data members and public member functions.

🔽 Input
#include <iostream>
using namespace std;

class Rectangle {

private:

    int length;
    int width;

public:
   
    void setLength(int l) {
        length = l;
    }

    void setWidth(int w) {
        width = w;
    }

   
    int getLength() {
        return length;
    }

    int getWidth() {
        return width;
    }

    
    float calculateArea() {

        return (length * width);
    }

};

int main() {
    Rectangle R;   

   
    R.setLength(10);
    R.setWidth(2);

   
    cout <<"Length       :" <<R.getLength()<< endl;
    cout <<"Width        :" <<R.getWidth()<< endl;

    
    cout <<"area of Rectangle         :" <<R.calculateArea()<< endl;

    return 0;
}


🔼 Output
Length : 10
Width  : 2
Area of Rectangle : 20

2️⃣ Employee Class – Employee Details
📌 Description

This program demonstrates Encapsulation by storing employee details privately and accessing them using getter methods.

🔽 Input
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


🔼 Output
Name        : Ankit
Salary      : 30000
Designation : Developer

3️⃣ Shape, Circle & Rectangle – Runtime Polymorphism
📌 Description

This program demonstrates Abstraction and Polymorphism using a base class Shape with a pure virtual function area().

🔽 Input

#include <iostream>
using namespace std;

class Employee {

private:

    string name;
    int salary;
    string designation;

public:

    void setData(string n, int s, string d) {

        name = n;
        salary = s;
        designation = d;

    }

    string getName() {

        return name;

    }

    int getSalary() {

        return salary;

    }

    string getDesignation() {

        return designation;

    }
};

int main() {

    Employee E;

    E.setData("Ankit", 30000, "Developer");

    cout<<"Name        : " << E.getName()<< endl;
    cout<<"Salary      : " << E.getSalary()<< endl;
    cout<<"Designation : " << E.getDesignation()<< endl;

    return 0;
}

🔼 Output
Circle Area     : 78.5
Rectangle Area  : 24








4️⃣ Function Overriding – Display Method
📌 Description

This program demonstrates Function Overriding using virtual functions.

🔽 Input
Shape *s;
Circle c;
s = &c;
s->display();

🔼 Output
This is Circle

🛠 Concepts Used

Class & Object

Encapsulation

Inheritance

Polymorphism

Function Overriding

Virtual Functions

Abstraction

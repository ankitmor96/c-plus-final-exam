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

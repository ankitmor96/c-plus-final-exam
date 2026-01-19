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

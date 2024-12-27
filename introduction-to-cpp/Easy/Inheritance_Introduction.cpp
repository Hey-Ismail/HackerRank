#include <iostream>
using namespace std;

class Triangle {
   public:
    void triangle() {
        cout << "I am a triangle\n";
    }
    // ...existing code...
};

class Isosceles : public Triangle {
   public:
    void isosceles() {
        cout << "I am an isosceles triangle\n";
    }
    void description() {
        cout << "In an isosceles triangle two sides are equal\n";
    }
    // ...existing code...
};

int main() {
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();
    return 0;
}

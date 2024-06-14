#include <iostream>
using namespace std;

class Cal {
public:
    inline  Mul(int x, int y) {
        return x * y;
    }

    inline  Cube(int c) {
        return c * c * c;
    }
};

int main() {
    Cal obj;
    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    int result = obj.Mul(a, b);
    cout << "Mul Result: " << result << endl;

    int c;
    cout << "Enter C for Cube: ";
    cin >> c;
    int cubeResult = obj.Cube(c);
    cout << "Cube Result: " << cubeResult << endl;

}

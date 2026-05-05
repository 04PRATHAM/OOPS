#include <iostream>
using namespace std;

void display(int);
void display(float);
void display(int,float);
class show {
    public:
        void display(int x) {
            cout << "Integer: " << x << endl;
        }

        void display(float x) {
            cout << "Float: " << x << endl;
        }

        void display(int x, float y) {
            cout << "Integer: " << x << ", Float: " << y << endl;
        }
};

int main() {
    show s;
    s.display(5);
    s.display(3.14f);
    s.display(5, 3.14f);
    return 0;
}

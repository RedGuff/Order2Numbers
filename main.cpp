#include <iostream>
using namespace std;

void order(auto& a = 0, auto& b = 0) {
    if(a > b) {    // Usually, the minimum is before the maximum, and sometimes it is not the default value.
        auto temp = b;
        b = a;
        a = temp;
        }
    }


int main() {
    int x = 20;
    int y = 3;
    order(x, y);
    cout << x  << " " << y << endl;
    return 0;
    }

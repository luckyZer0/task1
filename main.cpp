//hello world in c++
#include <iostream>

using namespace std;

int main() {

    int h;
    cout << "Insert an odd number: " << endl;
    cin >> h;

    if (h % 2 == 0) {
        cout << h << " its an odd number";
    }
    else if (h == 0) {
        cout << h << " ERROR";
    }
    else {
        cout << h << " its an even number";
    }
    return 0;
}
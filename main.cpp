//hello world in c++
#include <iostream>

using namespace std;

int main() {

    int h;
    cout << "Insert an odd number: " << endl;
    cin >> h;

    if (h % 2 == 0) {
        cout << "its an odd number";
    }
    else {
        cout << "its an even number";
    }
    return 0;
}
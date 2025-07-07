#include <iostream>
using namespace std;
int main() {

    int pin;

    cout << "enter pin";
    cin >> pin;

    if (pin == 1234) {
        cout << "CW" << endl;
    } else {
        cout << "Try Again";
        cin >> pin;

        if (pin == 1234) {
            cout << "CW" << endl;
        } else {
            cout << "Try Again";
            cin >> pin;
            if (pin == 1234) {
                cout << "CW";
            } else {
                cout << "Blocked";
            }
        }
    }
}
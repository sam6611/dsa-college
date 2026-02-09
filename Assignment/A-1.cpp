#include <bits/stdc++.h>
using namespace std;

int calculator(int val1, int val2, string op) {
    if (op == "+") {
        return val1 + val2;
    }
    else if (op == "-") {
        return val1 - val2;
    }
    else if (op == "*") {
        return val1 * val2;
    }
    else if (op == "/") {
        if (val2 == 0) {
            cout << "Division by zero not allowed\n";
            return 0;
        }
        return val1 / val2;
    }
    else {
        cout << "Invalid operation\n";
        return 0;
    }
}

int main() {
    int val1, val2;
    string op;

    cin >> val1 >> val2 >> op;

    int result = calculator(val1, val2, op);
    cout << result;

    return 0;
}
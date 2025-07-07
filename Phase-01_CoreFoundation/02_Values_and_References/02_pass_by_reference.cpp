/*
 * Topic: Pass by Reference
 *
 * Passing by reference means the function receives a **reference (alias)** to the original variable.
 * So, any changes made inside the function will **affect the original**.
 *
 * 🔹 Syntax:
 *   void func(int& x) { ... }
 *
 * Interview Tip:
 * Pass by reference is faster for large data and allows modification.
 */

#include <iostream>
using namespace std;

void increment(int& x) {
    x += 1;
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int num = 10;
    increment(num);

    cout << "Outside function: num = " << num << endl; // changed

    return 0;
}

/*
 * Topic: Pass by Value
 *
 * When a variable is passed by value to a function, a **copy** is made.
 * Changes made inside the function do **not** affect the original variable.
 *
 * 🔹 Used when:
 * - You don’t want the original data modified.
 * - The data type is small (like int, float).
 *
 * Interview Tip:
 * Value passing is safe, but inefficient for large objects (like vectors or structs).
 */

#include <iostream>
using namespace std;

void increment(int x) {
    x += 1;
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int num = 10;
    increment(num);

    cout << "Outside function: num = " << num << endl; // unchanged

    return 0;
}

/*
 * Topic: const Reference
 *
 * A const reference allows access to the original variable without making a copy,
 * but it **prevents modification**.
 *
 * 🔹 Syntax:
 *   void show(const int& x) { ... }
 *
 * 🔹 Used when:
 * - You want to avoid copying large objects.
 * - You want to ensure the data isn’t modified.
 *
 * Interview Tip:
 * Prefer `const &` for read-only function parameters, especially strings and big objects.
 */

#include <iostream>
using namespace std;

void printValue(const int& x) {
    // x += 1; // ❌ Error: cannot modify a const reference
    cout << "Value: " << x << endl;
}

int main() {
    int num = 99;
    printValue(num);
    return 0;
}

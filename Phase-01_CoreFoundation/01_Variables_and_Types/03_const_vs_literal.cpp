/*
 * Topic: const vs Literal Values
 *
 * A literal is a fixed value written directly in code like 42, 'A', true, 3.14.
 * A `const` variable assigns a name to a value that cannot be changed later.
 *
 * 🔹 Example:
 *   const int max = 100;
 *   max = 200;   // ❌ Error: const cannot be modified
 *
 * 🔹 Notes:
 * - Use `const` to avoid magic numbers in your code.
 * - Makes the code easier to read, maintain, and debug.
 * - Interviewers often ask when and why to use const.
 */

#include <iostream>
using namespace std;

int main() {
    const int MaxStudents = 60;   // named constant
    int current = 45;

    cout << "Max allowed: " << MaxStudents << endl;
    cout << "Remaining slots: " << MaxStudents - current << endl;

    // MaxStudents = 80; // ❌ Error: can't modify const

    return 0;
}

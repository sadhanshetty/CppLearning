/*
 * Topic: Basic Data Types in C++
 *
 * Data types are used to define the type of data a variable can hold.
 * C++ supports several fundamental (built-in) data types like:
 *
 *   - int      → Integer numbers (e.g., 1, -5, 100)
 *   - float    → Single precision decimal numbers (e.g., 3.14)
 *   - double   → Double precision decimals (more accurate than float)
 *   - char     → Single characters (e.g., 'A', 'z')
 *   - bool     → Boolean true/false values
 *
 * Default sizes (on most systems):
 *   int      : 4 bytes
 *   float    : 4 bytes
 *   double   : 8 bytes
 *   char     : 1 byte
 *   bool     : 1 byte (true/false)
 *
 * 🔹 Notes:
 * - Use `float` when precision is not critical.
 * - Prefer `double` in scientific or accurate decimal calculations.
 * - `bool` is great for flags, conditions, and logical checks.
 */

#include <iostream>
using namespace std;

int main() {
    int age = 25;               // 4 bytes
    float pi = 3.14f;           // 4 bytes
    double gravity = 9.81;      // 8 bytes
    char grade = 'A';           // 1 byte
    bool passed = true;         // 1 byte

    cout << "Age (int): " << age << endl;
    cout << "Pi (float): " << pi << endl;
    cout << "Gravity (double): " << gravity << endl;
    cout << "Grade (char): " << grade << endl;
    cout << "Passed (bool): " << boolalpha << passed << endl;

    return 0;
}

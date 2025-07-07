/*
 * Topic: Type Modifiers
 *
 * C++ allows modifying base types using:
 *   - signed
 *   - unsigned
 *   - short
 *   - long
 *
 * These modifiers change the size or valid value range of the type.
 *
 * 🔹 Examples:
 *   - unsigned int → only positive values (0 and above)
 *   - short int    → smaller range than normal int
 *   - long int     → bigger range than normal int
 *
 * 🔹 Notes:
 * - Use `unsigned` when you know values can't be negative (like age, quantity).
 * - Interviewers may ask for difference between signed and unsigned.
 */

#include <iostream>
using namespace std;

int main() {
    unsigned int age = 30;     // only ≥ 0
    long salary = 1000000;     // larger range
    short temperature = -20;   // smaller size

    cout << "Age (unsigned int): " << age << endl;
    cout << "Salary (long): " << salary << endl;
    cout << "Temperature (short): " << temperature << endl;

    return 0;
}

/*
 * Topic: Type Inference using `auto`
 *
 * Type inference means the compiler automatically determines the type of a variable.
 * In C++, the `auto` keyword lets you avoid writing the full type name.
 *
 * Syntax:
 *   auto varName = value;
 *   → The compiler figures out the type from the value on the right side.
 *
 * 🔹 Example:
 *   auto x = 10;        // int
 *   auto y = 3.14;      // double
 *
 * 🔹 Notes:
 * - `auto` improves readability and reduces repetition.
 * - Use carefully when the type must be obvious.
 * - `auto` always requires initialization.
 */

#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    auto num = 42;           // int
    auto pi = 3.14;          // double
    auto name = "Tommy";   // const char*

    cout << "num: " << num << " (type: " << typeid(num).name() << ")" << endl;
    cout << "pi: " << pi << " (type: " << typeid(pi).name() << ")" << endl;
    cout << "name: " << name << " (type: " << typeid(name).name() << ")" << endl;

    return 0;
}

/*
 * Topic: Pointer Basics
 *
 * A pointer is a variable that stores the **memory address** of another variable.
 *
 * 🔹 Syntax:
 *   int x = 10;
 *   int* ptr = &x;   // pointer to x
 *
 * 🔹 Notes:
 * - Use `*` to declare and dereference.
 * - Use `&` to get the address of a variable.
 *
 * 🧠 Tip:
 * Dereferencing means accessing the value at the address the pointer holds.
 */

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;  // pointer to a

    cout << "Value of a: " << a << endl;
    cout << "Address of a (&a): " << &a << endl;
    cout << "Value in ptr: " << ptr << endl;       // same as &a
    cout << "Value pointed by ptr (*ptr): " << *ptr << endl;

    *ptr = 50;  // changing a through pointer
    cout << "a after changing *ptr: " << a << endl;

    return 0;
}

/*
 * Topic: nullptr, Dangling and Uninitialized Pointers
 *
 * 🔹 nullptr:
 *   Special keyword in C++ to represent a null pointer (no object).
 *
 * 🔹 Dangling Pointer:
 *   A pointer that points to memory that has been deleted/freed.
 *
 * 🔹 Uninitialized Pointer:
 *   A pointer that hasn't been set — very dangerous.
 *
 * 🧠 Tip:
 * Always initialize pointers to `nullptr` and avoid using deleted memory.
 */

#include <iostream>
using namespace std;

int main() {
    int* ptr1 = nullptr;  // safe initialization

    int* dangling;
    {
        int temp = 42;
        dangling = &temp;
    } // temp goes out of scope → dangling now invalid

    int* uninit; // uninitialized pointer — dangerous!

    cout << "nullptr pointer: " << ptr1 << endl;
    // cout << *dangling; // ❌ Undefined behavior
    // cout << *uninit;   // ❌ Undefined behavior

    return 0;
}

/*
 * Topic: Dynamic Memory Allocation (new/delete)
 *
 * C++ allows allocating memory at runtime using `new`.
 * You must free it manually using `delete`.
 *
 * 🔹 Syntax:
 *   int* ptr = new int;        // single int
 *   delete ptr;                // free memory
 *
 *   int* arr = new int[5];     // array
 *   delete[] arr;              // free array
 *
 * 🧠 Tip:
 * Forgetting `delete` causes memory leaks.
 */

#include <iostream>
using namespace std;

int main() {
    int* p = new int;       // allocates 1 int
    *p = 100;
    cout << "Value: " << *p << endl;
    delete p;               // free memory

    int* arr = new int[3];  // allocates array of 3 ints
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout << "Array: ";
    for (int i = 0; i < 3; ++i)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr;           // free array

    return 0;
}

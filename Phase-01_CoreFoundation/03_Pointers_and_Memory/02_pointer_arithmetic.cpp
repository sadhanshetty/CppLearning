/*
 * Topic: Pointer Arithmetic
 *
 * You can perform arithmetic operations on pointers to navigate through arrays.
 *
 * 🔹 Example:
 *   ptr++ moves to the next element (based on data type size).
 *
 * 🧠 Tip:
 * Pointer arithmetic is mostly used with arrays.
 */

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int* ptr = arr;  // same as &arr[0]

    cout << "First element: " << *ptr << endl;  // 10

    ptr++;  // moves to next int (next memory slot)
    cout << "Second element: " << *ptr << endl; // 20

    ptr += 2;
    cout << "Fourth element: " << *ptr << endl; // 40

    return 0;
}

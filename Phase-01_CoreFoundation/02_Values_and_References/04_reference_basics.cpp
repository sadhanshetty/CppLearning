/*
 * Topic: Reference Basics
 *
 * A reference is an alias for another variable — it refers to the same memory.
 *
 * 🔹 Syntax:
 *   int a = 10;
 *   int& ref = a;
 *
 * 🔹 Notes:
 * - Changing the reference also changes the original.
 * - A reference must be initialized when declared.
 *
 * Interview Tip:
 * You can use references to avoid unnecessary copies and to modify the original value.
 */

#include <iostream>
using namespace std;

int main() {
    int a = 50;
    int& ref = a;  // ref is another name for a

    cout << "a = " << a << ", ref = " << ref << endl;

    ref = 100;     // modifies 'a'

    cout << "After changing ref → a = " << a << endl;

    return 0;
}

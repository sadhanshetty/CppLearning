/*
 * Topic: Pointer vs Reference – Real-World Analogy
 *
 * 🔸 Reference → Like a Nickname
 * - Always tied to one variable (person)
 * - Cannot be reassigned
 * - Must be initialized when declared
 *
 * 🔸 Pointer → Like a Remote Control
 * - Can be reassigned to different objects
 * - Can be null (point to nothing)
 * - Needs dereferencing (*) to access value
 *
 * 🔁 Real-World Example:
 *
 *   int Tommy = 100;
 *   int& nickname = Tommy;   // nickname = "Genius" → Always refers to Tommy
 *
 *   int* remote = &Tommy;    // pointer = Remote control to Tommy
 *   remote = nullptr;         // Now points to nothing (TV is off)
 *
 * 🧠 Tip:
 * - Use reference when the relationship is fixed.
 * - Use pointer when flexibility is needed.
 */

#include <iostream>
using namespace std;

void pointerExample() {
    int tv1 = 10;
    int tv2 = 20;

    int* remote = &tv1;     // pointer to tv1
    cout << "TV1 volume: " << *remote << endl;

    *remote = 50;           // changes tv1
    cout << "TV1 volume after change: " << tv1 << endl;

    remote = &tv2;          // now points to tv2
    *remote = 99;
    cout << "TV2 volume after change: " << tv2 << endl;

    remote = nullptr;       // now remote is off
}

void referenceExample() {
    int Tommy = 100;
    int& nickname = Tommy;  // reference to Tommy

    cout << "Original value (Tommy): " << Tommy << endl;
    cout << "Nickname value: " << nickname << endl;

    nickname = 200;          // changes Tommy
    cout << "After changing nickname: " << Tommy << endl;
}

int main() {
    cout << "=== Reference Example (Nickname) ===" << endl;
    referenceExample();

    cout << "\n=== Pointer Example (Remote Control) ===" << endl;
    pointerExample();

    return 0;
}

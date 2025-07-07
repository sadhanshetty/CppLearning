/*
 * Topic: Smart Pointers (Intro)
 *
 * Smart pointers automatically manage memory and avoid manual `delete`.
 * Introduced in C++11.
 *
 * 🔹 Types:
 * - unique_ptr → sole ownership (auto deleted)
 * - shared_ptr → shared ownership (ref counted)
 * - weak_ptr   → non-owning pointer (used with shared_ptr)
 *
 * 🧠 Tip:
 * Always prefer smart pointers in modern C++ to avoid leaks and crashes.
 */

#include <iostream>
#include <memory>  // for smart pointers
using namespace std;

void useUnique() {
    unique_ptr<int> p1 = make_unique<int>(100);
    cout << "unique_ptr: " << *p1 << endl;
}

void useShared() {
    shared_ptr<int> p2 = make_shared<int>(200);
    shared_ptr<int> p3 = p2;  // shared ownership

    cout << "shared_ptr: " << *p3 << " (use count: " << p3.use_count() << ")" << endl;
}

int main() {
    useUnique();
    useShared();

    return 0;
}

/*
 * Topic: Enums vs Enum Classes
 *
 * enum: Used to define a set of named integer constants.
 * enum class: A safer, scoped version introduced in C++11.
 *
 * 🔹 Differences:
 *   - `enum` values are global and can conflict with other names.
 *   - `enum class` values are scoped (you must use EnumName::Value).
 *   - `enum` allows implicit conversion to int; `enum class` does not.
 *
 * 🔹 Notes:
 * - Prefer `enum class` in modern C++ for safety and clarity.
 * - Common use: status codes, app states, user roles, etc.
 */

#include <iostream>
using namespace std;

enum Status { OK, Warning, Error };             // traditional enum
enum class State { Start, Stop, Pause };        // scoped enum

int main() {
    Status status = Warning;
    State state = State::Pause;

    cout << "Status: " << status << endl;

    if (state == State::Pause) {
        cout << "State is Pause" << endl;
    }

    return 0;
}
